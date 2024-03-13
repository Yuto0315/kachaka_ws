// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from kachaka_interfaces:msg/ObjectDetectionListStamped.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__struct.h"
#include "kachaka_interfaces/msg/detail/object_detection_list_stamped__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace kachaka_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _ObjectDetectionListStamped_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ObjectDetectionListStamped_type_support_ids_t;

static const _ObjectDetectionListStamped_type_support_ids_t _ObjectDetectionListStamped_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _ObjectDetectionListStamped_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ObjectDetectionListStamped_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ObjectDetectionListStamped_type_support_symbol_names_t _ObjectDetectionListStamped_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, kachaka_interfaces, msg, ObjectDetectionListStamped)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, kachaka_interfaces, msg, ObjectDetectionListStamped)),
  }
};

typedef struct _ObjectDetectionListStamped_type_support_data_t
{
  void * data[2];
} _ObjectDetectionListStamped_type_support_data_t;

static _ObjectDetectionListStamped_type_support_data_t _ObjectDetectionListStamped_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ObjectDetectionListStamped_message_typesupport_map = {
  2,
  "kachaka_interfaces",
  &_ObjectDetectionListStamped_message_typesupport_ids.typesupport_identifier[0],
  &_ObjectDetectionListStamped_message_typesupport_symbol_names.symbol_name[0],
  &_ObjectDetectionListStamped_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ObjectDetectionListStamped_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ObjectDetectionListStamped_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace kachaka_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, kachaka_interfaces, msg, ObjectDetectionListStamped)() {
  return &::kachaka_interfaces::msg::rosidl_typesupport_c::ObjectDetectionListStamped_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
