#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks
 * if a node is a leaf of a binary tree.
 * @node: pointer to node to be checked
 * Return: 0/1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
