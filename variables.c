#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int num1, num2;
  char x[] = "Mohamed";
  printf("Enter the first number : ");
  scanf("%d", &num1);
  printf("Enter the second number : ");
  scanf("%d", &num2);

  printf("sum(%d,%d) = %d\n", num1, num2,num1 + num2);
  printf("def(%d,%d) = %d\n", num1, num2,num1 - num2);
  printf("prod(%d,%d) = %d\n", num1, num2, num1*num2);
  printf("dev(%d,%d) = %lf\n", num1, num2, (double)num1/num2);
  strcat(x, " ");
  printf("The string is '%s'", x);

  return 0;
}
