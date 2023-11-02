#include "binary_trees.h"

/**
 * binary_tree_height - function calculates height of a binary tree.
 * @tree: Pointer to the root node of the tree of interest
 * Return: Height of the tree/0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_count;
	size_t left_count;

	if (tree == NULL)
	{
		return (0);
	}
	right_count = binary_tree_height(tree->right);
	left_count = binary_tree_height(tree->left);
	if (right_count > left_count)
	{
		return (right_count + 1);
	}
	return (left_count + 1);
}

size_t binary_tree_height(const binary_tree_t *tree);
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
