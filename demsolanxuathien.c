#include <stdio.h>
#include <ctype.h>
#include <string.h>


int main() {
    char s[100];
    printf("Enter s: ");
    fgets(s, sizeof(s), stdin);

    printf("OUTPUT:\n");
    printf("%d\n", count_words_starting_with_a(s));

    return 0;
}


int count_words_starting_with_a(char *s) {
    int count = 0;
    int i = 0;
    int word_start = 1;

    for (i = 0; i< (int)strlen(s); i++) {
        if (s[i] == ' ') {
            word_start = 1;
        } else if (word_start) {
            if (tolower(s[i]) == 'a') {
                count++;
            }
            word_start = 0;
        }
    }

    return count;
}


