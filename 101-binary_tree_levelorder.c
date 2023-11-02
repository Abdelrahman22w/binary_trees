#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
* binary_tree_levelorder - goes through a binary tree using level-order trans
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node
* Return: Nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int len;
	int height = 0;

	if (tree == NULL || func == NULL)
	{
		return;
	}
	height = binary_tree_height(tree) + 1;
	for (len = 1; len <= height; len++)
	{
		print_level_order(tree, len, func);
	}

}

/**
 * print_level_order - print each level order
 * @tree: pointer to the tree
 * @level: level of the tree
 * @func: pointer to a node to use the function
 * Return: Nothing
 */
void print_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;

	if (level == 1)
		func(tree->n);
	else
	{
		print_level_order(tree->left, level - 1, func);
		print_level_order(tree->right, level - 1, func);
	}
}
