#include <stdio.h>

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
}