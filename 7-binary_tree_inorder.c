#include "binary_trees.h"

/**
 * binary_tree_inorder
 * @tree: tree to traverse
 * @func: function to perform on each node
 * Return: no return
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, func);
}
