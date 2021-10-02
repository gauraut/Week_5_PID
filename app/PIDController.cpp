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
  finalvalue = 0;
  setpoint = 0;
  pre_error = 0;
  error = finalvalue - setpoint;
  cur_vel = finalvalue;
}

double PIDController::compute() {
  return 1.7;
}

