#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree.
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = b_tree_height(tree);
	size_t nodes = binary_tree_size(tree);

	/* Calculate the number of nodes in a perfect binary tree */
	size_t perfect_nodes = (1 << height) - 1;

	/* Check if the tree is perfect */
	return (nodes == perfect_nodes);
}
