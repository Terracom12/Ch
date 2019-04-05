#include "include/Robot.hpp"

char *getInput();

int main(int argc, char const *argv[]) {
  using namespace std;
  Robot *ro = new Robot();

  ro->moveto(20,20);
  ro->move_shape(SQUARE,-10.0);

  delete ro;

  return 0;
}
