#include "binary_trees.h"

/**
 * binary_tree_sibling - ftn gets the sibiling of a node
 * @node: node of interest
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL ||
        node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}
