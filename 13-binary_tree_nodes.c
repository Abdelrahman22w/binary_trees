#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child
* @tree: pointer to the root node of the tree
* Return: number of node that have at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->right || tree->left)
	{
		nodes += 1;
	}
	nodes += binary_tree_nodes(tree->right);
	nodes += binary_tree_nodes(tree->left);
	return (nodes);
}
