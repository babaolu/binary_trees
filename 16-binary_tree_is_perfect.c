#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Determines if tree is a perfect binary tree
 * @tree: Tree under consideration
 *
 * Return: 1 if tree is a perfect binary tree
 * 0 if otherwise or if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	if (!binary_tree_is_perfect(tree->left))
		return (0);
	if (!binary_tree_is_perfect(tree->right))
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left == right)
		return (1);
	return (0);
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
