#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, sum, def, prod;
  printf("Enter the first number : ");
  scanf("%d", &num1);
  printf("Enter the second number : ");
  scanf("%d", &num2);
  sum = num1 + num2;
  def = num1 - num2;
  prod = num1*num2;
  printf("sum(%d,%d) = %d\n", num1, num2, sum);
  printf("def(%d,%d) = %d\n", num1, num2, def);
  printf("prod(%d,%d) = %d\n", num1, num2, prod);
  return 0;
}
