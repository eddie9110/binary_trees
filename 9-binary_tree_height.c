#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root of the tree of interest
 * Return: height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t node_rght = 0, node_lft = 0;

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
