#include "binary_trees.h"

/**
 * binary_tree_nodes - A function to count the tree leaves
 * @tree: The tree to be counted
 *
 * Return: The number of leaves left
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && !tree->right))
		return (0);
	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
