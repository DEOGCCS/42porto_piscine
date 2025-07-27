#include <stdio.h>

int     ft_str_is_uppercase(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= 'A' && str[i] <= 'Z'))
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
        ft_str_is_uppercase("asdf");
        ft_str_is_uppercase("ASF");
        ft_str_is_uppercase("124");
        ft_str_is_uppercase("");
        return(0);
}
