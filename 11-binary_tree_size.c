#include "binary_trees.h"

/**
 * binary_tree_size - A function to count the tree size
 * @tree: The tree to be counted
 *
 * Return: The size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
