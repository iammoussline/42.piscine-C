#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max) {
    if (min >= max) {
        *range = NULL;
        return 0;
    }

    int taille = max - min;
    *range = (int*)malloc(taille * sizeof(int));
    if (*range == NULL) {
        return -1;
    }

    for (int i = 0; i < taille; ++i) {
        (*range)[i] = min + i;
    }

    return taille;
}