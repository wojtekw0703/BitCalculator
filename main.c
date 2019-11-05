#include <stdio.h>
#include <stdlib.h>

void wczytywanie()
{
    int pierwsza_liczba;
    int druga_liczba;
    char znaki[4];

    printf("Podaj pierwsza liczbe w systemie dziesietnym: ");
    scanf("%d",&pierwsza_liczba);
    printf("Podaj druga liczbe w systemie dziesietnym: ");
    scanf("%d",&druga_liczba);
    printf("Podaj operator bitowy: ");
    scanf("%s",&znaki);

    if(pierwsza_liczba<0 && druga_liczba<0)
    {
        printf("Nie wpisujemy ujemnych liczb");
    }else
    {


    if (strcmp(znaki, "and") == 0)
    {
                funkcja_and(pierwsza_liczba,druga_liczba);

    } else if (strcmp(znaki, "or") == 0)
    {
                funkcja_or(pierwsza_liczba,druga_liczba);

    } else if (strcmp(znaki, "xor") == 0)
    {
                funkcja_xor(pierwsza_liczba,druga_liczba);

    }else if (strcmp(znaki, "nand") == 0)
    {
                funkcja_nand(pierwsza_liczba,druga_liczba);

    }else
    {
        printf("Nie rozpoznano operatora bitowego");
    }
}
}


int binarnie(int pierwsza_liczba)
{
  long wynik=0,modulo,f=1;

    while(pierwsza_liczba != 0)
    {
         modulo = pierwsza_liczba % 2;
         wynik = wynik + modulo * f;
         f = f * 10;
         pierwsza_liczba = pierwsza_liczba / 2;
    }
 return wynik;
}


void funkcja_and(int pierwsza, int druga)
{
    int tmp = pierwsza&druga;
    system("cls");
    printf("%d & %d = %d (bin)",pierwsza,druga,binarnie(tmp));
}

void funkcja_or(int pierwsza, int druga)
{
    int tmp = pierwsza|druga;
    system("cls");
    printf("%d | %d = %d (bin)",pierwsza,druga,binarnie(tmp));
}

void funkcja_xor(int pierwsza, int druga)
{
    int tmp = pierwsza^druga;
    system("cls");
    printf("%d ^ %d = %d (bin)",pierwsza,druga,binarnie(tmp));
}

void funkcja_nand(int pierwsza, int druga)
{
    int tmp = ~pierwsza;
    system("cls");
    printf("%d ~ = %d (bin)",pierwsza,binarnie(tmp));
    int tmp_d = ~druga;
    printf("%d ~ = %d (bin)",druga,binarnie(tmp_d));
}


int main(int argc, char **argv)
{
   wczytywanie();
   return 0;
}
