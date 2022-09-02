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
		return (b);
	else if (node->n == b->n)
		return (a);
	return (NULL);
}

/**
 * binary_tree_uncle - gets the uncle of input node
 * @node: input node
 *
 * Return: uncle of node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
