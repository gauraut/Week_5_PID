//============================================================================
// Name        : PIDController.h
// Author      : gauraut (Driver)
// Author      : Abhijit Mahalle (Navigator)
// Version     :
// Copyright   : Open source
// Description : PIDController in C++
//============================================================================

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

/// @class PID_Controller
/// @brief A class that computes the error and returns
/// the new velocity using the method compute
///
class PIDController {
 public:
  PIDController();  // default constructor
  PIDController(const double &st, const double &fv);
  // input argument constructor
  double setpoint, finalvalue;  // default value

  double compute();

 private:
  double kp = 1, kd = 2, ki = 1;
};

#endif  // INCLUDE_PIDCONTROLLER_H_
