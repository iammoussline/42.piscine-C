#include <unistd.h>

void ft_putchar(char c) 
{
    write(1, &c, 1);
}

int compare_ascii(const char *str1, const char *str2) 
{
    while (*str1 && *str2) {
        if (*str1 != *str2) {
            return (*str1 - *str2);
        }
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}
void swap(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}
void bubble_sort(char **arr, int size) {
    int i, j;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (compare_ascii(arr[j], arr[j + 1]) > 0) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
int main(int argc, char **argv) 
{
    bubble_sort(argv + 1, argc - 1);
    for (int i = 1; i < argc; i++) 
    {
        int o = 0;
        while (argv[i][o] != '\0')
        {
            ft_putchar(argv[i][o]);
            o++;
        }
        ft_putchar('\n');
    }

    return (0);
}
