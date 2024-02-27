#include <unistd.h>
#include <stdio.h>


int longueurChaine(char texte[])
{
    int i;
    i = 0;
    int compteur = 0;

    while(texte[i] != '\0')
    {
        i++;
        compteur ++;
    }
    return (compteur);
}

int main (int argc, char **argv)
{
    (void) argc;
    char texte[] = argv[1];
    longueurChaine(texte);
    printf("La longueur de la chaine est ; %d", longueurChaine(texte));
    return 0;
}