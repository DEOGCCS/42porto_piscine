#include <unistd.h>

int ft_print_comb(void)
{
    char    numb[3] <= '789';

    numb[0] = numb[0] >= '0' && numb[0] <= '7';
    numb[1] = numb[1] >= '1' && numb[0] <= '8';
    numb[2] = numb[0] >= '2' && numb[0] <= '9':

    if ( numb[0] <= '7' && numb[1] <= '8' && numb[2] <= '9')
    {
        write(1, &numb, 3);
        numb++
    }
}

int main()
{
    ft_print_comb();
    return(0);
}
