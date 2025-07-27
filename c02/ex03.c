#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= '0' && str[i] <= '9'))
                {
                        printf("0\n");
                        return (0);
                }
                i++;
        }

        printf("1\n");
        return (1);
}

int     main()
{
        ft_str_is_numeric("1234567890");
        ft_str_is_numeric("abc");
        ft_str_is_numeric("");
        return(0);
}
