#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the left-child of another one
 * @parent: parent of the node that will be inserted
 * @value: value of the node that will be inserted
 *
 * Return: pointer to the node just inserted
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
		free(tmp);
		return (NULL);
	}
	if (parent->right)
	{
		tmp->right = parent->right;
		tmp->parent = parent;
		parent->right->parent = tmp;
		parent->right = tmp;
		return (parent->right);
	}
	else
	{
		tmp->parent = parent;
		parent->right = tmp;
		return (parent->right);
	}
}
