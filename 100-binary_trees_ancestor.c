#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest commen ancestor of
 * two nodes.
 * @first: being a pointer to the first node.
 * @second: being a pointer to the second node.
 * Return: pointer to the lowerst common ancestor node of the
 * two given nodes or NULL if no common ancestor was found.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *node_a, *node_b;

	if (first == NULL || second == NULL)
		return (NULL);

	node_a = (binary_tree_t *) first;
	node_b = (binary_tree_t *) second;

	if (node_a == node_b)
		return (node_a);

	while (node_a != NULL)
	{
		if (node_a == node_b->parent)
			return (node_a);

		node_b = node_b->parent;

		if (node_b->parent == NULL)
		{
			node_b = (binary_tree_t *) second;
			node_a = node_a->parent;
		}
	}
	return (NULL);
}
