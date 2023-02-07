// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_decawave:msg/AnchorArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_H_
#define ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'anchors'
#include "ros_decawave/msg/detail/anchor__struct.h"

// Struct defined in msg/AnchorArray in the package ros_decawave.
typedef struct ros_decawave__msg__AnchorArray
{
  std_msgs__msg__Header header;
  ros_decawave__msg__Anchor__Sequence anchors;
} ros_decawave__msg__AnchorArray;

// Struct for a sequence of ros_decawave__msg__AnchorArray.
typedef struct ros_decawave__msg__AnchorArray__Sequence
{
  ros_decawave__msg__AnchorArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_decawave__msg__AnchorArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_H_
