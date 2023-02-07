// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_decawave:msg/Acc.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ACC__STRUCT_H_
#define ROS_DECAWAVE__MSG__DETAIL__ACC__STRUCT_H_

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

// Struct defined in msg/Acc in the package ros_decawave.
typedef struct ros_decawave__msg__Acc
{
  std_msgs__msg__Header header;
  double x;
  double y;
  double z;
} ros_decawave__msg__Acc;

// Struct for a sequence of ros_decawave__msg__Acc.
typedef struct ros_decawave__msg__Acc__Sequence
{
  ros_decawave__msg__Acc * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_decawave__msg__Acc__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_DECAWAVE__MSG__DETAIL__ACC__STRUCT_H_
