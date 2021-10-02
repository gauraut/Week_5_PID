///============================================================================
/// @file        : main.cpp
/// @author      : gauraut (Driver)
/// @author      : Abhijit Mahalle (Navigator)
/// @version     : 1.0
/// @copyright   : Open source
/// @brief       : Main file for PIDController in C++
///============================================================================

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
  double setpoint, finalvalue;
  std::cout << "Enter Target Set Point:" << std::endl;
  std::cin >> setpoint;
  std::cout << "Enter Final Value:" << std::endl;
  std::cin >> finalvalue;

  int count = 0;
  PIDController pid(setpoint, finalvalue);
  return 0;
}
