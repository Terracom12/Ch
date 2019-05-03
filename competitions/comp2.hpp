Robot *robot2 = new Robot();
Robot *robot3 = new Robot();
Robot *robot4 = new Robot();

const char *nums;
unsigned int e = 0, f = 0, g = 0;

printf("Please input three, positive whole numbers (E, F, G), seperated by spaces: ");
scanf("%d %d %d", &e, &f, &g);

int x = (g - f)/e;

if(x > 4 || x < 1)
{
  printf("X must be between 1 and 4! x was: %d", x);
}
else
{
  printf("Robot %d moved!\n", x);
  int distance = 18;
  switch(x)
  {
    case 1:
      robot->drive(distance);
      break;
    case 2:
      robot2->drive(distance);
      break;
    case 3:
      robot3->drive(distance);
      break;
    case 4:
      robot4->drive(distance);
      break;
  }
}

delete robot2;
delete robot3;
delete robot4;
