#include "binary_trees.h"
/**
 * binary_tree_preorder - function that goes through a binary tree.
 * @tree :  is a pointer to the root.
 * @func : is a pointer to a function.
 * Return : nothing.
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree | !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
