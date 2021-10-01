//============================================================================
// Name        : PIDController.cpp
// Author      : gauraut (Driver)
// Author      : Abhijit Mahalle (Navigator)
// Version     :
// Copyright   : Open source
// Description : PIDController in C++
//============================================================================


#include "PIDController.h"

/// @fn  PIDController()
/// @brief Default constructor that sets
/// the variables to 0
///
/// @pre
/// @post
PIDController::PIDController() {
  setpoint = 0;
  finalvalue = 0;
}

/// @fn  PIDController(double&, double&)
/// @brief Constructor with variables that sets
/// the setpoint and finalvalue variables
///
/// @pre
/// @post
/// @param st
/// @param fv
PIDController::PIDController(const double &st, const double &fv) {
  setpoint = 0;
  finalvalue = 0;
}

/// @fn double compute()
/// @brief The compute method gives the velocity 
/// output computed from the current state
///
/// @pre
/// @post
/// @return
double PIDController::compute() {
  return 1.7;
}

