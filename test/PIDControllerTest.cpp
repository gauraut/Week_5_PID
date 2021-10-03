///============================================================================
/// @file        : PIDCOntrollerTest.cpp
/// @author      : gauraut (Driver)
/// @author      : Abhijit Mahalle (Navigator)
/// @version     : 1.0
/// @copyright   : Open source
/// @brief       : Test file for PIDController in C++
///============================================================================
#include <gtest/gtest.h>
#include <memory>
#include "PIDController.h"

/// @fn TEST()
/// @brief Test for testing compute method
/// @param PIDControllerTest - Name of the test
/// @param testPIDControllercompute - Type of test
///
/// @return none
TEST(PIDControllerTest, testPIDControllercompute) {
  PIDController pid(9, 4);
  double result;
  while (pid.error != 0) {
    result = pid.compute();
  }
  ASSERT_EQ(9, result);
}

/// @fn TEST()
/// @brief Test for testing compute method
/// @param PIDControllerTest2 - Name of the test
/// @param testPIDController_setpoint - Type of test
///
/// @return none
TEST(PIDControllerTest2, testPIDController_setpoint) {
  double sp = 9.0, fv = 10.0;
  PIDController pid1(sp, fv);
  EXPECT_DOUBLE_EQ(9.0 , pid1.setpoint);
}

/// @fn TEST()
/// @brief Test for testing compute method
/// @param PIDControllerTest3 - Name of the test
/// @param testPIDController_finalvalue - Type of test
///
/// @return none
TEST(PIDControllerTest3, testPIDController_finalvalue) {
  double sp = 9.0, fv = 10.0;
  PIDController pid2(sp, fv);
  EXPECT_DOUBLE_EQ(10.0 , pid2.finalvalue);
}
