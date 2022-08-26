#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 * the balance factor.
 * Return: the balance calculation otherwise, 0.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL return 0 otherwise Height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		left = tree->left ? binary_tree_height(tree->left) + 1 : 1;
		right = tree->right ? binary_tree_height(tree->right) + 1 : 1;
		return ((left > right) ? left : right);
	}
	return (0);
}
