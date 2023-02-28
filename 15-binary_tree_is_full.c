#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: being a pointer to the root node of the tree to check.
 * Return: 1 if tree is full or 0 if otherwise or tree is NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* if a tree or a node is NULL */
	if (tree == NULL)
		return (0);

	/* if it is a leaf node returns 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/**
	 * if it is a subtree,
	 * the return value will hence be determined by
	 * both of the child child nodes.
	 */
	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
