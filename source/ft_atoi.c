int ft_atoi(char *str)
{

  int res = 0;
  int sign = 1;
  int i = 0;
  

    while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(str[i] && str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + str[i] - '0';
        ++i;  
    }
return (res * sign);

}

int main() 
{
  char str[] = "     -895t4321";
  int a = ft_atoi(str);
  int b = atoi(str);
  printf("%d | %d\n",a, b);
  
}