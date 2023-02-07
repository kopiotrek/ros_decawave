// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ros_decawave:msg/AnchorArray.idl
// generated code does not contain a copyright notice
#include "ros_decawave/msg/detail/anchor_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `anchors`
#include "ros_decawave/msg/detail/anchor__functions.h"

bool
ros_decawave__msg__AnchorArray__init(ros_decawave__msg__AnchorArray * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    ros_decawave__msg__AnchorArray__fini(msg);
    return false;
  }
  // anchors
  if (!ros_decawave__msg__Anchor__Sequence__init(&msg->anchors, 0)) {
    ros_decawave__msg__AnchorArray__fini(msg);
    return false;
  }
  return true;
}

void
ros_decawave__msg__AnchorArray__fini(ros_decawave__msg__AnchorArray * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // anchors
  ros_decawave__msg__Anchor__Sequence__fini(&msg->anchors);
}

bool
ros_decawave__msg__AnchorArray__are_equal(const ros_decawave__msg__AnchorArray * lhs, const ros_decawave__msg__AnchorArray * rhs)
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
  // anchors
  if (!ros_decawave__msg__Anchor__Sequence__are_equal(
      &(lhs->anchors), &(rhs->anchors)))
  {
    return false;
  }
  return true;
}

bool
ros_decawave__msg__AnchorArray__copy(
  const ros_decawave__msg__AnchorArray * input,
  ros_decawave__msg__AnchorArray * output)
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
  // anchors
  if (!ros_decawave__msg__Anchor__Sequence__copy(
      &(input->anchors), &(output->anchors)))
  {
    return false;
  }
  return true;
}

ros_decawave__msg__AnchorArray *
ros_decawave__msg__AnchorArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__AnchorArray * msg = (ros_decawave__msg__AnchorArray *)allocator.allocate(sizeof(ros_decawave__msg__AnchorArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ros_decawave__msg__AnchorArray));
  bool success = ros_decawave__msg__AnchorArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ros_decawave__msg__AnchorArray__destroy(ros_decawave__msg__AnchorArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ros_decawave__msg__AnchorArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ros_decawave__msg__AnchorArray__Sequence__init(ros_decawave__msg__AnchorArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__AnchorArray * data = NULL;

  if (size) {
    data = (ros_decawave__msg__AnchorArray *)allocator.zero_allocate(size, sizeof(ros_decawave__msg__AnchorArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ros_decawave__msg__AnchorArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ros_decawave__msg__AnchorArray__fini(&data[i - 1]);
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
ros_decawave__msg__AnchorArray__Sequence__fini(ros_decawave__msg__AnchorArray__Sequence * array)
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
      ros_decawave__msg__AnchorArray__fini(&array->data[i]);
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

ros_decawave__msg__AnchorArray__Sequence *
ros_decawave__msg__AnchorArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ros_decawave__msg__AnchorArray__Sequence * array = (ros_decawave__msg__AnchorArray__Sequence *)allocator.allocate(sizeof(ros_decawave__msg__AnchorArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ros_decawave__msg__AnchorArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ros_decawave__msg__AnchorArray__Sequence__destroy(ros_decawave__msg__AnchorArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ros_decawave__msg__AnchorArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ros_decawave__msg__AnchorArray__Sequence__are_equal(const ros_decawave__msg__AnchorArray__Sequence * lhs, const ros_decawave__msg__AnchorArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ros_decawave__msg__AnchorArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ros_decawave__msg__AnchorArray__Sequence__copy(
  const ros_decawave__msg__AnchorArray__Sequence * input,
  ros_decawave__msg__AnchorArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ros_decawave__msg__AnchorArray);
    ros_decawave__msg__AnchorArray * data =
      (ros_decawave__msg__AnchorArray *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ros_decawave__msg__AnchorArray__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ros_decawave__msg__AnchorArray__fini(&data[i]);
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
    if (!ros_decawave__msg__AnchorArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
