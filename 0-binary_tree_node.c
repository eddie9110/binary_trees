#include "binary_trees.h"
/**
 * binary_tree_node -  ftn that creates a binary tree node.
 * @parent: ptr to parent node of node to be created
 * @value: value to put in the new node
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_T_node;

	new_T_node = malloc(sizeof(binary_tree_t));
	if (!new_T_node)
		return (NULL);

	new_T_node->parent = parent;
	new_T_node->n = value;
	new_T_node->left = NULL;
	new_T_node->right = NULL;

	return (new_T_node);
}
