// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int MyAges[3];
    char Names[3][20];
    double score[3];
    int i;
    for (i = 0; i < 3; ++i) {
        printf("Enter age please: ");
        scanf("%d", &MyAges[i]);
        printf("Enter name please: ");
        scanf("%s", &Names[i]);
        printf("Enter average score please: ");
        scanf("%lf", &score[i]);
    }
    double mymax = score[0];
    for (i = 1; i < 3; ++i) {
        if (score[i] > mymax) {
            break;
        }
    }
    printf("%s", Names[i]);

    return 0;
}