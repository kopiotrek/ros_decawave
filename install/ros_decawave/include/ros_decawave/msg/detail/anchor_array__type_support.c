// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ros_decawave:msg/AnchorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ros_decawave/msg/detail/anchor_array__rosidl_typesupport_introspection_c.h"
#include "ros_decawave/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ros_decawave/msg/detail/anchor_array__functions.h"
#include "ros_decawave/msg/detail/anchor_array__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `anchors`
#include "ros_decawave/msg/anchor.h"
// Member `anchors`
#include "ros_decawave/msg/detail/anchor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ros_decawave__msg__AnchorArray__init(message_memory);
}

void AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_fini_function(void * message_memory)
{
  ros_decawave__msg__AnchorArray__fini(message_memory);
}

size_t AnchorArray__rosidl_typesupport_introspection_c__size_function__Anchor__anchors(
  const void * untyped_member)
{
  const ros_decawave__msg__Anchor__Sequence * member =
    (const ros_decawave__msg__Anchor__Sequence *)(untyped_member);
  return member->size;
}

const void * AnchorArray__rosidl_typesupport_introspection_c__get_const_function__Anchor__anchors(
  const void * untyped_member, size_t index)
{
  const ros_decawave__msg__Anchor__Sequence * member =
    (const ros_decawave__msg__Anchor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * AnchorArray__rosidl_typesupport_introspection_c__get_function__Anchor__anchors(
  void * untyped_member, size_t index)
{
  ros_decawave__msg__Anchor__Sequence * member =
    (ros_decawave__msg__Anchor__Sequence *)(untyped_member);
  return &member->data[index];
}

bool AnchorArray__rosidl_typesupport_introspection_c__resize_function__Anchor__anchors(
  void * untyped_member, size_t size)
{
  ros_decawave__msg__Anchor__Sequence * member =
    (ros_decawave__msg__Anchor__Sequence *)(untyped_member);
  ros_decawave__msg__Anchor__Sequence__fini(member);
  return ros_decawave__msg__Anchor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_decawave__msg__AnchorArray, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "anchors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ros_decawave__msg__AnchorArray, anchors),  // bytes offset in struct
    NULL,  // default value
    AnchorArray__rosidl_typesupport_introspection_c__size_function__Anchor__anchors,  // size() function pointer
    AnchorArray__rosidl_typesupport_introspection_c__get_const_function__Anchor__anchors,  // get_const(index) function pointer
    AnchorArray__rosidl_typesupport_introspection_c__get_function__Anchor__anchors,  // get(index) function pointer
    AnchorArray__rosidl_typesupport_introspection_c__resize_function__Anchor__anchors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_members = {
  "ros_decawave__msg",  // message namespace
  "AnchorArray",  // message name
  2,  // number of fields
  sizeof(ros_decawave__msg__AnchorArray),
  AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_member_array,  // message members
  AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_type_support_handle = {
  0,
  &AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ros_decawave
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_decawave, msg, AnchorArray)() {
  AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ros_decawave, msg, Anchor)();
  if (!AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_type_support_handle.typesupport_identifier) {
    AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &AnchorArray__rosidl_typesupport_introspection_c__AnchorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
