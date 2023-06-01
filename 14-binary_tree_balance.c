#include "binary_trees.h"

/**
 * measure_binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 *
 * Return: (int) - Height of the binary tree
 */
int measure_binary_tree_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
	{
		return (0);
	}

	l = tree->left ? 1 + measure_binary_tree_height(tree->left) : 1;
	r = tree->right ? 1 + measure_binary_tree_height(tree->right) : 1;

	if (l > r)
		return (l);
	else
		return (r);

}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: (int) - the balance factor of a binary tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = measure_binary_tree_height(tree->left);
		right = measure_binary_tree_height(tree->right);
		total = left - right;
	}
	return (total);
}
