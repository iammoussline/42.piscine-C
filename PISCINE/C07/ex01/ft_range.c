#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int *ft_range(int min, int max) {
    if (min >= max || min == INT_MAX || max == INT_MIN) {
        return NULL;
    }

    int taille = max - min;
    int *tableau = (int *)malloc(taille * sizeof(int));

    if (tableau == NULL) {
        return NULL;
    }

    int *ptr = tableau;
    while (min < max) {
        *ptr++ = min++;
    }

    return tableau;
}

int main() {
    int min = -21474836;
    int max = 214748363;

    int *resultat = ft_range(min, max);

    if (resultat != NULL) {
        for (int i = 0; i < max - min; i++) {
            printf("%d ", resultat[i]);
        }
        printf("\n");

        free(resultat);
    } else {
        printf("Erreur : min est supérieur ou égal à max, ou valeurs extrêmes des entiers.\n");
    }

    return 0;
}
