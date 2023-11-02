#include "binary_trees.h"

/**
 * binary_tree_is_full - ftn to check if a binary tree is full
 * @tree: pointer to the root node of the tree of interest
 * Return: 1/0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int rght_check, lft_check = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
	{
		lft_check = binary_tree_is_full(tree->left);
		rght_check =  binary_tree_is_full(tree->right);
	}
	if (lft_check == 0 || rght_check == 0)
		return (0);

	return (1);
}
