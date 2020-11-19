#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node on left side
 * @parent: parent of tree
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

	if (parent->left == NULL)
		parent->left = node;
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		parent->left = node;
	}

	return (node);
}
