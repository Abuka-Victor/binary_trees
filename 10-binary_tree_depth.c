#include "binary_trees.h"

/**
 * count_tree_parent - counts the number of levels in the tree
 * @tree: the pointer to the node
 *
 * Return: number of levels
 */
size_t count_tree_parent(const binary_tree_t *tree)
{
	if (!tree)
		return (-1);

	return (1 + count_tree_parent(tree->parent));
}


/**
 * binary_tree_depth - A function that measures the depth of a node tree
 * @tree: a pointer to the root node of the tree to measure the depth
 *
 * Return: if tree is null return 0, else return the height
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	if (!tree)
		return (0);

	depth = count_tree_parent(tree);

	return (depth);
}
