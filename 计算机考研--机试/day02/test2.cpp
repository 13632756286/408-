#include <algorithm>
#include <cstdio>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
  int n, x, y, z;
  scanf("%d", &n);
  for (x = 0; x <= 20; x++) for (y = 0; y <= 33; y++) for (z = 0; z <= 300; z++){
    if (5 * x + 3 * y + ceil(z * 1.0 / 3) <= n && x + y + z == 100)
      printf("x=%d,y=%d,z=%d\n", x, y, z);
  }
  return 0;
}