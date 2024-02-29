#include "binary_trees.h"
/**
 * binary_tree_size - Measures the size of the binary tree
 * @tree: Pointer to the root node of the tree to neaseure the size of.
 *
 * Return: The size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);	
}
