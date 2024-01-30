#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal
 * @tree: Tree to traverse
 * @func: Function to access the value of each node
 *
 * Return: Void (Nothing)
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!(tree && func))
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
