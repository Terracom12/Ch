#ifndef ROBOT_HPP
#define ROBOT_HPP

#include <linkbot.h>

class Robot {
public:
  Robot();

  void move();

  virtual ~Robot();
private:
  CLinkbotI *mRobo;
};

// Defines methods
#include "Robot.hpp.impl"

#endif /* ROBOT_HPP */
