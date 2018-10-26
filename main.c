#include <stdio.h>


int main() {
    printf("największa liczba niepodzielna przez 2, 3, 5, 7.");
    int a = 0;
    printf("Podaj a: ");
    scanf("%d", &a);
    for (int liczba = a; liczba >= 1; --liczba) {
        if (liczba % 2 && liczba % 3 && liczba % 5 && liczba % 7) {
            printf("%d\n", liczba);
            break;
        }
    }
    return 0;
}