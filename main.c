#include <stdio.h>


int main() {
    printf("liczby niepodzielne przez 2, 3, 5, 7.\n");
    int a = 0;
    printf("Podaj a: ");
    scanf("%d", &a);
    for (int liczba = a; liczba >= 1; --liczba) {
        if (liczba % 2) {
            if (liczba % 3) {
                if (liczba % 5) {
                    if (liczba % 7) {
                        printf("%d\t", liczba);

                    }
                }
            }
        }
    }
    return 0;
}