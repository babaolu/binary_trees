#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: The parent node the new node will inherit
 * @value: The value the node will carry
 *
 * Return: Pointer to the newly created node of successful
 * NULL if failue
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(*new_node));

	if (!new_node)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
