#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a binary tree
 * @tree: pointer to root of the tree of interest
 * Return: depth / NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	 if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	return (0);
}
