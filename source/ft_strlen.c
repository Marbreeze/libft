int ft_strlen(char  *str)
{
    int i = 0;

     while(str[i])
     {
        i++;
     }
        return (i);
}

int main()
{  
    char str[] = "Marina";
    int a;
    a = ft_strlen(str);
    printf("%d\n",a);
    return (0);
}