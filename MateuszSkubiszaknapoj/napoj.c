#include <stdio.h>

int main() {
char a[20];
char b[20];
printf("Jaki jest twoj ulubiony napoj wpisz gazowany czy nie gazowany\n");
scanf("%s",a);
printf("Jaki smak wolisz slodki czy gorzki\n");
scanf("%s",b);
printf("Wolisz napój %s i %s", a, b);
return 0;
}
