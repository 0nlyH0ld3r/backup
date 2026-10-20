#include <stdio.h>
int main(void) {
  int x = 0;
  if ((x = 5) == 5) {
    printf("%d", x);
  }
}
