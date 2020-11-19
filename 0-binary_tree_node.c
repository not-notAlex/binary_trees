#include "binary_trees.h"

/**
 * binary_tree_node - creates new binary tree node
 * @parent: head of tree
 * @value: value of node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->left = NULL;
	node->right = NULL;
	node->n = value;
	if (parent == NULL)
		node->parent = NULL;
	else
		node->parent = parent;

	return (node);
}
