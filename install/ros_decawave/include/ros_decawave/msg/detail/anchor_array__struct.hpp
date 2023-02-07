// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_decawave:msg/AnchorArray.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'anchors'
#include "ros_decawave/msg/detail/anchor__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__ros_decawave__msg__AnchorArray __attribute__((deprecated))
#else
# define DEPRECATED__ros_decawave__msg__AnchorArray __declspec(deprecated)
#endif

namespace ros_decawave
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct AnchorArray_
{
  using Type = AnchorArray_<ContainerAllocator>;

  explicit AnchorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    (void)_init;
  }

  explicit AnchorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _anchors_type =
    std::vector<ros_decawave::msg::Anchor_<ContainerAllocator>, typename ContainerAllocator::template rebind<ros_decawave::msg::Anchor_<ContainerAllocator>>::other>;
  _anchors_type anchors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__anchors(
    const std::vector<ros_decawave::msg::Anchor_<ContainerAllocator>, typename ContainerAllocator::template rebind<ros_decawave::msg::Anchor_<ContainerAllocator>>::other> & _arg)
  {
    this->anchors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_decawave::msg::AnchorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_decawave::msg::AnchorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_decawave::msg::AnchorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_decawave::msg::AnchorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_decawave__msg__AnchorArray
    std::shared_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_decawave__msg__AnchorArray
    std::shared_ptr<ros_decawave::msg::AnchorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const AnchorArray_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->anchors != other.anchors) {
      return false;
    }
    return true;
  }
  bool operator!=(const AnchorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct AnchorArray_

// alias to use template instance with default allocator
using AnchorArray =
  ros_decawave::msg::AnchorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__ANCHOR_ARRAY__STRUCT_HPP_
