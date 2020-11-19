#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of tree
 * @tree: tree to calculate
 *
 * Return: total balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left, 0);
	right_height = tree_height(tree->right, 0);

	return (left_height - right_height);
}

/**
 * tree_height - calculates height of tree
 * @tree: tree to calculate
 * @sum: current sum
 * Return: height of tree
 */
int tree_height(const binary_tree_t *tree, int sum)
{
	int left = 0, right = 0;

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		left = tree_height(tree->left, 0);
	if (tree->right != NULL)
		right = tree_height(tree->right, 0);

	if (left > right)
		sum += left;
	else
		sum += right;

	return (sum);
}
