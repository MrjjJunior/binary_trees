#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a node in the binary tree
 * @tree: pointer to the node to measure depth.
 *
 * Return: 0 if tree == NULL esle return the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
