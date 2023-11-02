#include "binary_trees.h"

/**
 * binary_tree_preorder - function conducts pre-order traversal in binary tree
 * @tree: ptr to root node of tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
