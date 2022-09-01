#include <stddef.h>
#include "binary_trees.h"

/**
 * height - gets height of a binary tree
 * @tree: input tree to traverse
 * @acum_height: accumulated height
 * @max: maximum height so far
 *
 * Return: height of tree
 */
size_t height(const binary_tree_t *tree, size_t acum_height, size_t max)
{
	size_t tmp;

	if (!tree)
		return (0);
	if (tree->left)
		height(tree->left, acum_height, max);
	if (tree->right)
	{
		tmp = height(tree->right, acum_height, max);
		if (tmp > acum_height)
			acum_height = tmp;
	}
	if (tree->left || tree->right)
		acum_height++;
	return (acum_height);
}

/**
 * binary_tree_height - returns height of an input binary tree
 * @tree: tree
 *
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t acum_height = 0, max_height = 0;

	return (height(tree, acum_height, max_height));
}
