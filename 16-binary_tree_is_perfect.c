#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * A perfect binary tree is a binary tree where all internal nodes have
 * two children, and all leaves are at the same depth or level
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if not perfect or tree is NULL otherwise return 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
		if (binary_tree_depth(tree->left) == binary_tree_depth(tree->right))
			return (1);
	return (0);		
}
