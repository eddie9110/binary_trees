#include "binary_trees.h"


/**
 * binary_tree_is_perfect -  ftn checks f a binary tree is perfect
 * @tree: pointer to the root of the binar tree of interest
 * Return: pointer to the new node, or NULL on failure
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{
		if (!tree->left && !tree->right)
			return (1);

		return (binary_tree_is_perfect(tree->right) &&
				binary_tree_is_perfect(tree->left));
	}
	return (0);
}

/**
 * binary_tree_balance - ftn checks if a binary tree is balanced
 * @tree: pointer to the root node of the tree of interest
 * Return: 0 - unbalanced / 1 - balanced
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int rght_h, lft_h;

	if (tree == NULL)
	{
		return (0);
	}

	rght_h = binary_tree_height(tree->right);
	lft_h = binary_tree_height(tree->left);

	return (lft_h - rght_h);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root of the tree of interest
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t node_rght, node_lft = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		node_lft = 1 + binary_tree_height(tree->left);

	if (tree->right)
		node_rght = 1 + binary_tree_height(tree->right);

	if (node_lft > node_rght)
		return (node_lft);

	return (node_rght);
}
