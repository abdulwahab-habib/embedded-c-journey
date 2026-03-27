#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  char name_buffer[64] = {0};
  char grade_buffer[8] = {0};
  char age_buffer[32] = {0};
  char *end;

  printf("Enter board name? ");

  if (fgets(name_buffer, sizeof(name_buffer), stdin) == NULL) {
    return 1;
  }

  name_buffer[strcspn(name_buffer, "\n")] = '\0';

  printf("Enter serial number: ");

  if (fgets(age_buffer, sizeof(age_buffer), stdin) == NULL) {
    return 1;
  }
  age_buffer[strcspn(age_buffer, "\n")] = '\0';

  long serial_no = strtol(age_buffer, &end, 10);

  printf("Enter board grade: ");

  if (fgets(grade_buffer, sizeof(grade_buffer), stdin) == NULL) {
    return 1;
  }

  char grade = grade_buffer[0];

  printf("\n\nBoard Details↓\n");
  printf("Board name:  %s\n", name_buffer);
  printf("Board Grade: %c\n", grade);
  printf("Serial NO: %ld\n", serial_no);

  return 0;
}