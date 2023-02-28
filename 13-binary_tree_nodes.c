#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in
 * a binary tree.
 * @tree: being a pointer to the root node of the tree to
 * count the number of nodes. if tree is NULL the function
 * must return 0. A NULL pointer is not regarded as a node.
 * Return: total number of nodes present in the tree.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	return (0);
}
