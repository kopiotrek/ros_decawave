// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_decawave:msg/Acc.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ACC__BUILDER_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__ACC__BUILDER_HPP_

#include "ros_decawave/msg/detail/acc__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_decawave
{

namespace msg
{

namespace builder
{

class Init_Acc_z
{
public:
  explicit Init_Acc_z(::ros_decawave::msg::Acc & msg)
  : msg_(msg)
  {}
  ::ros_decawave::msg::Acc z(::ros_decawave::msg::Acc::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_decawave::msg::Acc msg_;
};

class Init_Acc_y
{
public:
  explicit Init_Acc_y(::ros_decawave::msg::Acc & msg)
  : msg_(msg)
  {}
  Init_Acc_z y(::ros_decawave::msg::Acc::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Acc_z(msg_);
  }

private:
  ::ros_decawave::msg::Acc msg_;
};

class Init_Acc_x
{
public:
  explicit Init_Acc_x(::ros_decawave::msg::Acc & msg)
  : msg_(msg)
  {}
  Init_Acc_y x(::ros_decawave::msg::Acc::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Acc_y(msg_);
  }

private:
  ::ros_decawave::msg::Acc msg_;
};

class Init_Acc_header
{
public:
  Init_Acc_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Acc_x header(::ros_decawave::msg::Acc::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Acc_x(msg_);
  }

private:
  ::ros_decawave::msg::Acc msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_decawave::msg::Acc>()
{
  return ros_decawave::msg::builder::Init_Acc_header();
}

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__ACC__BUILDER_HPP_
