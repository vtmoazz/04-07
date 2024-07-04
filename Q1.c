#include <stdio.h>

int main() {
    int a, b, c, min, i, temp[3];
    
    scanf("%d%d%d", &temp[0], &temp[1], &temp[2]);

    min = temp[0];

    for (i = 1; i < 3; i++) {
        if (temp[i] < min) {
            min = temp[i];
        }
    }

    printf("\nOUTPUT\n%d\n", min);

    return 0;
}
