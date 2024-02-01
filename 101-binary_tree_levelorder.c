#include "binary_trees.h"

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order traversal
 * @tree: Binary tree to traverse
 * @func: Function pointer used to access a node
 *
 * Return: Void (Nothing)
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, iter;

	if (!tree)
		return;
	height = binary_tree_height(tree);
	for (iter = 0; iter < height; iter++)
	{
		access_level(tree, iter, func);
	}
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
 * access_level - Access all nodes at a specified level in a binary tree
 * @tree: Tree to access levels from
 * @level: Level to access
 * @func: Function pointer used to access node
 *
 * Return: Void (Nothing)
 */
void access_level(const binary_tree_t *tree, size_t level, void (*func)(int))
{
	if (!tree)
		return;
	if (!level)
	{
		func(tree->n);
		return;
	}
	level--;
	access_level(tree->left, level, func);
	access_level(tree->right, level, func);
}
