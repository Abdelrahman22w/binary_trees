#include "binary_trees.h"

/**
 * b_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: If tree is NULL 0, otherwise the height of the tree
 */
size_t b_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = b_tree_height(tree->left);
	right_height = b_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the tree
 * Return: If tree is NULL 0, otherwise the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = b_tree_height(tree->left);
	right_height = b_tree_height(tree->right);

	return (left_height - right_height);
}
