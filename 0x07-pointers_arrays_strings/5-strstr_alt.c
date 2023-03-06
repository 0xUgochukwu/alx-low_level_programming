// Online C compiler to run C program online
#include <stdio.h>

char *_strstr(char *haystack, char *needle)
{
    char *h, *rneedle;
    while (*haystack)
    {
        if (*haystack == *needle)
        {
            h = haystack;
            
            while(*needle)
            {
                if (*h++ != *needle++)
                {
                    break;
                }
            }
            
            if (!*needle)
            {
                return haystack;
            }
            
            needle = rneedle;
            
        }
        haystack++;
    }
    
    
    return (NULL);
}

int main() {
    char *s = "hello, world";
    char *f = "world";
    char *t = _strstr(s, f);
    printf("%s\n", t);

    return 0;
}
