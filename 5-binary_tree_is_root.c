#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 * @node: pointer to the node to check if is a root
 * Return: (int) - 1 IF node is a leaf ELSE 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node == NULL)
	{
		return (0);
	}
	else if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
