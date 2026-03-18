#include <stdio.h>

int main() {
    int command = 0;

    printf("A command controller for an LED Controller\n\n");
    printf("Valid Commands\n");

    printf("0 → OFF\n");
    printf("1 → BLINK_SLOW\n");
    printf("2 → BLINK_FAST\n");
    printf("3 → ON\n");

    printf("\nInput: ");
    scanf("%d", &command);

    switch (command) {
        case 0:
            printf("Output: OFF\n");
            break;
        case 1:
            printf("Output: BLINK_SLOW\n");
            break;
        case 2:
            printf("Output: BLINK_FAST\n");
            break;
        case 3:
            printf("Output: ON\n");
            break;
        default:
            printf("Invalid Command, Choose from 0---3\n");
    }

    return 0;
}