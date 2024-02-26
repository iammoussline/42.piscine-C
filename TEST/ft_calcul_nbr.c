#include <stdio.h>

int calcultab (int tableau[], int taille)
{
    int result = 0;

    for (int i = 0; i < taille; i++)
    {
        result += tableau[i];
    }
        return result;
}
int main ()
{
    int tableau[] = {10, 5, 24, 8 ,17};
    int taille = sizeof(tableau) /
    sizeof(tableau[0]);

    int max = trouvermax(tableau, taille);

    printf("Le plus grand nombre est : %d\n", max);

    return 0;
}