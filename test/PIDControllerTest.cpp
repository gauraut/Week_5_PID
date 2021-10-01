//============================================================================
// Name        : PIDControllerTest.cpp
// Author      : gauraut (Driver)
// Author      : Abhijit Mahalle (Navigator)
// Version     :
// Copyright   : Open source
// Description : PIDController Test in C++
//============================================================================

#include <gtest/gtest.h>
#include <memory>
#include "PIDController.h"


TEST(PIDControllerTest, testPIDControllercompute) {
  std::shared_ptr<PIDController> pid = std::make_shared<PIDController>();
  ASSERT_DOUBLE_EQ(2.0, pid->compute());
}

TEST(PIDControllerTest2, testPIDController_setpoint) {
  double sp = 9.0, fv = 10.0;
  PIDController pid1(sp, fv);
  ASSERT_DOUBLE_EQ(9.0 , pid1.setpoint);
}

TEST(PIDControllerTest3, testPIDController_finalvalue) {
  double sp = 9.0, fv = 10.0;
  PIDController pid2(sp, fv);
  ASSERT_DOUBLE_EQ(10.0 , pid2.finalvalue);
}
