#include "stdio.h"
#include "stdlib.h"

int	main()
{
	char *alloc = (char *)malloc(sizeof(char) * 100);
	if (alloc == NULL)
	{
		dprintf(2, "Memory allocation failure !\n");
		return (EXIT_FAILURE);
	}
	alloc[0] = 'a';
	printf("Addresse alloc (before incrementation) = %p\n", alloc);
	alloc += 10;
	alloc[0] = 'b';
	printf("Addresse alloc (after incrementation)  = %p\n", alloc);
	printf("Value of alloc[0]   = %c\n", alloc[0]);
	printf("Value og alloc[-10] = %c\n", alloc[-10]);
}
