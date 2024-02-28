#include <unistd.h>
#include <stdio.h>


int longueurChaine(char texte[])
{
    int i = 0;

    while(texte[i] != '\0')
    {
        i++;
    }
    return (i);
}

int main (int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Aucune chaîne fournie en argument.\n");
        return 1;
    }


    char *texte = argv[1];
    int longueur = longueurChaine(texte);
    printf("La longueur de la chaîne est : %d\n", longueur);
    return 0;
}