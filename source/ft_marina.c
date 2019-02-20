#include <stdio.h>

#include <string.h>

void *ft_memchr(const void *s, int c, size_t n)
{
   unsigned char *str = (unsigned char *)s;
 size_t ;
 int i = 0;
    while(i < n)
    {
        if (str[i] == c)
          return (&(str[i]));
        //return (&(*(str + i)));
        i++;
    }
    return (NULL);

}

int main() 
{
  unsigned char str[] = "Hakeem my best friend";
  char *a = ft_memchr(str, 109, 12);
  printf("%s\n",a);

  return 0;
}
/*
int	tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;	
	return (c); 
}

void setChar(char* str)
{
//     *charToChange = 'B';
    *str = tolower(*str);
        
}

int main()
{
        char *str = "HakEEm";
      while(*str) //value of pointer
    {
        setChar(&(*str));
        printf("%s | %c |\n",str,tolower(*str));
        str++;
    }
}*/