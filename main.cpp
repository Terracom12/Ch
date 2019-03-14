#include <iostream>
#include "include/Robot.hpp"

int main(int argc, char const *argv[]) {
  Robot *ro = new Robot();

  ro->move();

  return 0;
}

char *getInput()
{
  using namespace std;

  char characters[8];
  cout << "Please input 3 characters [A-G]: ";
  cin >>
}
