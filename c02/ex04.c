#include <stdio.h>

int     ft_str_is_lowercase(char *str)
{
        int     i;

        i = 0;
        while (str[i])
        {
                if (!(str[i] >= 'a' && str[i] <= 'z'))
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
        ft_str_is_lowercase("asdf");
        ft_str_is_lowercase("ASF");
        ft_str_is_lowercase("124");
        ft_str_is_lowercase("");
        return(0);
}
