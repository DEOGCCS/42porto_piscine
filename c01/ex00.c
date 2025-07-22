#include <unistd.h>

void    ft_ft(int *nbr)
{       
        int     a = 42;
        nbr = &a;
        write (1, &nbr, 2);
}

int     main(void)
{       
        ft_ft();
        return (0);
}
