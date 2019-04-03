#include "include/Robot.hpp"

char *getInput();

int main(int argc, char const *argv[]) {
  using namespace std;
  Robot *ro = new Robot();

  ro->shape(TRIANGLE, 4);

  delete ro;

  return 0;
}
