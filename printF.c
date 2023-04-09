#include <stdio.h>
#include <stdarg.h>

void my_printf(char *format, ...)
{
    va_list args;
    va_start(args, format);

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'd': {
                    int num = va_arg(args, int);
                    printf("%d", num);
                    break;
                }
                case 'f': {
                    double num = va_arg(args, double);
                    printf("%f", num);
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char *);
                    printf("%s", str);
                    break;
                }
                default: {
                    printf("Invalid format specifier");
                    break;
                }
            }
        } else {
            printf("%c", *format);
        }
        format++;
    }

    va_end(args);
}

int main()
{
    int a = 10;
    double b = 3.14159;
    char *c = "Hello, World!";

    my_printf("a = %d\n", a);
    my_printf("b = %f\n", b);
    my_printf("c = %s\n", c);

    return 0;
}

