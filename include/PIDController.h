///============================================================================
/// @file        : PIDController.h
/// @author      : gauraut (Driver)
/// @author      : Abhijit Mahalle (Navigator)
/// @version     : 1.0
/// @copyright   : Open source
/// @brief       : Header file for PIDController in C++
///============================================================================

#ifndef INCLUDE_PIDCONTROLLER_H_
#define INCLUDE_PIDCONTROLLER_H_

class PIDController {
 public:
  /// @fn  PIDController(const double&, const double&)
  /// @brief Input argument constructor for the PIDController class
  ///
  /// @pre
  /// @post
  /// @param
  /// @param
  PIDController(const double&, const double&);
  double setpoint, finalvalue, cur_vel, error, pre_error;
  // Class variables
  /// @fn double compute()
  /// @brief This function will compute the cur_vel
  ///
  /// @pre
  /// @post
  double compute();

 private:
  double kp = 0.8, ki = 0.1, kd = 0.3, timestep = 1;  // tuned parameters
};

#endif  // INCLUDE_PIDCONTROLLER_H_
