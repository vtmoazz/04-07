#include <stdio.h>
#include <ctype.h>

int count_non_vowel_chars(char s[]) {
    int count = 0;
    for (int i = 0; s[i]!= '\0'; i++) {
        char c = tolower(s[i]);
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            count++;
        }
    }
    return count;
}

int main() {
    char s[100];
    printf("Enter s: ");
    fgets(s, 100, stdin);
    printf("\n%s",s);


    printf("\nOUTPUT\n");
    printf("%d\n", count_non_vowel_chars(s));

    return 0;
}
