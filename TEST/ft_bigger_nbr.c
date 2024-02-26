#include <stdio.h>

int trouvermax(int tableau[], int taille)
{
    int max = tableau[0];
    for (int i = 0; i < taille; i++)
    {
        if(tableau[i] > max)
        {
            max = tableau[i];
        }
    }
    return max;
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