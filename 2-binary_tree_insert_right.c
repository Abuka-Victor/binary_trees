#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the left child
 * of another node
 * @parent: a pointer to the node to insert the left child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right;

	if (!parent)
		return (NULL);

	new_right = malloc(sizeof(binary_tree_t));
	if (!new_right)
		return (NULL);

	new_right->n = value;
	new_right->parent = parent;
	new_right->right = NULL;
	new_right->left = NULL;

	if (!parent->right)
	{
		parent->right = new_right;
		return (new_right);
	}

	new_right->right = parent->right;
	parent->right->parent = new_right;
	parent->right = new_right;
	return (new_right);
}
