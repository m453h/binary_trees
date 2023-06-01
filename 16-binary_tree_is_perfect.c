#include "binary_trees.h"

/**
 * is_perfect_tree - Recursively checks if a tree is a perfect binary tree
 * @tree: pointer to the root node of the tree
 * Return: (int) 1 IF tree is perfect ELSE 0
 */
int is_perfect_tree(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left != NULL && tree->right != NULL)
	{
		l = 1 + is_perfect_tree(tree->left);
		r = 1 + is_perfect_tree(tree->right);

		if (l == r)
		{
			if (l != 0 && r != 0)
			{
				return (r);
			}
		}

		return (0);
	}
	else if (tree->left != NULL || tree->right != NULL)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}


/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 *
 * Return: (int) - 1 IF tree is perfect ELSE 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int status = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		status = is_perfect_tree(tree);

		if (status != 0)
		{
			return (1);
		}
		return (0);
	}
}
