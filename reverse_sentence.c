//Mustafa Kuyumcu


#include <stdio.h>

#define MAX_VALUE 100

int main(void) {

    char a, * s, * k,
        terminating_character,
        words[MAX_VALUE] = { 0 };

    printf("Enter a sentence: ");
    for (s = words; (a = getchar()) != '\n' && s < words + MAX_VALUE; s++) {
        if (a == '.' || a == '!' || a == '?') {

            terminating_character = a;
            break;
        }
        *s = a;
    }

    printf("Reversal of sentence: ");
    while (s >= words) {

        while (*--s != ' ' && s != words)
            ;
        k = s == words ? words : s + 1;

        while (*k != ' ' && *k != '\0')
            putchar(*k++);

        if (s >= words)
            putchar(' ');
    }

    printf("\b%c\n", terminating_character);

    return 0;
}
