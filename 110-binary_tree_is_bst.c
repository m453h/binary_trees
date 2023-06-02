#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst - checks if a binary tree is a valid BST
 * @tree: pointer to the root node of the tree
 * @min: minimum value allowed for the current node
 * @max: maximum value allowed for the current node
 * Return: (int) 1 IF tree is a valid BST, ELSE 0
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
 * Return: (int) 1 IF tree is a valid BST, ELSE 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	return (is_bst(tree, INT_MIN, INT_MAX));
}
