#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of an input node
 * @node: input node
 *
 * Return: pointer to sibling of node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *a, *b;

	if (!node || !(node->parent))
		return (NULL);
	a = node->parent->left;
	b = node->parent->right;

	if (node->n == a->n)
	{
		if (b)
			return (b);
		else
			return (NULL);
	}
	else
	{
		if (a)
			return (a);
		else
			return (NULL);
	}
}
