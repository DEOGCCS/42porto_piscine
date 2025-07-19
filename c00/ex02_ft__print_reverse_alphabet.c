#include <unistd.h>

void ft_print_alphabet(void);

int  main()
{
  char Z;

  Z = 'Z';
  while( Z >= 'A')
  {
  write ( 1, &Z, 1);
  Z--;
  }
}
