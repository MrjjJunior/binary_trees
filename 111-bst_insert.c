#include "binary_trees.h"
/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: Double pointer to the root node.
 * @value: a value to store in the node to be inserted
 *
 * Return: A pointer to created node, or NULL on failure.
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current, *new;

	if (tree != NULL)
	{
		current = *tree;

		if (current == NULL)
		{
			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}
		if (value < current->n)
		{
			if (current->left != NULL)
				return (bst_insert(&current->left, value));
			new = binary_tree_node(current, value);
			if (new == NULL)
				return (NULL);
			else
				return (current->right = new);
		}

	}
	return (NULL);
}
