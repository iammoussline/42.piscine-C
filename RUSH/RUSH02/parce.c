#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

#define MAX_LONGUEUR_CLE_VALEUR 256
#define MAX_ENTREES 1000

typedef struct
{
    char *cle;
    char *valeur;
} EntreeDictionnaire;

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

EntreeDictionnaire* parserFichierDict(const char *nomFichier, int *nbEntrees)
{
    int fd = open(nomFichier, O_RDONLY);
    if (fd == -1)
    {
        perror("Dict Error\n");
        return NULL;
    }

    EntreeDictionnaire *entrees = malloc(MAX_ENTREES * sizeof(EntreeDictionnaire));
    if (entrees == NULL)
    {
        perror("Dict Error\n");
        close(fd);
        return NULL;
    }

    char buffer[MAX_LONGUEUR_CLE_VALEUR];
    *nbEntrees = 0;

    ssize_t bytesRead;
    while ((*nbEntrees < MAX_ENTREES) && (bytesRead = read(fd, buffer, sizeof(buffer))) > 0)
    {
        char *delimiter = strchr(buffer, ':');
        if (delimiter != NULL)
        {
            *delimiter = '\0';
            entrees[*nbEntrees].cle = strdup(buffer);
            entrees[*nbEntrees].valeur = strdup(delimiter + 1);
            if (entrees[*nbEntrees].cle == NULL || entrees[*nbEntrees].valeur == NULL)
            {
                perror("Dict Error\n");
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

void libererDictionnaire(EntreeDictionnaire *entrees, int nbEntrees)
{
    int i = 0;
    while (i < nbEntrees)
    {
        free(entrees[i].cle);
        free(entrees[i].valeur);
        i++;
    }
    free(entrees);
}

int main()
{
    int nbEntrees;
    EntreeDictionnaire *entrees = parserFichierDict("exemple.dict", &nbEntrees);
    if (entrees == NULL)
    {
        char error_msg[] = "Dict Error\n";
        int i = 0;
        while (error_msg[i] != '\0') {
            ft_putchar(error_msg[i]);
            i++;
        }
        return 1;
    }

    int i = 0;
    char c;
    while (i < nbEntrees)
    {
        char *ptr = entrees[i].cle;
        while ((c = *ptr++) != '\0') {
            ft_putchar(c);
        }
        ft_putchar(':');
        ptr = entrees[i].valeur;
        while ((c = *ptr++) != '\0') {
            ft_putchar(c);
        }
        ft_putchar('\n');
        i++;
    }

    libererDictionnaire(entrees, nbEntrees);

    return 0;
}
