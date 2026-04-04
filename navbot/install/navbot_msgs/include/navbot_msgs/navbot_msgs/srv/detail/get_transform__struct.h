// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navbot_msgs:srv/GetTransform.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navbot_msgs/srv/get_transform.h"


#ifndef NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_
#define NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'frame_id'
// Member 'child_frame_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetTransform in the package navbot_msgs.
typedef struct navbot_msgs__srv__GetTransform_Request
{
  rosidl_runtime_c__String frame_id;
  rosidl_runtime_c__String child_frame_id;
} navbot_msgs__srv__GetTransform_Request;

// Struct for a sequence of navbot_msgs__srv__GetTransform_Request.
typedef struct navbot_msgs__srv__GetTransform_Request__Sequence
{
  navbot_msgs__srv__GetTransform_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__GetTransform_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'transform'
#include "geometry_msgs/msg/detail/transform_stamped__struct.h"

/// Struct defined in srv/GetTransform in the package navbot_msgs.
typedef struct navbot_msgs__srv__GetTransform_Response
{
  geometry_msgs__msg__TransformStamped transform;
  bool success;
} navbot_msgs__srv__GetTransform_Response;

// Struct for a sequence of navbot_msgs__srv__GetTransform_Response.
typedef struct navbot_msgs__srv__GetTransform_Response__Sequence
{
  navbot_msgs__srv__GetTransform_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__GetTransform_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  navbot_msgs__srv__GetTransform_Event__request__MAX_SIZE = 1
};
// response
enum
{
  navbot_msgs__srv__GetTransform_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/GetTransform in the package navbot_msgs.
typedef struct navbot_msgs__srv__GetTransform_Event
{
  service_msgs__msg__ServiceEventInfo info;
  navbot_msgs__srv__GetTransform_Request__Sequence request;
  navbot_msgs__srv__GetTransform_Response__Sequence response;
} navbot_msgs__srv__GetTransform_Event;

// Struct for a sequence of navbot_msgs__srv__GetTransform_Event.
typedef struct navbot_msgs__srv__GetTransform_Event__Sequence
{
  navbot_msgs__srv__GetTransform_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__GetTransform_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVBOT_MSGS__SRV__DETAIL__GET_TRANSFORM__STRUCT_H_
