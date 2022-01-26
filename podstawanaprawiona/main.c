#include <stdio.h>

int main()
{
    printf("Witaj, szukasz kogos zeby z nim cos porobic? Wpisz swoje dane i porownaj je z innymi \n");
    char imie[20];
    char nazwisko[20];
    char marka[30]; //telefonu
    char hobby[100];
    char ngg[20]; //niegaz, gaz
    char sg[20]; //slodki, gorzki
    char ulub[30]; //ulubiony napoj
    printf("Podaj swoje imie:\n");
    scanf("%s", &imie);
    printf("Podaj swoje nazwisko:\n");
    scanf("%s", &nazwisko);
    printf ("Podaj marke telefonu:\n");
    scanf("%s", &marka);
    printf("Podaj swoje hobby: \n");
    scanf("%s", &hobby);
    printf("Jaki jest twoj ulubiony napoj wpisz gazowany czy niegazowany\n");
    scanf("%s",ngg);
    printf("Jaki smak wolisz slodki czy gorzki\n");
    scanf("%s",sg);
    printf("Jaki jest twoj ulubiony napoj\n");
    scanf("%s", ulub);
    printf("Wolisz napoj: %s \n", ngg);
    printf("Wolisz napoj: %s \n", sg);
    printf("A twoj ulubiony napoj to: %s \n", ulub);
    printf("Twoje hobby to: %s \n", hobby);
    printf ("Twoja marka telefonu to: %s\n", marka);
    printf("Twoje imie to %s a nazwisko %s \n", imie, nazwisko);
    return 0;
}
