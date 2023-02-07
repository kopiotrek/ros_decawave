// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_decawave:msg/Anchor.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ANCHOR__TRAITS_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__ANCHOR__TRAITS_HPP_

#include "ros_decawave/msg/detail/anchor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_decawave::msg::Anchor>()
{
  return "ros_decawave::msg::Anchor";
}

template<>
inline const char * name<ros_decawave::msg::Anchor>()
{
  return "ros_decawave/msg/Anchor";
}

template<>
struct has_fixed_size<ros_decawave::msg::Anchor>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_decawave::msg::Anchor>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_decawave::msg::Anchor>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_DECAWAVE__MSG__DETAIL__ANCHOR__TRAITS_HPP_
