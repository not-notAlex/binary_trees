#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node on right side
 * @parent: parent of tree
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->left = NULL;
	node->right = NULL;
	node->n = value;
	node->parent = parent;

	if (parent->right == NULL)
		parent->right = node;
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
	}

	return (node);
}
