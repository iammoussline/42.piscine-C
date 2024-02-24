#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *result = malloc(1);
        if (result == NULL) {
            perror("Erreur d'allocation mémoire");
            return NULL;
        }
        result[0] = '\0';
        return result;
    }

    int longueurTotale = 0;
    for (int i = 0; i < size; ++i) {
        longueurTotale += strlen(strs[i]);
    }
    longueurTotale += (size - 1) * strlen(sep);

    char *result = malloc(longueurTotale + 1);
    if (result == NULL) {
        perror("Erreur d'allocation mémoire");
        return NULL;
    }

    result[0] = '\0';

    for (int i = 0; i < size; ++i) {
        strcat(result, strs[i]);
        if (i < size - 1) {
            strcat(result, sep);
        }
    }

    return result;
}

int main() {
    char *strs[] = {"Bonjour", "monde", "!"};
    char *sep = ", ";

    char *result = ft_strjoin(3, strs, sep);
    if (result != NULL) {
        printf("%s\n", result);
        free(result);
    }

    return 0;
}
