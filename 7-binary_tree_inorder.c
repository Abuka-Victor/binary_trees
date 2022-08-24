#include "binary_trees.h"

/**
 * binary_tree_inorder - A function that goes through a tree using
 * in-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 *
 * Return: Null void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t *keep_r;
	binary_tree_t *keep_l;

	if (!tree || !func)
		return;

	keep_l = tree->left;
	binary_tree_inorder(keep_l, func);
	func(tree->n);

	keep_r = tree->right;
	binary_tree_inorder(keep_r, func);
}
