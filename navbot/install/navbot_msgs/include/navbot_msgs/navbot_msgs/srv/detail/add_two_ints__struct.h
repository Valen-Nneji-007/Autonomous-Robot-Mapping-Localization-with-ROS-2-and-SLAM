// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from navbot_msgs:srv/AddTwoInts.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "navbot_msgs/srv/add_two_ints.h"


#ifndef NAVBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
#define NAVBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package navbot_msgs.
typedef struct navbot_msgs__srv__AddTwoInts_Request
{
  int64_t a;
  int64_t b;
} navbot_msgs__srv__AddTwoInts_Request;

// Struct for a sequence of navbot_msgs__srv__AddTwoInts_Request.
typedef struct navbot_msgs__srv__AddTwoInts_Request__Sequence
{
  navbot_msgs__srv__AddTwoInts_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__AddTwoInts_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/AddTwoInts in the package navbot_msgs.
typedef struct navbot_msgs__srv__AddTwoInts_Response
{
  int64_t sum;
} navbot_msgs__srv__AddTwoInts_Response;

// Struct for a sequence of navbot_msgs__srv__AddTwoInts_Response.
typedef struct navbot_msgs__srv__AddTwoInts_Response__Sequence
{
  navbot_msgs__srv__AddTwoInts_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__AddTwoInts_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  navbot_msgs__srv__AddTwoInts_Event__request__MAX_SIZE = 1
};
// response
enum
{
  navbot_msgs__srv__AddTwoInts_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/AddTwoInts in the package navbot_msgs.
typedef struct navbot_msgs__srv__AddTwoInts_Event
{
  service_msgs__msg__ServiceEventInfo info;
  navbot_msgs__srv__AddTwoInts_Request__Sequence request;
  navbot_msgs__srv__AddTwoInts_Response__Sequence response;
} navbot_msgs__srv__AddTwoInts_Event;

// Struct for a sequence of navbot_msgs__srv__AddTwoInts_Event.
typedef struct navbot_msgs__srv__AddTwoInts_Event__Sequence
{
  navbot_msgs__srv__AddTwoInts_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} navbot_msgs__srv__AddTwoInts_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // NAVBOT_MSGS__SRV__DETAIL__ADD_TWO_INTS__STRUCT_H_
