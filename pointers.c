/* C pointer examples */
#include <stdio.h>

int a;
int *b;
int **c;
int ***d;

int main(){
  a = 0;
  b = &a;
  c = &b;
  d = &c;
  ***d = 15;
  printf("the value is: %d\n", ***d);
  return 0;
}
