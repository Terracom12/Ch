#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <linkbot.h>

class Robot {
public:
  Robot();

  void drive(double distance);
  void moveto(double x, double y);
  void turn(double degrees);

  virtual ~Robot();
private:
  CLinkbotI *mRobo;
  double mX, mY;
  double mAngle
};

// Defines methods
#include "Robot.inl"

#endif /* ROBOT_HPP */
