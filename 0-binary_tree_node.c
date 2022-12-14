#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent of the node that will be created
 * @value: int that new node will have as value
 *
 * Return: pointer to hereby created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);
	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	if (!parent)
	{
		tmp->parent = NULL;
		parent = tmp;
		return (parent);
	}

	if (parent->left && parent->right)
	{
		return (NULL);
	}
	else
	{
		tmp->parent = parent;
		return (tmp);
	}
}
