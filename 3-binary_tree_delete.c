#include "binary_trees.h"

/**
 * binary_tree_delete - A function that deletes an entire binary tree
 * @tree: The root of the binary tree
 *
 */
void binary_tree_delete(binary_tree_t *tree)
{
	binary_tree_t *keep_l;
	binary_tree_t *keep_r;

	if (!tree)
		return;

	keep_l = tree->left;
	keep_r = tree->right;
	free(tree);
	binary_tree_delete(keep_l);
	binary_tree_delete(keep_r);
}
