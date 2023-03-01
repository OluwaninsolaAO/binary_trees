#include "binary_trees.h"

/**
 * is_full - checks if a binary tree is full
 * @tree: being a pointer to the root node of the tree to check.
 * Return: 1 if tree is full or 0 if otherwise or tree is NULL.
 */
int is_full(const binary_tree_t *tree)
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
	return (is_full(tree->left) && is_full(tree->right));
}
/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns the height or 0 if tree is NULL
 */
size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left_height = 1 + tree_height(tree->left);
	if (tree->right != NULL)
		right_height = 1 + tree_height(tree->right);
	return (left_height > right_height ? left_height : right_height);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: being a pointer to the root node of the tree to check
 * Return: 1 if perfect, or 0 if otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* if tree is NULL or node is a leaf node */
	if (tree == NULL)
		return (0);
	if (tree_height(tree->left) == tree_height(tree->right) &&
			is_full(tree))
		return (1);
	return (0);
}
