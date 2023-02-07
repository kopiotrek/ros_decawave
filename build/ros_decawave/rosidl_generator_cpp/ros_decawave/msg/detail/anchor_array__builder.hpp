// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_decawave:msg/AnchorArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__BUILDER_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__BUILDER_HPP_

#include "ros_decawave/msg/detail/anchor_array__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ros_decawave
{

namespace msg
{

namespace builder
{

class Init_AnchorArray_anchors
{
public:
  explicit Init_AnchorArray_anchors(::ros_decawave::msg::AnchorArray & msg)
  : msg_(msg)
  {}
  ::ros_decawave::msg::AnchorArray anchors(::ros_decawave::msg::AnchorArray::_anchors_type arg)
  {
    msg_.anchors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_decawave::msg::AnchorArray msg_;
};

class Init_AnchorArray_header
{
public:
  Init_AnchorArray_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnchorArray_anchors header(::ros_decawave::msg::AnchorArray::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnchorArray_anchors(msg_);
  }

private:
  ::ros_decawave::msg::AnchorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_decawave::msg::AnchorArray>()
{
  return ros_decawave::msg::builder::Init_AnchorArray_header();
}

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__BUILDER_HPP_
