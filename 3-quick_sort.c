#include	"sort.h"

/**
	*	quick_sort	-	Sorts	an	array	using	the	Quick	Sort	algorithm.
	*	@array:	The	array	to	be	sorted.
	*	@size:	The	size	of	the	array.
	*/
void	quick_sort(int	*array,	size_t	size)
{
	if	(!array	||	size	<	2)
	return;

	quicksort_recursive(array,	0,	size	-	1,	size);
}

/**
	*	quicksort_recursive	-	Recursively	sorts	the	partitioned	array.
	*	@array:	The	array	to	be	sorted.
	*	@start:	The	start	index	of	the	partition.
	*	@end:	The	end	index	of	the	partition.
	*	@size:	The	size	of	the	array.
	*/
void	quicksort_recursive(int	*array,	int	start,	int	end,	size_t	size)
{
	if	(start	<	end)
	{
	int	pivot	=	partition(array,	start,	end,	size);

	quicksort_recursive(array,	start,	pivot	-	1,	size);
	quicksort_recursive(array,	pivot	+	1,	end,	size);
	}
}

/**
	*	partition	-	Lomuto	partition	scheme	for	Quick	Sort.
	*	@array:	The	array	to	be	partitioned.
	*	@start:	The	start	index	of	the	partition.
	*	@end:	The	end	index	of	the	partition.
	*	@size:	The	size	of	the	array.
	*	Return:	The	pivot	index.
	*/
int	partition(int	*array,	int	start,	int	end,	size_t	size)
{
	int	pivot	=	array[end];
	int	i	=	start	-	1;
	int	j;

	for	(j	=	start;	j	<=	end	-	1;	j++)
	{
	if	(array[j]	<=	pivot)
	{
	i++;
	if	(i	!=	j)
	{
	perform_swap(&array[i],	&array[j]);
	swap(array,	size);
	}
	}
	}

	if	(i	+	1	!=	end)
	{
	perform_swap(&array[i	+	1],	&array[end]);
	swap(array,	size);
	}

	return	(i	+	1);
}

/**
	*	perform_swap	-	Swaps	two	integer	values.
	*	@a:	The	first	value.
	*	@b:	The	second	value.
	*/
void	perform_swap(int	*a,	int	*b)
{
	int	tmp	=	*b;
	*b	=	*a;
	*a	=	tmp;
}

/**
	*	swap	-	Prints	the	array	after	each	swap.
	*	@array:	The	array	to	be	printed.
	*	@size:	The	size	of	the	array.
	*/
void	swap(int	*array,	size_t	size)
{
	print_array(array,	size);
}
