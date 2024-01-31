#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Binary tree under consideration
 *
 * Return: Number of leaf nodes
 * 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	left = binary_tree_leaves(tree->left);
	right = binary_tree_leaves(tree->right);

	return (left + right);
}
