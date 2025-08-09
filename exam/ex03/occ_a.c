#include <stdio.h>

int occ_a(char *str)
{
  int i = 0;
  int nb = 0;
  
  while (str[i] != '\0')
  {
    if (str[i] == 'A')
    {
      nb++;
    }
    i++;
  }
  return(nb);
}

int main(void)
{
char *str = "pirnt a e A A";
printf("%d", occ_a(str));
return (0);
}