#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - Utility function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree
 * @min: Minimum value allowed for the current node
 * @max: Maximum value allowed for the current node
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int is_bst(const binary_tree_t *tree, int min, int max)
{
	int n;

	if (tree == NULL)
		return (1);

	n = tree->n;

	if (n <= min || n >= max)
		return (0);

	return (is_bst(tree->left, min, n) && is_bst(tree->right, n, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: Pointer to the root node of the tree
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst(tree, INT_MIN, INT_MAX));
}
