#include "binary_trees.h"

/**
 * binary_tree_balance -  function measures balance factor of a binary tree.
 * @tree: tree.
 * Return: balance of binary tree.
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - height of binary tree
 * @tree: tree.
 * Return: height of binary.
 *
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	size_t l = binary_tree_height(tree->left);
	size_t r = binary_tree_height(tree->right);

	return ((l > r) ? l + 1 : r + 1);
}
