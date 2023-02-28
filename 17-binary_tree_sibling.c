#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node.
 * @node: being a pointer to the node to find the sibling.
 * Return: pointer to the sibling node or NULL if node is NULL,
 * parent is NULL or node has no sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);
	else if (node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
