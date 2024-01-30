#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if the given node is a root node or not
 * @node: Node in consideration
 *
 * Return: 1 if the node is a root node
 * 0 if otherwise or if node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent)
		return (0);
	return (1);
}
