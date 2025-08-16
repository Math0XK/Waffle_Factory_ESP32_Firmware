#ifndef PIDMANAGER_HPP
#define PIDMANAGER_HPP

#include <PID_v1.h>
#include <PID_AutoTune_v0.h>

double Setpoint, Input, Output, Kp, Ki, Kd;
int WindwSize;
unsigned long WindowStartTime;

PID myPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);


#endif // PIDMANAGER_HPP