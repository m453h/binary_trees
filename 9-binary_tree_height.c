#include "binary_trees.h"

/**
 * binary_tree_postorder - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 *
 * Return: (size_t) - Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

 	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	
	if (left_height > right_height)
	{
		return (1 + left_height);
	}
	else
	{
		return (1 + right_height);
	}

}
