#include <stdio.h>

// Classroom task1
int main() {
    int i;
    for (i = 0; i < 101; i++) {
        printf("%d\n", i);
    }

    return 0;
}


// Classroom task2
int main() {
    int i;
    for (i = 0; i < 101; i++) {
        if (i % 2 == 1) {
            printf("%d\n", i);
        }
    } 

    return 0;
}



// Classroom task3
int main() {
    int mynum = 0;
    int mysum = 0;
    int rem = 0;
    scanf("%d", &mynum);
    while (mynum != 0) {
        rem = mynum % 10;
        mysum += rem;
        mynum = mynum / 10;
        // if (mynum < 10) {
        //     mysum += mynum;  
        //     break;
        // }
        
    }
    printf("%d", mysum);
    return 0;
}



// Classroom task4
int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
        printf("Please enter value of a: \n");
        scanf("%d", &a);
        printf("Please enter value of b: \n");
        scanf("%d", &b);
        printf("Please enter value of c: \n");
        scanf("%d", &c);
        printf("Please enter value of d: \n");
        scanf("%d", &d);
        if (a + b + c + d == 0) {
            if (a < b && a < c && a < d) {
                printf("%d", a);
            } else if (b < a && b < c && b < d) {
                printf("%d", b);
            } else if (c < a && c < b && c < d) {
                printf("%d", c);
            } else if (d < a && d < b && d < c) {
                printf("%d", d);
            }
        }
        else {
            printf("The sum is not equal to 0");
        }

    

    return 0;
}


// Classroom task5
int main() {
    int a = 0;
    int b = 0;
    printf("Please enter the 1st number: \n");
    scanf("%d", &a);
    printf("Please enter the 2nd number: \n");
    scanf("%d", &b);
    if (a == b) {
        printf("Possible");
    } else if (a > b && a % b == 0 && b != 0) {
        printf("Possible");
    } else if (b > a && b % a == 0 && a != 0) {
        printf("Possilbe");
    } else {
        printf("Not possible");
    }
    return 0;
}



// Homework task1
int main() {
    int year = 0;
    printf("Please enter a year: \n");
    scanf("%d", &year);
    if (year % 400 == 0) {
        printf("It's a leap year");
    } else if (year % 100 == 0) {
        printf("It's not a leap year");
    } else if (year % 4 == 0) {
        printf("It's a leap year");
    } else {
        printf("It's not a leap year");
    }

    return 0;
}




// Homework task2

int main() {
    int a = 0;
    int b = 0;
    int c = 0;
    printf("Please enter value of a: \n");
    scanf("%d", &a);
    printf("Please enter value of b: \n");
    scanf("%d", &b);
    printf("Please enter value of c: \n");
    scanf("%d", &c);
    int mynumbers[3] = {a, b, c};
    int i;
    int mymax = mynumbers[0];
    for (i = 1; i < 3; i++) {
        if (mynumbers[i] > mymax) {
            mymax = mynumbers[i];
        }
    }
    for (i = 1; i <= mymax; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            printf("%i\n", i);
        }
    }
    

    return 0;
}


// Homework task3

int main() {
    char mynum[20];
    printf("Please enter an integer number:\n");
    scanf("%s", &mynum);
    if (mynum[4] == '0') {
        mynum[4] = '1';
        printf("%s", mynum);
    } else {
        printf("%s", mynum);
    }

    return 0;
}
