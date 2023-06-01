#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 *
 * Return: (binary_tree_t) - IF has uncle, pointer
 * to uncle node ELSE (null)
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (node == NULL || parent == NULL || grandparent == NULL)
	{
		return (NULL);
	}

	if (grandparent->right == parent)
	{
		return (grandparent->left);
	}

	if (grandparent->left == parent)
	{
		return (grandparent->right);
	}

	return (NULL);
}
