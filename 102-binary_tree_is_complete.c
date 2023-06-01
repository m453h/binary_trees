#include "binary_trees.h"

/**
 * is_complete - checks completeness of binary tree recursively
 * @tree: pointer to the current node
 * @idx: index of the current node in the tree
 * @count: total number of nodes in the tree
 *
 * Return: 1 IF the tree is complete, ELSE 0
 */
int is_complete(const binary_tree_t *tree, int idx, int count)
{
	int left, right;

	if (tree == NULL)
		return (1);

	if (idx >= count)
		return (0);

	left = is_complete(tree->left, 2 * idx + 1, count);
	right = is_complete(tree->right, 2 * idx + 2, count);

	return (left && right);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of the tree to measure the size
 *
 * Return: (size_t) - size of the binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, left_size = 0, right_size = 0;

	if (tree == NULL)
	{
		return (0);
	}

	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	size = left_size + right_size + 1;

	return (size);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check for completeness
 *
 * Return: (int) - 1 IF the tree is complete, ELSE 0
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete(tree, 0, binary_tree_size(tree)));
}
