#include "binary_trees.h"

/**
 * binary_tree_preorder
 * @tree: tree to traverse
 * @func: function to perform on each node
 * Return: no return
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, func);
	if (tree->right != NULL)
		binary_tree_preorder(tree->right, func);
}
