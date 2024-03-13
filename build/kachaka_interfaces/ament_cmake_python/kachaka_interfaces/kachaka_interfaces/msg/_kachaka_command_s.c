// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from kachaka_interfaces:msg/KachakaCommand.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "kachaka_interfaces/msg/detail/kachaka_command__struct.h"
#include "kachaka_interfaces/msg/detail/kachaka_command__functions.h"

#include "rosidl_runtime_c/string.h"
#include "rosidl_runtime_c/string_functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool kachaka_interfaces__msg__kachaka_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("kachaka_interfaces.msg._kachaka_command.KachakaCommand", full_classname_dest, 54) == 0);
  }
  kachaka_interfaces__msg__KachakaCommand * ros_message = _ros_message;
  {  // command_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "command_type");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->command_type = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // move_shelf_command_target_shelf_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_shelf_command_target_shelf_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_shelf_command_target_shelf_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_shelf_command_destination_location_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_shelf_command_destination_location_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_shelf_command_destination_location_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_shelf_command_undock_on_destination
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_shelf_command_undock_on_destination");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->move_shelf_command_undock_on_destination = (Py_True == field);
    Py_DECREF(field);
  }
  {  // return_shelf_command_target_shelf_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_shelf_command_target_shelf_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->return_shelf_command_target_shelf_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // undock_shelf_command_target_shelf_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "undock_shelf_command_target_shelf_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->undock_shelf_command_target_shelf_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_to_location_command_target_location_id
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_to_location_command_target_location_id");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->move_to_location_command_target_location_id, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // return_home_command_silent
    PyObject * field = PyObject_GetAttrString(_pymsg, "return_home_command_silent");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->return_home_command_silent = (Py_True == field);
    Py_DECREF(field);
  }
  {  // speak_command_text
    PyObject * field = PyObject_GetAttrString(_pymsg, "speak_command_text");
    if (!field) {
      return false;
    }
    assert(PyUnicode_Check(field));
    PyObject * encoded_field = PyUnicode_AsUTF8String(field);
    if (!encoded_field) {
      Py_DECREF(field);
      return false;
    }
    rosidl_runtime_c__String__assign(&ros_message->speak_command_text, PyBytes_AS_STRING(encoded_field));
    Py_DECREF(encoded_field);
    Py_DECREF(field);
  }
  {  // move_to_pose_command_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_to_pose_command_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->move_to_pose_command_x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // move_to_pose_command_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_to_pose_command_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->move_to_pose_command_y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // move_to_pose_command_yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "move_to_pose_command_yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->move_to_pose_command_yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * kachaka_interfaces__msg__kachaka_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of KachakaCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("kachaka_interfaces.msg._kachaka_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "KachakaCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  kachaka_interfaces__msg__KachakaCommand * ros_message = (kachaka_interfaces__msg__KachakaCommand *)raw_ros_message;
  {  // command_type
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->command_type);
    {
      int rc = PyObject_SetAttrString(_pymessage, "command_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_shelf_command_target_shelf_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_shelf_command_target_shelf_id.data,
      strlen(ros_message->move_shelf_command_target_shelf_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_shelf_command_target_shelf_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_shelf_command_destination_location_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_shelf_command_destination_location_id.data,
      strlen(ros_message->move_shelf_command_destination_location_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_shelf_command_destination_location_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_shelf_command_undock_on_destination
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->move_shelf_command_undock_on_destination ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_shelf_command_undock_on_destination", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_shelf_command_target_shelf_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->return_shelf_command_target_shelf_id.data,
      strlen(ros_message->return_shelf_command_target_shelf_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_shelf_command_target_shelf_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // undock_shelf_command_target_shelf_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->undock_shelf_command_target_shelf_id.data,
      strlen(ros_message->undock_shelf_command_target_shelf_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "undock_shelf_command_target_shelf_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_to_location_command_target_location_id
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->move_to_location_command_target_location_id.data,
      strlen(ros_message->move_to_location_command_target_location_id.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_to_location_command_target_location_id", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // return_home_command_silent
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->return_home_command_silent ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "return_home_command_silent", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // speak_command_text
    PyObject * field = NULL;
    field = PyUnicode_DecodeUTF8(
      ros_message->speak_command_text.data,
      strlen(ros_message->speak_command_text.data),
      "replace");
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "speak_command_text", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_to_pose_command_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->move_to_pose_command_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_to_pose_command_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_to_pose_command_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->move_to_pose_command_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_to_pose_command_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // move_to_pose_command_yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->move_to_pose_command_yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "move_to_pose_command_yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
