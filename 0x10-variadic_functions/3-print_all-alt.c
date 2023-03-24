#include <stdio.h>
#include <stdarg.h>

void print_all(const char* const format, ...) {
    va_list arg_list;
    va_start(arg_list, format);
    int i = -1, len = 0;
    while (format && format[++i]) {
        if (format[i] == 'c') {
            printf("%c", va_arg(arg_list, int));
        }
        else if (format[i] == 'i') {
            printf("%d", va_arg(arg_list, int));
        }
        else if (format[i] == 'f') {
            printf("%f", va_arg(arg_list, double));
        }
        else if (format[i] == 's') {
            char *str = va_arg(arg_list, char*);
            if (str == NULL) {
                printf("(nil)");
            } else {
                printf("%s", str);
            }
        }
        if (format[i + 1] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's')) {
            printf(", ");
        }
    }
    printf("\n");
    va_end(arg_list);
}

