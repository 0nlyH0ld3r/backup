#include <stdio.h>
int main() {
  FILE *file_output;
  file_output = fopen("test.txt", "w");

  fputs("A fucking string", file_output);
  fclose(file_output);
}
