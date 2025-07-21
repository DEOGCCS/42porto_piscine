#include <unistd.h>

void	ft_print_comb(void)
{
    int        n;

    n = 0;
        
    char    numb[5];

    While (n <= 999)
    {    
        numb[0] = '0' + (n / 100);
        numb[1] = '0' + (n / 10 % 10);
        numb[2] = '0' + (n % 10);
        numb[3] = ',';
        numb[4] = ' ';

    
    while (n <=999)
    if(numb[0] < numb[1] && numb[1] < numb[2])
    {
            write(1, numb, 3);
            if(!(numb[0] == '7' && numb[1] == '8' && numb[2] == '9'))
				write(1, &numb[3], 2); // imprime ", "
	}
		n++;
	}

int main()
{
    ft_print_comb();
    return(0);
}
