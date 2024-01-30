#include "binary_trees.h"

/**
 * binary_tree_insert_right - Creates a node and insert to the right of parent
 * @parent: The parent node the new node will inherit
 * @value: The value the node will carry
 *
 * Return: Pointer to the newly created node of successful
 * NULL if failue
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (NULL);
	new_node->right = parent->right;
	parent->right = new_node;
	new_node->parent = parent;
	if (new_node->right)
		(new_node->right)->parent = new_node;
	new_node->n = value;
	new_node->right = NULL;

	return (new_node);
}
