#include "binary_trees.h"

/**
 *binary_tree_size - A function that measures the size of a binary tree.
 *@tree: Pointer to the root node of the tree to measure the size.
 *Return: 0 if the tree is NULL.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}

/**
 *binary_tree_is_full - A function that checks if a binary tree is full.
 *@tree: Pointer to the root node of the tree to check.
 *Return: If the tree is full 1, not full return 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}

/**
 *binary_tree_is_perfect - A function that checks if a binary tree is perfect.
 *@tree: Pointer to the root node of the tree to check.
 *Return: If the tree is perfect 1, not perfect return 0.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_size(tree->left);
	height_right = binary_tree_size(tree->right);

	if (binary_tree_is_full(tree) && height_left == height_right)
		return (1);

	return (0);
}
