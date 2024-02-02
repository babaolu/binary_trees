#include "binary_trees.h"

/**
 * binary_tree_is_complete - Determines if tree is a complete binary tree
 * @tree: Tree under consideration
 *
 * Return: 1 if treee is a complete binary tree
 * 0 if otherwise or if tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (reach_leaves(tree, binary_tree_height(tree)));
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

/**
 * reach_leaves - Reaches leaves of a binary tree checking for completeness
 * @tree: Binary tree under consideration
 * @height: Height of the tree
 *
 * Return: Number of leaf nodes
 * 0 if tree is NULL
 */
size_t reach_leaves(const binary_tree_t *tree, size_t height)
{
	static int state;
	size_t left = 0, right = 0;

	if (!tree)
	{
		if (!height)
		{
			if (state)
			{
				state = 0;
				return (0);
			}
			return (1);
		}
		if (height > 1)
			return (0);
		state = 1;
		return (1);
	}
	height--;
	left = reach_leaves(tree->left, height);
	if (!left)
		return (0);
	right = reach_leaves(tree->right, height);
	if (!right)
		return (0);
	return (1);
}
