#include <stdio.h>

int main() {
    int floor = 0;
    int N;
    int i;
    int floor_requested;

    printf("Enter number of requests: ");
    scanf("%d", &N);

    i = 1;
    while (i <= N) {
        printf("Enter floor requested: ");
        scanf("%d", &floor_requested);

        if (floor_requested > floor) {
            printf("Moving Up\n");
        }
        else if (floor_requested < floor) {
            printf("Moving Down\n");
        }
        else {
            printf("Doors Opening\n");
        }

        floor = floor_requested;
        i = i + 1;
    }

    return 0;
}
