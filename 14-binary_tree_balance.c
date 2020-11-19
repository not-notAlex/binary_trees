#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: tree to calculate
 *
 * Return: total balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = tree_height(tree->left);
	if (tree->right != NULL)
		right_height = tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * tree_height - calculates height of tree
 * @tree: tree to calculate
 * Return: height of tree
 */
int tree_height(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = tree_height(tree->left);
	right = tree_height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
