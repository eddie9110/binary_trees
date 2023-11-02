#include "binary_trees.h"

/**
 * binary_tree_is_root - function checks if a node is a root of binary tree
 * @node: pointer to the node of interest
 * Return: 0/1
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
