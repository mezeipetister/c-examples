#include <stdio.h>

typedef
enum {
      JONATAN,
      GOLDEN,
      MUTSU,
      GRANNY_SMITH,
      GALA
} AlmaType;

void print_alma(AlmaType type) {
  printf("%d\n",type);
};

int main() {
  print_alma(GOLDEN);
  return 0;
}
