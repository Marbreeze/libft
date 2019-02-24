#include <string.h>

void ft_memdel(void **ap)
{
    if (ap && *ap) // pointer & pointer to pointer
    {
        free(*ap); //pointer
        *ap = NULL;
    }
}