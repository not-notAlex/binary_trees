#include "binary_trees.h"

/**
 * binary_tree_size - measures size of the tree
 * @tree: tree to calculate
 *
 * Return: the total
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (tree_total(tree, 0));
}

/**
 * tree_total - total nodes in a tree
 * @tree: tree to claculate
 * @sum: current sum
 * Return: the sum
 */
unsigned int tree_total(const binary_tree_t *tree, unsigned int sum)
{
	if (tree->left != NULL)
		sum += tree_total(tree->left, 0);
	if (tree->right != NULL)
		sum += tree_total(tree->right, 0);

	return (sum + 1);
}
