#include "binary_trees.h"

/**
 * binary_height - helper func to measure height of tree
 * @tree: tree to be measured
 * Return: height of tree
 */

int binary_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);
	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: tree to be measured
 * Return: tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_height(tree->left);
	right_height = binary_height(tree->right);
	return (left_height - right_height);
}
