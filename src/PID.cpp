#include "PID.h"
#include <limits>
#include <iostream>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_)
{
  this->Kp = Kp_;
  this->Ki = Ki_;
  this->Kd = Kd_;

  p_error = 0.0;
  i_error = 0.0;
  d_error = 0.0;

  // Previous cte.
  prev_cte = 0.0;

  // Counters.
  counter = 0;
  errorSum = 0.0;
}

void PID::UpdateError(double cte)
{
  // Proportional error.
  p_error = cte;

  // Integral error.
  i_error += cte;

  // Diferential error.
  d_error = cte - prev_cte;
  prev_cte = cte;

  errorSum += cte;
  counter++;
}

double PID::TotalError()
{
  ::std::cout << "Total error in controller: " << p_error * Kp + i_error * Ki + d_error * Kd << ::std::endl;

  return p_error * Kp + i_error * Ki + d_error * Kd;
}