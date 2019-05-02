#include <stdio.h>

int main() {
  float a = 0;
  // Iterate over 300 M round
  for (int i = 0; i < 300000000; i++) {
    a = (a * a * a * i);
  }
  printf("%.3f\n",
	 a);
}
