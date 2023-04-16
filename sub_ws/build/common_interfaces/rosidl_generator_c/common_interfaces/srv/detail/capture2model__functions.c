// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from common_interfaces:srv/Capture2model.idl
// generated code does not contain a copyright notice
#include "common_interfaces/srv/detail/capture2model__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
common_interfaces__srv__Capture2model_Request__init(common_interfaces__srv__Capture2model_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input
  return true;
}

void
common_interfaces__srv__Capture2model_Request__fini(common_interfaces__srv__Capture2model_Request * msg)
{
  if (!msg) {
    return;
  }
  // input
}

bool
common_interfaces__srv__Capture2model_Request__are_equal(const common_interfaces__srv__Capture2model_Request * lhs, const common_interfaces__srv__Capture2model_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input
  if (lhs->input != rhs->input) {
    return false;
  }
  return true;
}

bool
common_interfaces__srv__Capture2model_Request__copy(
  const common_interfaces__srv__Capture2model_Request * input,
  common_interfaces__srv__Capture2model_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input
  output->input = input->input;
  return true;
}

common_interfaces__srv__Capture2model_Request *
common_interfaces__srv__Capture2model_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Request * msg = (common_interfaces__srv__Capture2model_Request *)allocator.allocate(sizeof(common_interfaces__srv__Capture2model_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_interfaces__srv__Capture2model_Request));
  bool success = common_interfaces__srv__Capture2model_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_interfaces__srv__Capture2model_Request__destroy(common_interfaces__srv__Capture2model_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_interfaces__srv__Capture2model_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_interfaces__srv__Capture2model_Request__Sequence__init(common_interfaces__srv__Capture2model_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Request * data = NULL;

  if (size) {
    data = (common_interfaces__srv__Capture2model_Request *)allocator.zero_allocate(size, sizeof(common_interfaces__srv__Capture2model_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_interfaces__srv__Capture2model_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_interfaces__srv__Capture2model_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
common_interfaces__srv__Capture2model_Request__Sequence__fini(common_interfaces__srv__Capture2model_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      common_interfaces__srv__Capture2model_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

common_interfaces__srv__Capture2model_Request__Sequence *
common_interfaces__srv__Capture2model_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Request__Sequence * array = (common_interfaces__srv__Capture2model_Request__Sequence *)allocator.allocate(sizeof(common_interfaces__srv__Capture2model_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_interfaces__srv__Capture2model_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_interfaces__srv__Capture2model_Request__Sequence__destroy(common_interfaces__srv__Capture2model_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_interfaces__srv__Capture2model_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_interfaces__srv__Capture2model_Request__Sequence__are_equal(const common_interfaces__srv__Capture2model_Request__Sequence * lhs, const common_interfaces__srv__Capture2model_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_interfaces__srv__Capture2model_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_interfaces__srv__Capture2model_Request__Sequence__copy(
  const common_interfaces__srv__Capture2model_Request__Sequence * input,
  common_interfaces__srv__Capture2model_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_interfaces__srv__Capture2model_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_interfaces__srv__Capture2model_Request * data =
      (common_interfaces__srv__Capture2model_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_interfaces__srv__Capture2model_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_interfaces__srv__Capture2model_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_interfaces__srv__Capture2model_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
common_interfaces__srv__Capture2model_Response__init(common_interfaces__srv__Capture2model_Response * msg)
{
  if (!msg) {
    return false;
  }
  // quantity
  return true;
}

void
common_interfaces__srv__Capture2model_Response__fini(common_interfaces__srv__Capture2model_Response * msg)
{
  if (!msg) {
    return;
  }
  // quantity
}

bool
common_interfaces__srv__Capture2model_Response__are_equal(const common_interfaces__srv__Capture2model_Response * lhs, const common_interfaces__srv__Capture2model_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // quantity
  if (lhs->quantity != rhs->quantity) {
    return false;
  }
  return true;
}

bool
common_interfaces__srv__Capture2model_Response__copy(
  const common_interfaces__srv__Capture2model_Response * input,
  common_interfaces__srv__Capture2model_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // quantity
  output->quantity = input->quantity;
  return true;
}

common_interfaces__srv__Capture2model_Response *
common_interfaces__srv__Capture2model_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Response * msg = (common_interfaces__srv__Capture2model_Response *)allocator.allocate(sizeof(common_interfaces__srv__Capture2model_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(common_interfaces__srv__Capture2model_Response));
  bool success = common_interfaces__srv__Capture2model_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
common_interfaces__srv__Capture2model_Response__destroy(common_interfaces__srv__Capture2model_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    common_interfaces__srv__Capture2model_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
common_interfaces__srv__Capture2model_Response__Sequence__init(common_interfaces__srv__Capture2model_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Response * data = NULL;

  if (size) {
    data = (common_interfaces__srv__Capture2model_Response *)allocator.zero_allocate(size, sizeof(common_interfaces__srv__Capture2model_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = common_interfaces__srv__Capture2model_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        common_interfaces__srv__Capture2model_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
common_interfaces__srv__Capture2model_Response__Sequence__fini(common_interfaces__srv__Capture2model_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      common_interfaces__srv__Capture2model_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

common_interfaces__srv__Capture2model_Response__Sequence *
common_interfaces__srv__Capture2model_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  common_interfaces__srv__Capture2model_Response__Sequence * array = (common_interfaces__srv__Capture2model_Response__Sequence *)allocator.allocate(sizeof(common_interfaces__srv__Capture2model_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = common_interfaces__srv__Capture2model_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
common_interfaces__srv__Capture2model_Response__Sequence__destroy(common_interfaces__srv__Capture2model_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    common_interfaces__srv__Capture2model_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
common_interfaces__srv__Capture2model_Response__Sequence__are_equal(const common_interfaces__srv__Capture2model_Response__Sequence * lhs, const common_interfaces__srv__Capture2model_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!common_interfaces__srv__Capture2model_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
common_interfaces__srv__Capture2model_Response__Sequence__copy(
  const common_interfaces__srv__Capture2model_Response__Sequence * input,
  common_interfaces__srv__Capture2model_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(common_interfaces__srv__Capture2model_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    common_interfaces__srv__Capture2model_Response * data =
      (common_interfaces__srv__Capture2model_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!common_interfaces__srv__Capture2model_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          common_interfaces__srv__Capture2model_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!common_interfaces__srv__Capture2model_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
