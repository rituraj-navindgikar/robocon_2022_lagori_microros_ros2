// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from lagori_robot_msgs:msg/StepperMsg.idl
// generated code does not contain a copyright notice

#ifndef LAGORI_ROBOT_MSGS__MSG__DETAIL__STEPPER_MSG__FUNCTIONS_H_
#define LAGORI_ROBOT_MSGS__MSG__DETAIL__STEPPER_MSG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "lagori_robot_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "lagori_robot_msgs/msg/detail/stepper_msg__struct.h"

/// Initialize msg/StepperMsg message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * lagori_robot_msgs__msg__StepperMsg
 * )) before or use
 * lagori_robot_msgs__msg__StepperMsg__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
bool
lagori_robot_msgs__msg__StepperMsg__init(lagori_robot_msgs__msg__StepperMsg * msg);

/// Finalize msg/StepperMsg message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
void
lagori_robot_msgs__msg__StepperMsg__fini(lagori_robot_msgs__msg__StepperMsg * msg);

/// Create msg/StepperMsg message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * lagori_robot_msgs__msg__StepperMsg__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
lagori_robot_msgs__msg__StepperMsg *
lagori_robot_msgs__msg__StepperMsg__create();

/// Destroy msg/StepperMsg message.
/**
 * It calls
 * lagori_robot_msgs__msg__StepperMsg__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
void
lagori_robot_msgs__msg__StepperMsg__destroy(lagori_robot_msgs__msg__StepperMsg * msg);


/// Initialize array of msg/StepperMsg messages.
/**
 * It allocates the memory for the number of elements and calls
 * lagori_robot_msgs__msg__StepperMsg__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
bool
lagori_robot_msgs__msg__StepperMsg__Sequence__init(lagori_robot_msgs__msg__StepperMsg__Sequence * array, size_t size);

/// Finalize array of msg/StepperMsg messages.
/**
 * It calls
 * lagori_robot_msgs__msg__StepperMsg__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
void
lagori_robot_msgs__msg__StepperMsg__Sequence__fini(lagori_robot_msgs__msg__StepperMsg__Sequence * array);

/// Create array of msg/StepperMsg messages.
/**
 * It allocates the memory for the array and calls
 * lagori_robot_msgs__msg__StepperMsg__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
lagori_robot_msgs__msg__StepperMsg__Sequence *
lagori_robot_msgs__msg__StepperMsg__Sequence__create(size_t size);

/// Destroy array of msg/StepperMsg messages.
/**
 * It calls
 * lagori_robot_msgs__msg__StepperMsg__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_lagori_robot_msgs
void
lagori_robot_msgs__msg__StepperMsg__Sequence__destroy(lagori_robot_msgs__msg__StepperMsg__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // LAGORI_ROBOT_MSGS__MSG__DETAIL__STEPPER_MSG__FUNCTIONS_H_
