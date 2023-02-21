#include <unistd.h>
/**
*main – print char
* loop statement
*/
int main(void) {
    char c[] = "_putchar\n";
    int i;

    for (i = 0; c[i] != '\0'; i++) {
        _putchar(c[i]);
    }

    return 0;
}
