#include <unistd.h>
#include <stdlib.h>

/**
  * Print a character
  * @param c The character to print
*/
void ft_putchar(char c)
{
    write(1, &c, 1);
}

/**
  * Get the length of a string
  * @param str The string to get the length
  * @return The length of the string
*/
int ft_strlen(char *str){
    int len = 0;

    while(str[len] != '\0'){
        len++;
    }

    return len;
}

/**
  * Print a string
  * @param str The string to print
*/
void ft_print(char *str){
  int maxLen = ft_strlen(str);


  for(int i = 0; i < maxLen; i++){
    ft_putchar(str[i]);
  }
}

/**
  * Reverse a string
  * @param str The string to reverse
  * @return The reversed string
*/
char *ft_reverse_char(char *str){
  int len = ft_strlen(str);

  // On alloue la memoire pour la string dest
  // La taille de la string dest est la meme que la string originale + 1 pour le caractere null
  char *dest = malloc(len + 1);

  for(int i = 0; i < len; i++){
    // Ici on parcourt la string originale a l'envers et on la met dans la string dest
    // On met le caractere dans la string dest a la position i
    dest[i] = str[len - i - 1];
  }

  // On ajoute le caractere null a la fin de la string dest
  dest[len] = '\0';

  return dest;
}

/**
  * Validate the inputs
  * @param sizeArgs The size of the arguments
  * @return 1 if the inputs are valid, 0 otherwise
*/
int ft_validate_inputs(int sizeArgs){
  if(sizeArgs <= 1){
    ft_print("Please enter a string as argument.\nUsage: ./a.out salim");
    return 0;
  }

  if(sizeArgs > 2){
    ft_print("Please enter only one argument.\nUsage: ./a.out salim");
    return 0;
  }

  return 1;
}

int main (int argc, char **argv)
{

  if(ft_validate_inputs(argc) == 0){
    return 0;
  }

  char *reversedString = ft_reverse_char(argv[1]);

  ft_print(argv[1]);
  ft_putchar(' ');
  ft_print(reversedString);

  return 0;
}