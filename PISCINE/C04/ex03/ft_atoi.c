#include <stdio.h>

int atoi(const char *str) 
    {
    int result = 0;
    int sign = 1;
    int i = 0;
    
    while (str[i] == ' ') 
    {
        i++;
    }
    
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') 
    {
        i++;
    }
    
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    
    return sign * result;
}

int main() 
{
    const char *str = "123";
    int num = atoi(str);
    printf("Entier: %d\n", num);
    return 0;
