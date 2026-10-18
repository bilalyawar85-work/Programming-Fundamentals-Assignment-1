#include <stdio.h>
#include <string.h>

int main() {
    char season[20];
    char room[20];
    int nights;
    int rate = 0;
    float total;
    float discount;

    printf("Enter season (Peak or Off-Peak): ");
    scanf("%s", season);

    printf("Enter room type (Standard, Deluxe or Suite): ");
    scanf("%s", room);

    printf("Enter number of nights: ");
    scanf("%d", &nights);

    if (strcmp(season, "Peak") == 0) {
        if (strcmp(room, "Standard") == 0) {
            rate = 5000;
        }
        else if (strcmp(room, "Deluxe") == 0) {
            rate = 8000;
        }
        else if (strcmp(room, "Suite") == 0) {
            rate = 12000;
        }
    }
    else if (strcmp(season, "Off-Peak") == 0) {
        if (strcmp(room, "Standard") == 0) {
            rate = 3000;
        }
        else if (strcmp(room, "Deluxe") == 0) {
            rate = 5000;
        }
        else if (strcmp(room, "Suite") == 0) {
            rate = 8000;
        }
    }

    total = rate * nights;

    if (nights > 7) {
        discount = total * 0.15;
        total = total - discount;
    }

    printf("Total = %.2f\n", total);

    return 0;
}
