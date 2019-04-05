#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <linkbot.h>

enum {
  TRIANGLE = 3,
  SQUARE,
  PENTAGON,
  HEXAGON,
  HEPTAGON,
  OCTOGON,
  NONOGON,
  DECAGON,
  CIRCLE
};

class Robot {
public:
  Robot();

  void drive(double distance);
  void moveto(double x, double y);
  void turn(double degrees);

  void move_shape(int kind_shape, double shape_length);

  virtual ~Robot();
private:
  CLinkbotI *mRobo;
  double mX, mY;
  double mAngle;
};

// Defines methods
#include "Robot.inl"

#endif /* ROBOT_HPP */
