#include "binary_trees.h"

/**
 * height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: returns the height or 0 if tree is NULL
 */
size_t height(const binary_tree_t *tree)
{
        size_t left_height = 0, right_height = 0;

        if (tree == NULL)
                return (0);
        if (tree->left != NULL)
                left_height = 1 + height(tree->left);
        if (tree->right != NULL)
                right_height = 1 + height(tree->right);
        return (left_height > right_height ? left_height : right_height);
}
/**
 * traverse_special - traverse a given tree and apply a function
 * to all nodes in a defined level.
 * @tree: pointer to the root node of the tree to measure the height.
 * @level: being the given level to apply a given function to.
 * @func: being a pointer to a function to call on each node.
 * Return: the height of the tree for each level.
 */
size_t traverse_special(const binary_tree_t *tree,
		size_t level, void (*func)(int))
{
        size_t left_height = 0, right_height = 0;
	size_t c_level;

        if (tree == NULL)
                return (0);
        if (tree->left != NULL)
                left_height = 1 + traverse_special(tree->left,
				level, func);
        if (tree->right != NULL)
                right_height = 1 + traverse_special(tree->right,
				level, func);
        c_level = left_height > right_height ? left_height : right_height;
	if (c_level == level)
		func(tree->n);
	return (c_level);
}
/**
 * binary_tree_levelorder - goes through a binary tree using
 * level-order traversal.
 * @tree: being a pointer to the root of the tree to traverse.
 * @func: being a pointer to a function to call for each node.
 * The value of the node must be passed into this function.
 * if tree or func is NULL do nothing.
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t tree_height;
	int i;

	if (tree == NULL || func == NULL)
		return;

	tree_height = height(tree);
	for (i = (int) tree_height; i >= 0; i--)
		traverse_special(tree, i, func);
}
