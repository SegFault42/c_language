#include "stdio.h"
#include "stdlib.h"

typedef struct	s_struct
{
	size_t		var_a;
	size_t		var_b;
	int			var_c;
	int			var_d;
}				t_struct;

int	main()
{
	t_struct	*alloc = (t_struct *)malloc(sizeof(t_struct) * 100);

	if (alloc == NULL)
	{
		dprintf(2, "Memory allocation failure !\n");
		return (EXIT_FAILURE);
	}
	printf("%zu\n", sizeof(t_struct));
	alloc->var_a = 1000;
	printf("Addresse alloc (before incrementation) = %p\n", alloc);
	alloc ++;
	alloc->var_a = 2000;
	printf("Addresse alloc (after incrementation)  = %p\n", alloc);
	alloc--;
	printf("Value of alloc->var_a (before incrementation)   = %zu\n", alloc->var_a);
	alloc++;
	printf("Value of alloc->var_a (after incrementation)    = %zu\n", alloc->var_a);
}
