#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: being a pointer to the root node of the tree to meansure
 * its balance factor.
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)	
		return (binary_tree_balance(tree->left) - binary_tree_balance(tree->right));
	else if (tree->left != NULL)
		return (1 + binary_tree_balance(tree->left));
	else if (tree->right != NULL)
		return (-1 + binary_tree_balance(tree->right));
	return (0);
}
