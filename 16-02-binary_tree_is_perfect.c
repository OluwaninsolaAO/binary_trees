#include "binary_trees.h"

/**
 * tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: return 0 if tree is NULL, else returns the number of
 * nodes in the tree
 */
size_t tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (tree_size(tree->left) + 1 + tree_size(tree->right));
}
/**
 * tree_height - measures the height of a binary tree
 * @node: pointer to the sub_tree to measure the height
 * Return: returns the height or 0 if sub_tree is NULL
 **/
int tree_height(const binary_tree_t *node)
{
	int leftHeight, rightHeight;

	if (node == NULL)
		return (0);

	leftHeight = tree_height(node->left);
	rightHeight = tree_height(node->right);

	return (1 + (leftHeight > rightHeight ? leftHeight : rightHeight));
}
/**
 * power - custome powerer function
 * @base: base number
 * @super: superscript
 * Return: result
 */
int power(int base, int super)
{
	int result = base;

	if (super == 0)
		return (1);
	while (super != 1)
	{
		result = result * base;
		super--;
	}
	return (result);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: being a pointer to the root node of the tree to check
 * Return: 1 if perfect, or 0 if otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size;

	/* if tree is NULL or node is a leaf node */
	if (tree == NULL)
		return (0);
	height = tree_height(tree);
	size = (int) tree_size(tree);

	if (power(2, height) - 1 == size)
		return (1);
	return (0);
}
