#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the number of leaves on tree
 * @tree: tree to count
 *
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_leaves(tree, 0));
}

/**
 * tree_leaves - counts number of leaves on a tree
 * @tree: tree to count
 * @sum: current total
 * Return: number of leaves
 */
unsigned int tree_leaves(const binary_tree_t *tree, unsigned int sum)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL)
		sum += tree_leaves(tree->left, 0);
	if (tree->right != NULL)
		sum += tree_leaves(tree->right, 0);

	return (sum);
}
