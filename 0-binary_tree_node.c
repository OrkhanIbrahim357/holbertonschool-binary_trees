#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: a pointer to the parent node.
 * @value: value to put in the new node.
 * Return: pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
