// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ros_decawave:msg/Tag.idl
// generated code does not contain a copyright notice

#ifndef ROS_DECAWAVE__MSG__DETAIL__TAG__STRUCT_HPP_
#define ROS_DECAWAVE__MSG__DETAIL__TAG__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__ros_decawave__msg__Tag __attribute__((deprecated))
#else
# define DEPRECATED__ros_decawave__msg__Tag __declspec(deprecated)
#endif

namespace ros_decawave
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Tag_
{
  using Type = Tag_<ContainerAllocator>;

  explicit Tag_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qf = 0.0;
      this->n_anchors = 0;
    }
  }

  explicit Tag_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->qf = 0.0;
      this->n_anchors = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _qf_type =
    double;
  _qf_type qf;
  using _n_anchors_type =
    int16_t;
  _n_anchors_type n_anchors;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__qf(
    const double & _arg)
  {
    this->qf = _arg;
    return *this;
  }
  Type & set__n_anchors(
    const int16_t & _arg)
  {
    this->n_anchors = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ros_decawave::msg::Tag_<ContainerAllocator> *;
  using ConstRawPtr =
    const ros_decawave::msg::Tag_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ros_decawave::msg::Tag_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ros_decawave::msg::Tag_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ros_decawave::msg::Tag_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ros_decawave::msg::Tag_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ros_decawave::msg::Tag_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ros_decawave::msg::Tag_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ros_decawave::msg::Tag_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ros_decawave::msg::Tag_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ros_decawave__msg__Tag
    std::shared_ptr<ros_decawave::msg::Tag_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ros_decawave__msg__Tag
    std::shared_ptr<ros_decawave::msg::Tag_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Tag_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->qf != other.qf) {
      return false;
    }
    if (this->n_anchors != other.n_anchors) {
      return false;
    }
    return true;
  }
  bool operator!=(const Tag_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Tag_

// alias to use template instance with default allocator
using Tag =
  ros_decawave::msg::Tag_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace ros_decawave

#endif  // ROS_DECAWAVE__MSG__DETAIL__TAG__STRUCT_HPP_
