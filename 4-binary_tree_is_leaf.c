#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks whether a node is a leaf
 * @node: input node whose leaf-ness will be checked
 *
 * Return: 1 if node is leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!(node->left || node->right));
}
