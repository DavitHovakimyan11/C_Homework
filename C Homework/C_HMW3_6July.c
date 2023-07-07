#include <stdio.h>


int main() {
    int x = 0;
    int y = 0;
    printf("Please enter value of x:");
    scanf("%d", &x);
    printf("Please enter value of y:");
    scanf("%d", &y);
    printf("The result is equal to %d", x * y + 21 * x / y - 200);
    return 0;
}


int main() {
    char sym = 0;
    printf("Please enter a letter: ");
    scanf("%c", &sym);
    printf("%c", sym + 32);
    
    return 0;
}


int main() {
    char sym = 0;
    printf("Please enter a symbol: ");
    scanf("%c", &sym);
    if (sym >= 48 && sym <= 57) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}



int main() {
    char symbol = 0;
    printf("Please enter a symbol: ");
    scanf(" %c", &symbol);
    if (symbol >= 65 && symbol <= 90 || symbol >= 97 && symbol <= 122) {
    
        switch(symbol) {
            case 'A':
            case 'a':
            case 'E':
            case 'e':
            case 'I':
            case 'i':
            case 'O':
            case 'o':
            case 'U':
            case 'u':
            case 'Y':
            case 'y':
                printf("dzaynovar");
                break;
            default:
                printf("baxadzayn");
            
        }
    } else {
        printf("You have entered invalid symbol please enter valid one ");
    }
    return 0;
}



int main() {
    int a = 0;
    int b = 0;
    printf("Please enter value of a: ");
    scanf(" %d", &a);
    printf("Please enter value of b: ");
    scanf(" %d", &b);
    if (a > b) {
        printf("a is the greatest with value of %d", a);
    } else {
        printf("b is the greatest with value of %d", b);
    }
    
}




int main() {
    int myarray[3];
    int i;
    int mynum = 0;
    int mymax = 0;
    for (i = 0; i < 3; i++) {
        if (i == 0) {
            printf("Please enter the first number: ");
            scanf("%d", &mynum);
            myarray[i] = mynum;
            mymax = myarray[0];
        } else {
            printf("Please enter next number: ");
            scanf("%d", &mynum);
            myarray[i] = mynum;
            if (myarray[i] > mymax) {
                mymax = myarray[i];
            }
        }
    }

    printf("Max value is equal to %d", mymax);
}