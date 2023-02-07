// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_decawave:msg/Anchor.idl
// generated code does not contain a copyright notice
#include "ros_decawave/msg/detail/anchor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
ros_decawave__msg__Anchor__init(ros_decawave__msg__Anchor * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_decawave__msg__Anchor__fini(msg);
    return false;
  }
  // x
  // y
  // z
  // qf
  // distance
  // dist_qf
  return true;
}

void
ros_decawave__msg__Anchor__fini(ros_decawave__msg__Anchor * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // x
  // y
  // z
  // qf
  // distance
  // dist_qf
}

bool
ros_decawave__msg__Anchor__are_equal(const ros_decawave__msg__Anchor * lhs, const ros_decawave__msg__Anchor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // qf
  if (lhs->qf != rhs->qf) {
    return false;
  }
  // distance
  if (lhs->distance != rhs->distance) {
    return false;
  }
  // dist_qf
  if (lhs->dist_qf != rhs->dist_qf) {
    return false;
  }
  return true;
}

bool
ros_decawave__msg__Anchor__copy(
  const ros_decawave__msg__Anchor * input,
  ros_decawave__msg__Anchor * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // qf
  output->qf = input->qf;
  // distance
  output->distance = input->distance;
  // dist_qf
  output->dist_qf = input->dist_qf;
  return true;
}

ros_decawave__msg__Anchor *
ros_decawave__msg__Anchor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__Anchor * msg = (ros_decawave__msg__Anchor *)allocator.allocate(sizeof(ros_decawave__msg__Anchor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_decawave__msg__Anchor));
  bool success = ros_decawave__msg__Anchor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_decawave__msg__Anchor__destroy(ros_decawave__msg__Anchor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_decawave__msg__Anchor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_decawave__msg__Anchor__Sequence__init(ros_decawave__msg__Anchor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__Anchor * data = NULL;

  if (size) {
    data = (ros_decawave__msg__Anchor *)allocator.zero_allocate(size, sizeof(ros_decawave__msg__Anchor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_decawave__msg__Anchor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_decawave__msg__Anchor__fini(&data[i - 1]);
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
ros_decawave__msg__Anchor__Sequence__fini(ros_decawave__msg__Anchor__Sequence * array)
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
      ros_decawave__msg__Anchor__fini(&array->data[i]);
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

ros_decawave__msg__Anchor__Sequence *
ros_decawave__msg__Anchor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__Anchor__Sequence * array = (ros_decawave__msg__Anchor__Sequence *)allocator.allocate(sizeof(ros_decawave__msg__Anchor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_decawave__msg__Anchor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_decawave__msg__Anchor__Sequence__destroy(ros_decawave__msg__Anchor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_decawave__msg__Anchor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_decawave__msg__Anchor__Sequence__are_equal(const ros_decawave__msg__Anchor__Sequence * lhs, const ros_decawave__msg__Anchor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_decawave__msg__Anchor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_decawave__msg__Anchor__Sequence__copy(
  const ros_decawave__msg__Anchor__Sequence * input,
  ros_decawave__msg__Anchor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_decawave__msg__Anchor);
    ros_decawave__msg__Anchor * data =
      (ros_decawave__msg__Anchor *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_decawave__msg__Anchor__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_decawave__msg__Anchor__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ros_decawave__msg__Anchor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
