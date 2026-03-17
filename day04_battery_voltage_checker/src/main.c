#include <stdio.h>

#define CRITICAL_THRESHOLD 3.0f
#define LOW_THRESHOLD 3.3f

int main(void) {
    float voltage = 0.0f;
    int result = 0;

    printf("Battery Voltage Reader\n");

    printf("Enter battery voltage: ");

    result = scanf("%f", &voltage);

    if (result != 1) {
        printf("INVALID\n");
        return 1;
    }

    if (voltage < 0) {
        printf("INVALID\n");
    }
    else if (voltage < CRITICAL_THRESHOLD) {
        printf("CRITICAL\n");
    }
    else if (CRITICAL_THRESHOLD <= voltage && voltage < LOW_THRESHOLD) {
        printf("LOW\n");
    }
    else {
        printf("OK\n");
    }

    return 0;
}