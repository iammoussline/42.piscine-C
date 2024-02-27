#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
    int i = 0;
    int j, k = 0;
    char **split = NULL;

    if (!str)
        return NULL;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;

    split = (char **)malloc(sizeof(char *) * 256); // Taille initiale de split
    if (!split)
        return NULL;

    while (str[i])
    {
        j = 0;
        split[k] = (char *)malloc(sizeof(char) * 256); // Taille initiale d'un mot
        if (!split[k])
        {
            // Libérer la mémoire allouée précédemment en cas d'échec
            while (k >= 0)
                free(split[k--]);
            free(split);
            return NULL;
        }
        
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            split[k][j++] = str[i++];

        split[k][j] = '\0';

        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;

        k++;
    }

    split[k] = NULL; // Marquer la fin du tableau de chaînes de caractères
    return split;
}

int main() {
    char input[] = "Ceci est une phrase de test et je continue parce que j'ai envie";
    char **words = ft_split(input);

    if (words == NULL) {
        printf("Aucun mot trouvé.\n");
        return 1;
    }

    printf("Mots trouvés :\n");
    for (int i = 0; words[i] != NULL; i++) {
        printf("%s\n", words[i]);
        free(words[i]); // Libérer la mémoire allouée pour chaque mot
    }
    
    free(words); // Libérer la mémoire allouée pour le tableau de pointeurs

    return 0;
}
