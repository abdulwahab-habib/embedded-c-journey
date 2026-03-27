#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define KELVIN_OFFSET 273.15

int main(void) {
  char celsius_buffer[64] = {0};
  char fahrenheit_buffer[64] = {0};
  char kelvin_buffer[64] = {0};
  char choice_buffer[64];
  char *choice_end;
  char *celsius_end;
  char *fahr_end;
  char *kev_end;

  double celsius = 0;
  double fahrenheit = 0;
  double kelvin = 0;
  int choice = 0;

  printf("Select an option\n");
  printf("1. Celsius -> Fahrenheit\n");
  printf("2. Fahrenheit -> Celsius\n");
  printf("3. Celsius -> Kelvin\n");
  printf("4. Kelvin -> Celsius\n");
  printf("5. Fahrenheit -> Kelvin\n");
  printf("6. Kelvin -> Fahrenheit\n");

  printf("\nEnter choice (1-6): ");
  if (fgets(choice_buffer, sizeof(choice_buffer), stdin) == NULL) {
    return 1;
  }
  choice_buffer[strcspn(choice_buffer, "\n")] = '\0';
  choice = strtol(choice_buffer, &choice_end, 10);

  if (choice_end == choice_buffer || *choice_end != '\0') {
    printf("Invalid Input\n");
    return 1;
  }

  switch (choice) {
  case 1:
    printf("Enter Celsius: ");

    if (fgets(celsius_buffer, sizeof(celsius_buffer), stdin) == NULL) {
      return 1;
    }
    celsius_buffer[strcspn(celsius_buffer, "\n")] = '\0';
    celsius = strtod(celsius_buffer, &celsius_end);

    if (celsius_end == celsius_buffer || *celsius_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    fahrenheit = (celsius * 1.8f) + 32;

    printf("%.2f C = %.2f F\n", celsius, fahrenheit);
    break;

  case 2:
    printf("Enter Fahrenheit: ");

    if (fgets(fahrenheit_buffer, sizeof(fahrenheit_buffer), stdin) == NULL) {
      return 1;
    }
    fahrenheit_buffer[strcspn(fahrenheit_buffer, "\n")] = '\0';
    fahrenheit = strtod(fahrenheit_buffer, &fahr_end);

    if (fahr_end == fahrenheit_buffer || *fahr_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    celsius = (fahrenheit - 32) * 5.0f / 9.0f;

    printf("%.2f F = %.2f C\n", fahrenheit, celsius);
    break;

  case 3:
    printf("Enter Celsius: ");

    if (fgets(celsius_buffer, sizeof(celsius_buffer), stdin) == NULL) {
      return 1;
    }
    celsius_buffer[strcspn(celsius_buffer, "\n")] = '\0';
    celsius = strtod(celsius_buffer, &celsius_end);

    if (celsius_end == celsius_buffer || *celsius_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    kelvin = celsius + KELVIN_OFFSET;

    printf("%.2f C = %.2f K\n", celsius, kelvin);
    break;

  case 4:
    printf("Enter Kelvin: ");

    if (fgets(kelvin_buffer, sizeof(kelvin_buffer), stdin) == NULL) {
      return 1;
    }
    kelvin_buffer[strcspn(kelvin_buffer, "\n")] = '\0';
    kelvin = strtod(kelvin_buffer, &kev_end);

    if (kev_end == kelvin_buffer || *kev_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    celsius = kelvin - KELVIN_OFFSET;

    printf("%.2f K = %.2f C\n", kelvin, celsius);
    break;

  case 5:
    printf("Enter Fahernheit: ");

    if (fgets(fahrenheit_buffer, sizeof(fahrenheit_buffer), stdin) == NULL) {
      return 1;
    }
    fahrenheit_buffer[strcspn(fahrenheit_buffer, "\n")] = '\0';
    fahrenheit = strtod(fahrenheit_buffer, &fahr_end);

    if (fahr_end == fahrenheit_buffer || *fahr_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    kelvin = (fahrenheit - 32) * 5.0f / 9.0f + KELVIN_OFFSET;

    printf("%.2f F = %.2f K\n", fahrenheit, kelvin);
    break;

  case 6:
    printf("Enter Kelvin: ");

    if (fgets(kelvin_buffer, sizeof(kelvin_buffer), stdin) == NULL) {
      return 1;
    }
    kelvin_buffer[strcspn(kelvin_buffer, "\n")] = '\0';
    kelvin = strtod(kelvin_buffer, &kev_end);

    if (kev_end == kelvin_buffer || *kev_end != '\0') {
      printf("Invalid Input\n");
      return 1;
    }

    fahrenheit = (kelvin - KELVIN_OFFSET) * 9.0f / 5.0f + 32;

    printf("%.2f K = %.2f F\n", kelvin, fahrenheit);
    break;

  default:
    printf("\nInvalid Choice\n");
    printf("\nChoose btw (1-6)\n");
  }

  return 0;
}