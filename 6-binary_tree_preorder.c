#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using preorder traversal
 * @tree: Tree to traverse
 * @func: Function to access the value of each node
 *
 * Return: Void (Nothing)
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
