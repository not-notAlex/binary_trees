#include "binary_trees.h"

/**
 * binary_tree_nodes - counts number of nodes with a child
 * @tree: tree to calculate
 *
 * Return: total
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_children(tree, 0));
}

/**
 * tree_children - counts number of nodes in a tree with a child
 * @tree: tree to calculate
 * @sum: current total
 * Return: total
 */
unsigned int tree_children(const binary_tree_t *tree, unsigned int sum)
{
	if (tree->left != NULL || tree->right != NULL)
		sum++;

	if (tree->left != NULL)
		sum += tree_children(tree->left, 0);

	if (tree->right != NULL)
		sum += tree_children(tree->right, 0);

	return (sum);
}
