// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from navbot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navbot_msgs/srv/get_transform.hpp"


#ifndef NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_
#define NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "navbot_msgs/srv/detail/get_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace navbot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTransform_Request_child_frame_id
{
public:
  explicit Init_GetTransform_Request_child_frame_id(::navbot_msgs::srv::GetTransform_Request & msg)
  : msg_(msg)
  {}
  ::navbot_msgs::srv::GetTransform_Request child_frame_id(::navbot_msgs::srv::GetTransform_Request::_child_frame_id_type arg)
  {
    msg_.child_frame_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Request msg_;
};

class Init_GetTransform_Request_frame_id
{
public:
  Init_GetTransform_Request_frame_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTransform_Request_child_frame_id frame_id(::navbot_msgs::srv::GetTransform_Request::_frame_id_type arg)
  {
    msg_.frame_id = std::move(arg);
    return Init_GetTransform_Request_child_frame_id(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navbot_msgs::srv::GetTransform_Request>()
{
  return navbot_msgs::srv::builder::Init_GetTransform_Request_frame_id();
}

}  // namespace navbot_msgs


namespace navbot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTransform_Response_success
{
public:
  explicit Init_GetTransform_Response_success(::navbot_msgs::srv::GetTransform_Response & msg)
  : msg_(msg)
  {}
  ::navbot_msgs::srv::GetTransform_Response success(::navbot_msgs::srv::GetTransform_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Response msg_;
};

class Init_GetTransform_Response_transform
{
public:
  Init_GetTransform_Response_transform()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTransform_Response_success transform(::navbot_msgs::srv::GetTransform_Response::_transform_type arg)
  {
    msg_.transform = std::move(arg);
    return Init_GetTransform_Response_success(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navbot_msgs::srv::GetTransform_Response>()
{
  return navbot_msgs::srv::builder::Init_GetTransform_Response_transform();
}

}  // namespace navbot_msgs


namespace navbot_msgs
{

namespace srv
{

namespace builder
{

class Init_GetTransform_Event_response
{
public:
  explicit Init_GetTransform_Event_response(::navbot_msgs::srv::GetTransform_Event & msg)
  : msg_(msg)
  {}
  ::navbot_msgs::srv::GetTransform_Event response(::navbot_msgs::srv::GetTransform_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Event msg_;
};

class Init_GetTransform_Event_request
{
public:
  explicit Init_GetTransform_Event_request(::navbot_msgs::srv::GetTransform_Event & msg)
  : msg_(msg)
  {}
  Init_GetTransform_Event_response request(::navbot_msgs::srv::GetTransform_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_GetTransform_Event_response(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Event msg_;
};

class Init_GetTransform_Event_info
{
public:
  Init_GetTransform_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetTransform_Event_request info(::navbot_msgs::srv::GetTransform_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_GetTransform_Event_request(msg_);
  }

private:
  ::navbot_msgs::srv::GetTransform_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::navbot_msgs::srv::GetTransform_Event>()
{
  return navbot_msgs::srv::builder::Init_GetTransform_Event_info();
}

}  // namespace navbot_msgs

#endif  // NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__BUILDER_HPP_
