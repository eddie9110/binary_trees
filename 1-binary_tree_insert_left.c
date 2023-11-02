#include "binary_trees.h"
/**
 * binary_tree_insert_left -  ftn inserts data to the left
 * @parent: ptr to the parent node
 * @value: value
 * Return: pointer to the new node / NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_T_node;

	if (parent == NULL)
		return (NULL);

	new_T_node = malloc(sizeof(binary_tree_t));
	if (new_T_node == NULL)
		return (NULL);

	new_T_node->n = value;
	new_T_node->parent = parent;
	new_T_node->left = parent->left;
	new_T_node->right = NULL;

	if (parent->left)
		parent->left->parent = new_T_node;

	parent->left = new_T_node;
	return (new_T_node);
}
