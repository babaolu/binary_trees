#include "binary_trees.h"

/**
 * binary_tree_is_full - Determines if tree is a full binary tree
 * @tree: Tree under consideration
 *
 * Return: 1 if tree is a full binary tree
 * 0 if otherwise or if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!(tree->left || tree->right))
		return (1);
	if (!binary_tree_is_full(tree->left))
		return (0);
	if (!binary_tree_is_full(tree->right))
		return (0);
	return (1);
}
