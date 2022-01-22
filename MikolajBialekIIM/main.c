#include <stdio.h>

void iin(int b){
    char imie[20];
    char nazwisko[20];
    printf("Podaj swoje imie:\n");
    scanf("%s", &imie);
    printf("Podaj swoje nazwisko:\n");
    scanf("%s", &nazwisko);
    printf("Twoje imie to %s a nazwisko %s", imie, nazwisko);
        printf("zmiana");
    return 0;
}
int main() {
    int a;
    iin(a);
    return 0;
}
