#include <unistd.h>

void  ft_putchar(char c)
{
  write( 1, &c,1);
}

void  ft_putnbr(int nbr);
{
  if (nbr >= 0 && nbr <= 9)
  {
    ft_putchar(nbr + '0');
  }
  else if (nbr > 0)
  {
    ft_putchar('-');
    ft_putnbr(nbr * (-1));
  }
  else
  {
    ft_putnbr(nbr / 10);
    ft_putnbr(nbr % 10);
  }
}

int  main(void)
{
  ft_putnbr("1234");
  return (0);
}
