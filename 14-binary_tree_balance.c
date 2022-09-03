#include "binary_trees.h"

/**
 * n_max - Find max of 2 numbers.
 * @a: Number1.
 * @b: Number2.
 * Return: The bigger number.
 */

int n_max(int a, int b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

/**
 * height - gets height of a binary tree
 * @tree: input tree to traverse
 * Return: height of tree
 */

size_t height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);
	return (n_max(height(tree->left), height(tree->right)) + 1);
}

/**
 *binary_tree_balance - A function that measures the balance factor of a tree.
 *@tree: Pointer to the root node of the tree to measure the balance factor.
 *Return: 0 if the tree is NULL.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height(tree->left) - height(tree->right));
}
