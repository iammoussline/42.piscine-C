#include <stdio.h>

int ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb <= 0)
    {
        return 0;
    }
    while (i * i <= nb)
    {
        if (i * i == nb)
        return (i);
        i++;
    }
    return (0);
}

int main() {
    int number;
    printf("Entrez un nombre : ");
    scanf("%d", &number);
    int result = square_root(number);
    if (result != 0) {
        printf("La racine carrée entière de %d est %d.\n", number, result);
    } else {
        printf("Il n'y a pas de racine carrée entière pour %d.\n", number);
    }
    return 0;
}