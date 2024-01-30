#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of node in a binary tree
 * @tree: Node in the binary tree under consideration
 *
 * Return: Measured height
 * 0 if tree is the root node or if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->parent)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
