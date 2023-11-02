#include "binary_trees.h"
#include "11-binary_tree_size.c"

/**
 * is_complete - Checks if a tree is complete or not
 * @root: Pointer to root of the tree
 * @index: Index of the node been checked
 * @num: number of trees nod
 * Return: 1 if the tree is a heap, 0 otherwise
 */

int is_complete (const binary_tree_t *tree, int index, int num)
{
	if (tree == NULL)
	{
		return (1);
	}
	if (index >= num)
	{
		return (0);
	}
	return (is_complete(tree->left, index * 2 + 1, num) &&
		is_complete(tree->right, index * 2 + 2, num));
}

/**
* binary_tree_is_complete - checks if a binary tree is complete
* @tree: pointer to the root node of the tree to check
* Return: 1 if tree complete 0 if not
*/

int binary_tree_is_complete(const binary_tree_t *tree)
{
	int size;

	if (tree == NULL)
	{
		return(0);
	}
	size = binary_tree_size(tree);
	return (is_complete(tree, 0, size));
}
