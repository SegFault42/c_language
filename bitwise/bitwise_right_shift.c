#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int oct;
	int div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			printf("1");
			oct = oct % div;
		}
		else
		{
			printf("0");
		}
		div = div / 2;
	}
	printf("\n");
}

int	main()
{
	unsigned char	a = 236;
	char	*binary = calloc(1, 9);

	printf("a = %d\n", a);
	printf("Avant operation:\n");

	printf("a = ");
	print_bits(a);

	a >>= 3;
	printf("Apres operation:\n");
	printf("a = ");
	print_bits(a);
}
