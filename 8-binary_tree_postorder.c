#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node to measure the height
 * @func: Pointer to a function to call each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
