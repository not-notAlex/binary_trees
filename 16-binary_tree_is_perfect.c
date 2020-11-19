#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if true, 0 otheriwse
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = find_depth(tree);

	return (tree_perfect(tree, d, 0));
}

/**
 * find_depth - finds max depth of tree
 * @tree: root
 *
 * Return: depth
 */
int find_depth(const binary_tree_t *tree)
{
	int d = 0;

	while (tree)
	{
		d++;
		tree = tree->left;
	}

	return (d);
}

/**
 * tree_perfect - calculates if tree is perfect
 * @tree: tree to check
 * @d: depth
 * @level: current level of the tree
 * Return: 1 if true, 0 otherwise
 */
int tree_perfect(const binary_tree_t *tree, int d, int level)
{
	int l, r;

	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (d == level + 1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	l = tree_perfect(tree->left, d, level + 1);
	r = tree_perfect(tree->right, d, level + 1);

	return (l && r);
}
