#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Binary tree under consideration
 *
 * Return: Measured height
 * 0 if tree has only one node or if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Binary tree under consideration
 *
 * Return: Measured height
 * 0 if tree has only one node or if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right) ? left + 1 : right + 1);
}
