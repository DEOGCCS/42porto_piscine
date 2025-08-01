#include <stdio.h>

int     ft_strncmp(char *s1, char *s2, unsigned int n)
{
        unsigned int    i;

        i = 0;
        while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
        {
                if (s1[i] != s2[i])
                {
                        return (s1[i] - s2[i]);
                }
                i++;
        }
        return (0);
}

int     main(void)
{
        printf("%d\n", ft_strncmp("abc", "abd", 3));
        printf("%d\n", ft_strncmp("abd", "abc", 3));
        printf("%d\n", ft_strncmp("Hello", "Hellw", 3));
        printf("%d\n", ft_strncmp("Hello", "Hellw", 5));
        return (0);
}
