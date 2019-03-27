#include <iostream>
// Defining class methods

Robot::Robot()
{
  mRobo = new CLinkbotI();
}

Robot::~Robot()
{
  delete mRobo;
  mRobo = NULL;
}

void Robot::drive(double distance)
{
  // Actual movement
  mRobo->driveDistance(distance, 1.75);
  // Calculating where the robot currently is:
  
}

void Robot::moveto(double x, double y)
{
  // Moves to xy based on a right triangle
  double hypotenuse, opposite, adjacent;
  double angle;
  // Using abs() so that these will always be positive (absolute value)
  opposite = abs(mX-x);
  adjacent = abs(mY-y);
  hypotenuse = sqrt(pow(opposite,2)+pow(adjacent,2)); // Use the pythagoream theorm to calculate the hypotonuse
  angle = atan(opposite/adjacent); // Weird stuff to calculate angle
  angle *= (180 / M_PI); // Convert from radians to degrees
  turn(angle); // Turn to the correct rotation
  drive(hypotenuse); // Drive the hypotenuse distance
  turn(-angle);
}

void Robot::turn(double degrees)
{
  mRobo->turnRight(degrees, 1.75, 3.69);
  mAngle+=degrees;
  if(mAngle >= 360)
    mAngle %= 360;
}
