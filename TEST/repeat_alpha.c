<<<<<<< HEAD
#include <stdio.h>

void repeat_alpha(const char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int repeat_count;
            if (c >= 'a' && c <= 'z')
                repeat_count = c - 'a' + 1;
            else
                repeat_count = c - 'A' + 1;

            for (int j = 0; j < repeat_count; j++) {
                printf("%c", c);
            }
        } else {
            printf("%c", c);
        }
    }
    printf("\n");
}

int main() {
    const char *input = "Alex.";
    repeat_alpha(input);
    return 0;
}
=======
#include <unistd.h>

void    ft_putchar_n(char c, int i)
{
    while (i > 0)
    {
        write(1, &c, 1);
        --i;
    }
}

void    repeat_alpha(char *str)
{
    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar_n(*str, *str + 1 - 'a');
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar_n(*str, *str + 1 - 'A');
        else
            write(1, str, 1);
        ++str;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    
    write(1, "\n", 1);
    return (0);
}
>>>>>>> c3a1c87b31b4f193e10439f7be6e0ae7e08e4980
