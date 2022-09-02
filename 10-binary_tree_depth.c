#include "binary_trees.h"

/**
 *binary_tree_depth - A function that measures the depth of a node in a tree.
 *@tree: Pointer to the node to measure the depth.
 *Return: 0 if the tree is NULL.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int prof = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		prof++;
	}
	return (prof);
}
