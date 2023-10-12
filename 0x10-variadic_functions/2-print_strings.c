#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print numbers followed by a newline.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 * @...: Variable number of integer arguments.
 */
void print_numbers(const char *separator, const unsigned int n, ...) {
    va_list args;
    unsigned int i;

    va_start(args, n);

    for (i = 0; i < n; i++) {
        printf("%d", va_arg(args, int));

        if (i < n - 1 && separator != NULL)
            printf("%s", separator);
    }

    va_end(args);

    printf("\n");
}

int main() {
    print_numbers(", ", 5, 1, 2, 3, 4, 5);
    print_numbers(NULL, 3, 10, 20, 30);
    print_numbers(" - ", 4, 100, 200, 300, 400);

    return 0;
}
