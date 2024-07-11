#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main() {
  int n;
  do {
    printf("Enter a positive number :\t");
    scanf("%d", &n);
  }while (n<0);
  for (int i = 0; i<n; i++) {
    printf("%d ", i);
  }

  return 0;
}
