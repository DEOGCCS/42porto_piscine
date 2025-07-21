#include <unistd.h>

void    ft_print_comb(void);

int     array(int n)
{
        char numb[5];
        
        numb[0] = '0' + (n / 100);
        numb[1] = '0' + (n / 10 % 10);
        numb[2] = '0' + (n % 10);
        numb[3] = ',';
        numb[4] = ' ';
        
        write(1, numb, 5);
}
    
int     main(void) 
{
        for(int c = 0; c <= 789; c++)
        {
                        int a = c / 100;
                        int b = ( c / 10) % 10;
                        int d = c % 10;
        
                        if(a != b && a != d && b != d)
                        {
                                        array(c);
                        }
        }
                return (0);
}
