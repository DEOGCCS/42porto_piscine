#include <unistd.h>

void ft_print_alphabet(void);

int  main()
{
  char z;

  z = 'z';
  while( z >= 'a')
  {
  write ( 1, &z, 1);
  z--;
  }
}
