#include "binary_trees.h"
/**
 * binary_tree_nodes - function counts nodes with at least 1 child
 * @tree: Pointer to the root node of the tree of interest.
 * Return: no. of nodes that are not empty
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right || tree->left)
	{
		node_count += 1;
	}
	node_count += binary_tree_nodes(tree->right);
	node_count += binary_tree_nodes(tree->left);
	return (node_count);
}
