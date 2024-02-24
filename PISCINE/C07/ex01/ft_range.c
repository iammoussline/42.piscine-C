#include <stdlib.h>
#include <limits.h>

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