#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Node whose uncle to find
 *
 * Return: Pointer to uncle
 * NULL if is NULL or if node has no parent or has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *real_node;

	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);

	real_node = node->parent;
	if (!real_node->parent)
		return (NULL);
	if ((real_node->parent)->left == real_node)
		return ((real_node->parent)->right);
	return ((real_node->parent)->left);
}
