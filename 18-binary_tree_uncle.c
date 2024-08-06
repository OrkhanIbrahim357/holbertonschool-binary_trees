#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node.
 * @node: node.
 * Return: uncle of node.
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *p;
	binary_tree_t *c;

	if (!node)
		return (NULL);
	c = node->parent;
	if (!c)
		return (NULL);
	p = c->parent;
	if (!p)
		return (NULL);
	if (p->right == c && p->left)
	{
	return (p->left);
	}
	else if (p->left == c && p->right)
	{
		return (p->right);
	}
	return (NULL);

}
