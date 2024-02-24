#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define MAX_LONGUEUR_CLE_VALEUR 256
#define MAX_ENTREES 1000

typedef struct {
    char *cle;
    char *valeur;
} EntreeDictionnaire;

EntreeDictionnaire* parserFichierDict(const char *nomFichier, int *nbEntrees) {
    int fd = open(nomFichier, O_RDONLY);
    if (fd == -1) {
        perror("Erreur lors de l'ouverture du fichier");
        return NULL;
    }

    EntreeDictionnaire *entrees = malloc(MAX_ENTREES * sizeof(EntreeDictionnaire));
    if (entrees == NULL) {
        perror("Erreur d'allocation mémoire");
        close(fd);
        return NULL;
    }

    char buffer[MAX_LONGUEUR_CLE_VALEUR];
    *nbEntrees = 0;

    ssize_t bytesRead;
    while ((*nbEntrees < MAX_ENTREES) && (bytesRead = read(fd, buffer, sizeof(buffer))) > 0) {
        char *delimiter = strchr(buffer, ':');
        if (delimiter != NULL) {
            *delimiter = '\0';
            entrees[*nbEntrees].cle = strdup(buffer);
            entrees[*nbEntrees].valeur = strdup(delimiter + 1);
            if (entrees[*nbEntrees].cle == NULL || entrees[*nbEntrees].valeur == NULL) {
                perror("Erreur d'allocation mémoire");
                close(fd);
                free(entrees);
                return NULL;
            }
            (*nbEntrees)++;
        }
    }

    close(fd);
    return entrees;
}

void libererDictionnaire(EntreeDictionnaire *entrees, int nbEntrees) {
    for (int i = 0; i < nbEntrees; ++i) {
        free(entrees[i].cle);
        free(entrees[i].valeur);
    }
    free(entrees);
}

int main() {
    int nbEntrees;
    EntreeDictionnaire *entrees = parserFichierDict("exemple.dict", &nbEntrees);
    if (entrees == NULL) {
        printf("Échec de l'analyse du fichier.\n");
        return 1;
    }

    for (int i = 0; i < nbEntrees; ++i) {
        printf("Clé: %s, Valeur: %s\n", entrees[i].cle, entrees[i].valeur);
    }

    libererDictionnaire(entrees, nbEntrees);

    return 0;
}
