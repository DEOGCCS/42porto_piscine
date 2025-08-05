#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	last;

	if (argc > 1)
	{
		i = argc;
		while (i > 1)
		{
			i--;
			last = 0;
			while (argv[i][last] != '\0')
			{
				write (1, &argv[i][last], 1);
				last++;
			}
			write (1, "\n", 1);
		}
	}
	return (0);
}
