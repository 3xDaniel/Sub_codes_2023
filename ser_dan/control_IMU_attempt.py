import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from geometry_msgs.msg import Pose


class MinimalPublisher(Node):

    def __init__(self):
        super().__init__('minimal_publisher')
        
        self.DICT_POSE = {"1":0.0 , "2" : 0.0, "3" : 0.0, "4" : 0.0, "5" : 0.0, "6" : 0.0, "BRAZO" : 0.0}
        self.DICT_POSE_PAST = {"1":0.0 , "2" : 0.0, "3" : 0.0, "4" : 0.0, "5" : 0.0, "6" : 0.0, "BRAZO" : 0.0}
        self.x_ang = 0
        
        self.subscription_POSE = self.create_subscription(Pose, 'pre_cmd_vel', self.POSE_listener_callback, 10)
        self.subscription_IMU = self.create_subscription(Twist, 'Accel_giro', self.IMU_listener_callback, 10)
        
        
        
        self.publisher_POSE = self.create_publisher(Pose, 'cmd_vel', 10)
        timer_period = 0.5
        self.timer_PUB = self.create_timer(timer_period, self.timer_callback)
        
        #self.subscriber_PUB_POSE = self.create_subscription(Pose, 'cmd_vel', self.PUB_POSE_listener_callback,10)
    
    
    #def PUB_POSE_listener_callback(self):
    #	self.DICT_POSE_FUTURE["1"] = self.DICT_POSE["1"]
    #	self.DICT_POSE_FUTURE["2"] = self.DICT_POSE["2"]
    #	self.DICT_POSE_FUTURE["3"] = self.DICT_POSE["3"]
    #	self.DICT_POSE_FUTURE["4"] = self.DICT_POSE["4"]
    #	
    #	self.DICT_POSE_FUTURE["5"] = self.DICT_POSE["5"]
    #	self.DICT_POSE_FUTURE["6"] = self.DICT_POSE["6"]
    #	self.DICT_POSE_FUTURE["BRAZO"] = self.DICT_POSE["BRAZO"]
    
    def POSE_listener_callback(self, msg):
    	self.DICT_POSE["1"] = msg.orientation.x
    	self.DICT_POSE["2"] = msg.orientation.y
    	self.DICT_POSE["3"] = msg.orientation.z
    	self.DICT_POSE["4"] = msg.orientation.w
    	
    	self.DICT_POSE["5"] = msg.position.x
    	self.DICT_POSE["6"] = msg.position.y
    	self.DICT_POSE["BRAZO"] = msg.position.z
    	    	
    	
    def IMU_listener_callback(self, msg):
    	self.x_ang = msg.angular.x
    
    def control(self):
    	self.m_adelante_arriba = "1"
    	self.m_atras_arriba = "2"
    	self.valor_control = 50
    	
    	if self.x_ang > 0:
    		self.DICT_POSE_PAST[self.m_adelante_arriba] -= self.valor_control
    		self.DICT_POSE_PAST[self.m_atras_arriba] += self.valor_control
    		
    	elif self.x_ang < 0:
    		self.DICT_POSE_PAST[self.m_adelante_arriba] += self.valor_control
    		self.DICT_POSE_PAST[self.m_atras_arriba] -= self.valor_control
	
    def timer_callback(self):
    	msg = Pose()
    	self.control()
    	
    	msg.orientation.x = self.DICT_POSE_PAST["1"]
    	msg.orientation.y = self.DICT_POSE_PAST["2"]
    	msg.orientation.z = self.DICT_POSE_PAST["3"]
    	msg.orientation.w = self.DICT_POSE_PAST["4"]
    	
    	msg.position.x = self.DICT_POSE_PAST["5"]
    	msg.position.y = self.DICT_POSE_PAST["6"]
    	msg.position.z = self.DICT_POSE_PAST["BRAZO"]
    	
    	self.publisher_POSE.publish(msg)
    	self.publisher_POSE_PAST = self.publisher_POSE


def main(args=None):
    rclpy.init(args=args)

    minimal_publisher = MinimalPublisher()

    rclpy.spin(minimal_publisher)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    minimal_publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
