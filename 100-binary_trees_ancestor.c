#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest commpn ancestor of two nodes
 * @first: First node under consideration
 * @second: Second node under consideration
 *
 * Return: Pointer to lowest common ancestor node of first and second nodes
 * NULL if no common ancestor is found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t lfirst, lsecond;
	binary_tree_t *common;

	if (!(first && second))
		return (NULL);
	lfirst = binary_tree_depth(first);
	lsecond = binary_tree_depth(second);

	if (lfirst > lsecond)
		for (lsecond += 0; lsecond < lfirst; lsecond++)
			first = first->parent;
	else
		for (lfirst += 0; lfirst < lsecond; lfirst++)
			second = second->parent;
	while (first && second)
	{
		if (first == second)
		{
			common = (binary_tree_t *) first;
			return (common);
		}
		first = first->parent;
		second = second->parent;
	}
	return (NULL);
}

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
