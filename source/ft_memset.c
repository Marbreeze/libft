#include <stdlib.h>
void    *ft_memset(void *b, int c, size_t len)
{
    char *str; // empty string
    //""
    //"Marina"

    str = b; // b wich is a str "Marina" assigning  pointer str to pointer b
    int i = 0;

    while(len > 0 ) 
    {
        len--; 
        str[i] = (unsigned char)c; // every index  from str is assigned to new number wich has 1byte
        i++; 
    }
    return (b);
}

























