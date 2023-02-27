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
	size_t l_height = binary_tree_height(tree->left);
	size_t r_height = binary_tree_height(tree->right);
	if (l_height >= r_height)
		return l_height + 1;
	else
		return r_height + 1;
}
