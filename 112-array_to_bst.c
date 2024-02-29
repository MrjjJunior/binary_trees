#include "binary_trees.h"
/**
 * array_to_bst - builds a binary search tree from an array.
 * @array: pointer to the first value of thr array to be converted
 * @size: the number of values in array.
 *
 * Return: pointer to the root node f the created bst, else NULL
 */
bst_t *array_to_bst(int *array, size_t size)
{

	bst_t *tree = NULL;
	size_t i, j;

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (array[j] == array[i])
				break;
		}
		if (j == i)	
		{
			if (bst_insert(&tree, array[i]) == NULL)
				return (NULL);
		}
	}
	return (tree);
}
