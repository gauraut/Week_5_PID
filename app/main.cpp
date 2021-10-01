//============================================================================
// Name        : main.cpp
// Author      : gauraut (Driver)
// Author      : Abhijit Mahalle (Navigator)
// Version     :
// Copyright   : Open source
// Description : PIDController in C++
//============================================================================

#include <iostream>
#include "PIDController.h"

/// @fn int main()
/// @brief This is the main function that initializes
/// asks for setpoint and calls the method of
/// PIDontroller class
///
/// @pre
/// @post
/// @return
int main() {
  double setpoint, finalvalue = 2;
  std::cout << "Enter Target Set Point:" << std::endl;
  std::cin >> setpoint;

  PIDController pid(setpoint, finalvalue);
  std::cout << pid.compute() << std::endl;
  return 0;
}
