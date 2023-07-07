// Task1
#include <stdio.h>

int main() {
    int x = 1;

    if (x > 0)
        printf("x is positive.");

    return 0;
}


// Task2

int main() {
    int mynum = 0;
    printf("Please enter your number: ");
    scanf("%d", &mynum);
    if (mynum % 2 == 0) {
        printf("Your number is even");
    } else {
        printf("Your number is odd");
    }

    return 0;
}


// Task 3

int main() {
    int mynum = 0;
    printf("Please enter your number: ");
    scanf("%d", &mynum);
    int i;
    int count = 0;
    for (i = 2; i < mynum; i++) {
        if (mynum % i == 0) {
            count++;
        }
    }
    if (count > 0) {
        printf("bard");
    } else {
        printf("parz");
    }
    



    return 0;
}