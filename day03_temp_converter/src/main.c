#include <stdio.h>

#define KELVIN_OFFSET 273.15

int main(void) {
  printf("Temperature Converter Program\n\n");

  float celsius = 0;
  float kelvin = 0;
  float fahrenheit = 0;
  int choice = 0;

  printf("Select an option\n");
  printf("1. Celsius -> Fahrenheit\n");
  printf("2. Fahrenheit -> Celsius\n");
  printf("3. Celsius -> Kelvin\n");
  printf("4. Kelvin -> Celsius\n");
  printf("5. Fahrenheit -> Kelvin\n");
  printf("6. Kelvin -> Fahrenheit\n");

  printf("\nEnter choice (1-6): ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Enter Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8f) + 32;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    break;

  case 2:
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5.0f / 9.0f;

    printf("%.2f F = %.2f C\n", fahrenheit, celsius);
    break;

  case 3:
    printf("Enter Celsius: ");
    scanf("%f", &celsius);

    kelvin = celsius + KELVIN_OFFSET;

    printf("%.2f C = %.2f K\n", celsius, kelvin);
    break;

  case 4:
    printf("Enter Kelvin: ");
    scanf("%f", &kelvin);

    celsius = kelvin - KELVIN_OFFSET;

    printf("%.2f K = %.2f C\n", kelvin, celsius);
    break;

  case 5:
    printf("Enter Fahrenheit: ");
    scanf("%f", &fahrenheit);

    kelvin = (fahrenheit - 32) * 5.0f / 9.0f + KELVIN_OFFSET;

    printf("%.2f F = %.2f K\n", fahrenheit, kelvin);
    break;

  case 6:
    printf("Enter Kelvin: ");
    scanf("%f", &kelvin);

    fahrenheit = (kelvin - KELVIN_OFFSET) * 9.0f / 5.0f + 32;

    printf("%.2f K = %.2f F\n", kelvin, fahrenheit);
    break;

  default:
    printf("Invalid choice\n");
  }

  return 0;
}
