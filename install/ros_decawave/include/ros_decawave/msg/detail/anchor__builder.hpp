// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_decawave:msg/Anchor.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ANCHOR__BUILDER_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__ANCHOR__BUILDER_HPP_

#include "ros_decawave/msg/detail/anchor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_decawave
{

namespace msg
{

namespace builder
{

class Init_Anchor_dist_qf
{
public:
  explicit Init_Anchor_dist_qf(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  ::ros_decawave::msg::Anchor dist_qf(::ros_decawave::msg::Anchor::_dist_qf_type arg)
  {
    msg_.dist_qf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_distance
{
public:
  explicit Init_Anchor_distance(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_dist_qf distance(::ros_decawave::msg::Anchor::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return Init_Anchor_dist_qf(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_qf
{
public:
  explicit Init_Anchor_qf(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_distance qf(::ros_decawave::msg::Anchor::_qf_type arg)
  {
    msg_.qf = std::move(arg);
    return Init_Anchor_distance(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_z
{
public:
  explicit Init_Anchor_z(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_qf z(::ros_decawave::msg::Anchor::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Anchor_qf(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_y
{
public:
  explicit Init_Anchor_y(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_z y(::ros_decawave::msg::Anchor::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Anchor_z(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_x
{
public:
  explicit Init_Anchor_x(::ros_decawave::msg::Anchor & msg)
  : msg_(msg)
  {}
  Init_Anchor_y x(::ros_decawave::msg::Anchor::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Anchor_y(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

class Init_Anchor_header
{
public:
  Init_Anchor_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Anchor_x header(::ros_decawave::msg::Anchor::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Anchor_x(msg_);
  }

private:
  ::ros_decawave::msg::Anchor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_decawave::msg::Anchor>()
{
  return ros_decawave::msg::builder::Init_Anchor_header();
}

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__ANCHOR__BUILDER_HPP_
