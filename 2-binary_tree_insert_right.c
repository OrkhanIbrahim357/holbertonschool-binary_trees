#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_mode = binary_tree_node(parent, value);
	if (new_mode == NULL)
	{
		return (NULL);
	}
	new_node->right = parent->right;
	if (parent->right != NULL)
	{
		parent->right->parent = new_mode;
	}
	parent->right = new_mode;

	return (new_mode);
}
