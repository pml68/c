#include <ctype.h>
#include <stdio.h>

int main() {
  char unit;
  float temp;

  printf("\nIs the temperature in (F)ahrenheit or (C)elsius? ");
  scanf("%c", &unit);

  unit = toupper(unit);

  printf("\nGive me the temperature: ");
  scanf("%f", &temp);

  if (unit == 'F') {
    printf("\nAfter converting to Celsius, %0.2f Fahrenheit is %0.2f°C", temp,
           (temp - 32) * (5.0 / 9.0));
  } else if (unit == 'C') {
    printf("\nAfter converting to Fahrenheit, %0.2f Celsius is %0.2f°F", temp,
           (temp * 1.8) + 32);
  } else {
    printf("\nHell nah");
  }

  printf("\n");
  return 0;
}
