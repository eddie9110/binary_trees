#include "binary_trees.h"

/**
 * binary_tree_leaves - function counts the no.
 * of leaves in a binary tree.
 * @tree: Pointer to the root node of the tree of interest
 * Return: Number of leaves in the tree/0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rght_leaves, lft_leaves;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right == NULL && tree->left == NULL)
	{
		return (1);
	}
	rght_leaves = binary_tree_leaves(tree->right);
	lft_leaves = binary_tree_leaves(tree->left);
	return (rght_leaves + lft_leaves);
}
