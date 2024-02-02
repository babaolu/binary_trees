#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Tree on which to perform rotation
 *
 * Return: Pointer to new root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	tree->parent = tree->right;
	if (tree->parent)
	{
		tree->right = (tree->parent)->left;
		(tree->parent)->left = tree;
	}
	if (tree->right)
		(tree->right)->parent = tree;
	return (tree->parent);
}
