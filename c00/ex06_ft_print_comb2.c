#include <unistd.h>

void write_number(int n) 
{
    char digits[2];

    digits[0] = '0' + (n / 10);
    digits[1] = '0' + (n % 10);

    write(1, digits, 2);
}

void write_comb(int a, int b, int last) 
{
    write_number(a);
    write(1, " ", 1);
    write_number(b);
    if (!last)
        write(1, ", ", 2);
}

void ft_print_comb2(void) 
{
    for (int a = 0; a <= 98; a++) 
    {
        for (int b = a + 1; b <= 99; b++) 
        {
            int last = (a == 98 && b == 99);
            write_comb(a, b, last);
        }
    }
}

int main(void) {
    ft_print_comb2();
    return 0;
}
