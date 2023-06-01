#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: (binary_tree_t) Pointer to the lowest common ancestor,
 * ELSE (NULL) if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	binary_tree_t *x, *y;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	else if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	x = first->parent;
	y = second->parent;

	while (x != y)
	{
		if (x == NULL || first == y || (x->parent == NULL && y != NULL))
			return (binary_trees_ancestor(first, y));

		if (y == NULL || x == second || (y->parent == NULL && x != NULL))
			return (binary_trees_ancestor(x, second));

		return (binary_trees_ancestor(x, y));
	}

	return (x);
}
