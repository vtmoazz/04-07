#include <stdio.h>
#include <ctype.h>
#include <string.h>

void remove_string(char s[]) {
    int i, j;
    for (i = 0, j = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || s[i] == ' ') {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char s[100];
    printf("Enter s: ");
    fgets(s, sizeof(s), stdin);

    remove_string(s);

    printf("\nOUTPUT\n");
    printf("\"%s\"\n", s);

    return 0;
}
