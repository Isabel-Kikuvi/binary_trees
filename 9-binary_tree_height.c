#include "binary_trees.h"

/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (!tree)
		return (-1);
	l_height = 1 + binary_tree_height(tree->left);
	r_height = 1 + binary_tree_height(tree->right);
	return (l_height> r_height ? l_height : r_height);
}
