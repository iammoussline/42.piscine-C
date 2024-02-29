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
