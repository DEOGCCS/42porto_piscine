#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int     i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z'))
        {
            write ( 1, "0", 1);
            return (0);
        }
        i++;
    }
    write (1,"1",1);
    return (1);
}

int      main()
{
    char *a;
    a = "Aleluia";

    ft_str_is_alpha(a);

    return(0);
    }
