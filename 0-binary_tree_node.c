#include "binary_trees.h"

/**
 * binary_tree_node - Creates a new node in a binary tree.
 * @parent: a pointer to a parent node to the new node to be created.
 * @value: the value/data of the node to be created.
 * Return: a pointer to the newly created node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;

	return (node);
}
