#include <iostream>


int
f (int x, int y)
{
  return x + y;
}

int
main ()
{
  std::cout << "El resultado es: " << f (10, 20) << std::endl;
  return 0;
}
