#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node of the tree to measure depth
 *
 * Return: (size_t) - Depth of the node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current = tree;

	if (tree == NULL)
	{
		return (0);
	}

	while (current->parent != NULL)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
