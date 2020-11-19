#include "binary_trees.h"

/**
 * binary_tree_depth - calculates the depth of the tree
 * @tree: tree to calculate
 *
 * Return: depth of the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	unsigned int sum = 0;
	const binary_tree_t *node = tree;

	if (tree == NULL)
		return (0);

	while (node->parent)
	{
		sum++;
		node = node->parent;
	}

	return (sum);
}
