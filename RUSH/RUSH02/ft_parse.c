#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "t_type.h"

char	*ft_strdup(char *src);

void ft_putchar(char c)
{
    write(STDOUT_FILENO, &c, 1);
}

t_entry_dict* parserFichierDict(const char *nomFichier, int *nbEntrees)
{
    int fd = open(nomFichier, O_RDONLY);
    if (fd == -1)
    {
        perror("Dict Error\n");
        return NULL;
    }

    t_entry_dict *entrees = malloc(256 * sizeof(t_entry_dict));
    if (entrees == NULL)
    {
        perror("Dict Error\n");
        close(fd);
        return NULL;
    }

    char buffer[4096];
    *nbEntrees = 0;

    ssize_t bytesRead;
    while ((*nbEntrees < 256) && (bytesRead = read(fd, buffer, sizeof(buffer))) > 0)
    {
        char *delimiter = strchr(buffer, ':');
        if (delimiter != NULL)
        {
            *delimiter = '\0';
            entrees[*nbEntrees].key = strdup(buffer);
            entrees[*nbEntrees].value = strdup(delimiter + 1);
            if (entrees[*nbEntrees].key == NULL || entrees[*nbEntrees].value == NULL)
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

void libererDictionnaire(t_entry_dict *entrees, int nbEntrees)
{
    int i = 0;
    while (i < nbEntrees)
    {
        free(entrees[i].key);
        free(entrees[i].value);
        i++;
    }
    free(entrees);
}


