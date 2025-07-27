#include <stdio.h>

int     ft_str_is_numeric(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= '0' && str[i] <= '9'))
                {
                        return (0);
                }
                i++;
        }

        return (1);
}

int     main()
{
        printf("%d", ft_str_is_numeric("1234567890"));
        printf("%d", ft_str_is_numeric("abc"));
        printf("%d", ft_str_is_numeric(""));
        return(0);
}
