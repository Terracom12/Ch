#include "include/Robot.hpp"

char *getInput();

int main(int argc, char const *argv[]) {
  using namespace std;
  Robot *ro = new Robot();

  ro->moveto(12,10);
  ro->moveto(16,0);
  ro->moveto(20,16);

  delete ro;

  return 0;
}
