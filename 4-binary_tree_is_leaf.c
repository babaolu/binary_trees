#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if or a node is a leaf or not
 * @node: Node in consideration
 *
 * Return: 1 if the node is a leaf
 * 0 if otherwise or if the node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->left || node->right)
		return (0);
	return (1);
}
