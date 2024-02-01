#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Node whose sibling to find
 *
 * Return: Pointer to sibling
 * NULL if is NULL or if node has no parent or has no sibling
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	if (!node->parent)
		return (NULL);
	if ((node->parent)->left == node)
		return ((node->parent)->right);
	return ((node->parent)->left);
}
