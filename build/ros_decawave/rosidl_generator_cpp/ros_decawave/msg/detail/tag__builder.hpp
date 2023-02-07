// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_decawave:msg/Tag.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__TAG__BUILDER_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__TAG__BUILDER_HPP_

#include "ros_decawave/msg/detail/tag__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_decawave
{

namespace msg
{

namespace builder
{

class Init_Tag_n_anchors
{
public:
  explicit Init_Tag_n_anchors(::ros_decawave::msg::Tag & msg)
  : msg_(msg)
  {}
  ::ros_decawave::msg::Tag n_anchors(::ros_decawave::msg::Tag::_n_anchors_type arg)
  {
    msg_.n_anchors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

class Init_Tag_qf
{
public:
  explicit Init_Tag_qf(::ros_decawave::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_n_anchors qf(::ros_decawave::msg::Tag::_qf_type arg)
  {
    msg_.qf = std::move(arg);
    return Init_Tag_n_anchors(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

class Init_Tag_z
{
public:
  explicit Init_Tag_z(::ros_decawave::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_qf z(::ros_decawave::msg::Tag::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_Tag_qf(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

class Init_Tag_y
{
public:
  explicit Init_Tag_y(::ros_decawave::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_z y(::ros_decawave::msg::Tag::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Tag_z(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

class Init_Tag_x
{
public:
  explicit Init_Tag_x(::ros_decawave::msg::Tag & msg)
  : msg_(msg)
  {}
  Init_Tag_y x(::ros_decawave::msg::Tag::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Tag_y(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

class Init_Tag_header
{
public:
  Init_Tag_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tag_x header(::ros_decawave::msg::Tag::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Tag_x(msg_);
  }

private:
  ::ros_decawave::msg::Tag msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_decawave::msg::Tag>()
{
  return ros_decawave::msg::builder::Init_Tag_header();
}

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__TAG__BUILDER_HPP_
