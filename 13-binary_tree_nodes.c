#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: if tree is NULL 0 else no of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t s;

	if (!tree)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	s = 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
	return (s);
}
