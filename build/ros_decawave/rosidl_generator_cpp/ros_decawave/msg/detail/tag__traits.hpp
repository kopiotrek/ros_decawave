// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ros_decawave:msg/Tag.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__TAG__TRAITS_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__TAG__TRAITS_HPP_

#include "ros_decawave/msg/detail/tag__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ros_decawave::msg::Tag>()
{
  return "ros_decawave::msg::Tag";
}

template<>
inline const char * name<ros_decawave::msg::Tag>()
{
  return "ros_decawave/msg/Tag";
}

template<>
struct has_fixed_size<ros_decawave::msg::Tag>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ros_decawave::msg::Tag>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ros_decawave::msg::Tag>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROS_DECAWAVE__MSG__DETAIL__TAG__TRAITS_HPP_
