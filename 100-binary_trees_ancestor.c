#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: pointer to the first node
* @second: pointer to the second node
* Return: pointer to the lowest anscestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *first_a, *second_a;

	if (first == NULL || second == NULL)
	{
		return (NULL);
	}
	if (first == second)
	{
		return ((binary_tree_t *)first);
	}

	second_a = second->parent;
	first_a = first->parent;
	if (first_a == NULL || first == second_a || (second_a && !first_a->parent))
	{
		return (binary_trees_ancestor(first, second_a));
	}
	else if (second_a == NULL || first_a == second
	|| (first_a && !second_a->parent))
	{
		return (binary_trees_ancestor(first_a, second));
	}
	return (binary_trees_ancestor(first_a, second_a));
}
