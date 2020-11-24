#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of the tree
 * @tree: tree to calculate
 *
 * Return: height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	if (tree->left != NULL)
		lheight = binary_tree_height(tree->left);
	if (tree->right != NULL)
		rheight = binary_tree_height(tree->right);

	if (lheight > rheight)
		return (lheight + 1);
	else
		return (rheight + 1);
}
