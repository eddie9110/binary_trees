#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function that inserts a node
 * as the right-child of parent node
 * @parent: parent to new node
 * @value: value to be inserted in new node
 * Return: pointer to newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_T_node;

	if (parent == NULL)
		return (NULL);

	new_T_node = malloc(sizeof(binary_tree_t));

	if (!new_T_node)
		return (NULL);

	new_T_node->n = value;
	new_T_node->parent = parent;
	new_T_node->left = NULL;
	new_T_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = new_T_node;

	parent->right = new_T_node;
	return (new_T_node);
}
