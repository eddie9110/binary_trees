#include "binary_trees.h"

/**
 * binary_tree_size - function to calculate the size
 * of a binary tree
 * @tree: pointer to the parent node
 * Return: no. of nodes in binary tree/NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_left, node_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right)
		node_right = binary_tree_size(tree->right);

	if (tree->left)
		node_left = binary_tree_size(tree->left);
	return (node_left + node_right + 1);
}
