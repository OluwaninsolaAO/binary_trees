#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node to the right node of
 * another node, and if parent already has a right child, the
 * new node must take its place, and the old right child must
 * be set as right child of the new node.
 *
 * @parent: the pointer to the parent node.
 * @value: the value to which to insert to the new node.
 * Return: pointer to the newly created node, or NULL if failed
 * or parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	node->left = NULL;
	node->right = NULL;

	if (parent->right == NULL)
	{
		node->parent = parent;
		parent->right = node;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		parent->right = node;
		node->parent = parent;
	}

	return (node);
}
