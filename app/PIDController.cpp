///============================================================================
/// @file        : PIDController.cpp
/// @author      : gauraut (Driver)
/// @author      : Abhijit Mahalle (Navigator)
/// @version     : 1.0
/// @copyright   : Open source
/// @brief       : PIDController in C++
///============================================================================

#include "PIDController.h"
#include <cmath>
#include <iostream>

PIDController::PIDController(const double &sp, const double &fv) {
  finalvalue = fv;
  setpoint = sp;
  pre_error = 0;
  i_error = 0;
  error = finalvalue - setpoint;
  cur_vel = finalvalue;
}

double PIDController::compute() {
  i_error += error * timestep;
  cur_vel += (kp * error) + (ki * (i_error))
      + (kd * (error - pre_error) / timestep);
  pre_error = error;
  error = setpoint - cur_vel;
  return cur_vel;
}

