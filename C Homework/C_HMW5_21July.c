// Task1

#include <stdio.h>

int main() {

    printf("How many elements do you want to enter: ");
    int i, j;
    scanf("%d", &j);
    int myarray[j];
    for (i = 0; i < j; ++i) {
        if (i == 0) {
            printf("Please enter the 1st number: ");
            scanf("%d", &myarray[i]);
        } else {
            printf("Please enter the next number: ");
            scanf("%d", &myarray[i]);
        }
    }
    for (i = 0; i < j; ++i) {
        printf("%d ", myarray[i]);
    }

    return 0;
}




// Task2
int main() {
    char mystring[100];
    printf("Please enter an array of char: ");
    scanf("%s", mystring);
    
    int i = 0;
    while (mystring[i] != '\0') {
        if (mystring[i] >= 48 && mystring[i] <= 57) {
            printf("%c", mystring[i]);
        }
        ++i;
    }
    
    return 0;
}


// Task3

int main() {
    char mystring[100];
    printf("Please enter an array of char: ");
    scanf("%s", mystring);
    
    int i = 0;
    while (mystring[i] != '\0') {
        ++i;
    }
    
    while (i >= 0) {
        printf(" %c", mystring[i]);
        --i;
    }

    return 0;
}


// task4

#include <stdio.h>

int main() {
    int a = 0;
    printf("Please enter side of square: ");
    scanf("%d", &a);
    
    int i, j;
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= a; j++) {
            if (i == 1 || i == a || j == 1 || j == a) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
