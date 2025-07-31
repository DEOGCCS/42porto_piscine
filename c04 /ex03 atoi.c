#include <stdio.h>
  
int	ft_atoi(char *str)
{
	int	i;
	int count_n;
	int sinal = 1;
	int number = 0;

	i = 0;
	count_n = 0;
	while (str[i])
	{
		while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13 ))
			i++;
		while (str[i] == '-')
		{
			count_n++;
			if (str[i] == '+')
				i++;
			i++;
		}
		if(count_n % 2 != 0)
			sinal = -1;
		if((str[i] >= '0') && (str[i] <= '9'))
			number = (number * 10) + (str[i] - '0');
		i++;
	}
	return(sinal*number);
}

int	main(void)
{
	// Testes básicos
	printf("Resultado 1: %d\n", ft_atoi("42"));           // Esperado: 42
	printf("Resultado 2: %d\n", ft_atoi("   123"));       // Esperado: 123
	printf("Resultado 3: %d\n", ft_atoi("-42"));          // Esperado: -42
	printf("Resultado 4: %d\n", ft_atoi("--42"));         // Esperado: 42 (2 sinais negativos = positivo)
	printf("Resultado 5: %d\n", ft_atoi("+-42"));         // Esperado: 0 ou comportamento indefinido
	printf("Resultado 6: %d\n", ft_atoi("  -00123abc"));  // Esperado: -123
	printf("Resultado 7: %d\n", ft_atoi("   +42"));       // Esperado: 42
	printf("Resultado 8: %d\n", ft_atoi("  ---+--+123")); // Esperado: -123 (3 sinais negativos = ímpar = negativo)
	printf("Resultado 9: %d\n", ft_atoi("abc"));          // Esperado: 0

	return 0;
}
