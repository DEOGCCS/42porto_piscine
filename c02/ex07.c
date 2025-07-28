#include <stdio.h>

char *ft_strupcase(char *str)
{
  int  i;

  i = 0;
  while (str[i])
  {
      if (str[i] >= 'a' && str[i] <= 'z')
      {
        str[i] = str[i] - ('a' - 'A'); // a=97 e A=41, ex: 97-(97-41) = 97-56 = 41
      }
        i++;
  }
  return(str);
}

int  main()
{
	char src[] = "hello";

	printf("Original: %s\n", src);
	ft_strupcase(src);
	printf("Uppercase: %s\n", src);
	return (0);
}
