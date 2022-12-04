#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int i, count_n = 0, count_u = 0, count_l = 0;
    char a[20];
    gets(a);
    for (i = 0; i < strlen(a); i++) {
        if (a[i] <= '9' && a[i] >= '0') {
            count_n++;
        }
        else if (a[i] == toupper(a[i])) {
            count_u++;
        }
        else {
            count_l++;
        }

    }
    printf("%d %d %d \n", count_n, count_u, count_l);
    int b;
    printf("Enter a number:");
    scanf("%d", &b);
    switch (b) {
        case 1:
            printf("One");
            break;
        case 2:
            printf("Two");
            break;
        case 3:
            printf("Three");
            break;
        case 4:
            printf("Four");
            break;
        case 5:
            printf("Five");
            break;
        case 6:
            printf("Six");
            break;
        case 7:
            printf("Seven");
            break;
        case 8:
            printf("Eight");
            break;
        case 9:
            printf("Nine");
            break;
        case 0:
            printf("Zero");

    }
}
