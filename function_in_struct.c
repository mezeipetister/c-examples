/* Function in struct demo */

#include <stdio.h>

// Sum function prototype
typedef int (*sumTwoNumbers)(int a, int b);

// Object prototype
typedef struct ObjectPtr *Object;

// Demo Object,
// Storing a, b, and sum as function.
struct Object {
  int a, b;
  sumTwoNumbers sum;
};

// Demo function
int demo(int a, int b) {
  return a + b;
}

int main() {
  struct Object DemoObject = {1, 2, demo};
  printf("The sum of 1 and 2 is: %d\n", DemoObject.sum(1,2));
  return 0;
}

