#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @node: pointer to the sub_tree to measure the height
 * Return: returns the height or 0 if sub_tree is NULL
 **/
int height(const binary_tree_t *node)
{
	int leftHeight, rightHeight;

	if (node == NULL)
		return (0);
	leftHeight = height(node->left);
	rightHeight = height(node->right);
	return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: being a pointer to the root node of the tree to meansure
 * its balance factor.
 * Return: balance factor or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftHeight, rightHeight;

	if (tree == NULL)
		return (0);

	leftHeight = height(tree->left);
	rightHeight = height(tree->right);
	return (leftHeight - rightHeight);
}
