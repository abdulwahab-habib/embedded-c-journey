#include <stdio.h>

int main() {
  // variables declaration
  int temperature = 25;
  int pressure = 101325;
  float humidity = 50.0;

  printf("Temperature: %d °C\n", temperature);
  printf("Pressure: %d Pa\n", pressure);
  printf("Reletive Humidity: %.1f%%\n", humidity);
}
