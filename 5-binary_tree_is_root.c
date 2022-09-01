#include "binary_trees.h"
/**
 * binary_tree_is_root - checks whether an input node is a root
 * @node: input node
 *
 * Return: 1 if node is root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->parent);
}
