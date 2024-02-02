#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Tree on which to perform rotation
 *
 * Return: Pointer to new root
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	if (!tree)
		return (NULL);
	tree->parent = tree->left;
	if (tree->parent)
	{
		tree->left = (tree->parent)->right;
		(tree->parent)->right = tree;
	}
	if (tree->left)
		(tree->left)->parent = tree;
	return (tree->parent);
}
