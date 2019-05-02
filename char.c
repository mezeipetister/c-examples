/* Char tests */
#include <stdio.h>

int main(){
  char Name[] = u8"Szia, mi a helyzet kisöcsém? Tán sós húst sütsz ám, te betyár?";
  printf("Text is in UTF-8: %s\n", Name);

  char Demo;

  printf("Enter a valid utf-8 string:\n");
  scanf("%s", &Demo);

  printf("What you typed is:\n%s\n", &Demo);
}
