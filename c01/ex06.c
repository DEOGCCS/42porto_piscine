#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i] != '\0')
        {
                i++;
        }
        return (i);
}

int     main(void)
{
        char    test[] = "hello, world!";

        printf("Length: %d\n", ft_strlen(test));
        return (0);
}
