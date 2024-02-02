#include <stdio.h>

int main() {
  const double PI = 3.141592;
  double r;
  double a;

  printf("\n Enter the radius of a circle: ");
  scanf("%lf", &r);

  a = r * r * PI;

  printf("\nArea: %lf", a);
  return 0;
}
