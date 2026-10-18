#include <stdio.h>

int main() {
    int N;
    int i;
    int sum;
    int fail;
    int numsubject;
    int marks;
    float avg;

    printf("Enter number of students: ");
    scanf("%d", &N);

    i = 1;
    while (i <= N) {
        sum = 0;
        fail = 0;
        numsubject = 1;

        printf("\nStudent %d\n", i);

        while (numsubject <= 5) {
            printf("Enter marks of subject %d: ", numsubject);
            scanf("%d", &marks);

            sum = sum + marks;

            if (marks < 33) {
                fail = 1;
            }

            numsubject = numsubject + 1;
        }

        avg = sum / 5.0;

        if (fail == 1) {
            printf("Fail - Subject Deficiency\n");
        }
        else if (avg >= 80) {
            printf("Distinction\n");
        }
        else if (avg >= 60) {
            printf("Pass\n");
        }
        else {
            printf("Fail\n");
        }

        i = i + 1;
    }

    return 0;
}
