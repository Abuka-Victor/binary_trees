#include "binary_trees.h"

/**
 * count_tree_left - A function to count the tree size for left
 * @tree: The tree to be counted
 *
 * Return: The number of nodes left
 */
size_t count_tree_left(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (2 + count_tree_left(tree->left));
	return (1 + count_tree_left(tree->left));
}

/**
 * count_tree_right - A function to count the tree size for the right
 * @tree: The tree to be counted
 *
 * Return: The number of nodes right
 */
size_t count_tree_right(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + count_tree_right(tree->right));
}

/**
 * binary_tree_size - A function that measures the size of a binary tree
 * @tree: a pointer to the root node of the tree to measure the size
 *
 * Return: 0 if tree is NULL, else the size of the tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_num;
	size_t right_num;

	if (!tree)
		return (0);

	left_num = count_tree_left(tree);
	right_num = count_tree_right(tree);

	return ((left_num + right_num) - 1);
}
