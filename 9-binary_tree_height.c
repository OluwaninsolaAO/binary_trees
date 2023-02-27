#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns the height or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		return (1 + binary_tree_height(tree->left));
	else if (tree->right != NULL)
		return (1 + binary_tree_height(tree->right));
	return (0);
}
