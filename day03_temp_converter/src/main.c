#include <stdio.h>

int main() {
  printf("Temperature Converter \n");

  float celsius = 0;
  float kelvin = 0;
  float fahrenheit = 0;
  int choice = 0;

  printf("Select an option\n");
  printf("1. Celsius - Fahrenheit\n");
  printf("2. Fahrenheit - Celsius\n");
  printf("3. Celsius - Kelvin\n");
  printf("4. Kelvin - Celsius\n");
  printf("5. Fahrenheit - Kelvin\n");
  printf("6. Kelvin - Fahrenheit\n");

  printf("\nEnter choice from 1 - 6: ");
  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Celsius - Fahrenheit\n");
    printf("Enter temperature value in °C (Celsius): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f°C is %.2f Fahrenheit\n", celsius, fahrenheit);
    break;

  case 2:
    printf("Fahrenheit - Celsius\n");
    printf("Enter temperature value in F: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * (float)5 / 9;

    printf("%.2f Fahrenheit is %.2f°Celsius\n", fahrenheit, celsius);
    break;

  case 3:
    printf("Celsius - Kelvin\n");
    printf("Enter temperature value in °C (Celsius): ");
    scanf("%f", &celsius);

    kelvin = celsius + 273.15;
    printf("%.2f°C is %.2f Kelvin\n", celsius, kelvin);
    break;

  case 4:
    printf("Kelvin - Celsius\n");
    printf("Enter temperature value in K (Kelvin): ");
    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;
    printf("%.2f Kelvin is %.2f°C\n", kelvin, celsius);
    break;

  case 5:
    printf("Fahrenheit - Kelvin\n");
    printf("Enter temperature value in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    kelvin = (fahrenheit - 32) * (float)5 / 9 + 273.15;
    printf("%.2f Fahrenheit is %.2f Kelvin\n", fahrenheit, kelvin);
    break;

  case 6:
    printf("Kelvin - Fahrenheit\n");
    printf("Enter temperature value in Kelvin: ");
    scanf("%f", &kelvin);

    fahrenheit = (kelvin - 273.15) * (float)9 / 5 + 32;
    printf("%.2f Kelvin is %.2f Fahrenheit\n", kelvin, fahrenheit);
    break;
  }
}
