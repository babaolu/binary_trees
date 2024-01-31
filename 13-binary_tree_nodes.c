#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the number of non-leaf nodes in a binary tree
 * @tree: Binary tree under consideration
 *
 * Return: Number of leaf nodes
 * 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0, val = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		val = 1;
	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);

	return (left + right + val);
}
