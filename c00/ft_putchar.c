#include <unistd.h>

void   ft_putchar(char c);

int  main(void)
{
  char c;

  c = 'c';

  write(1, &c, 1);
  retorn (0);
}
