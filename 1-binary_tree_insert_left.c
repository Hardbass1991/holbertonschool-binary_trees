#include <stdlib.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another one
 * @parent: parent of the node that will be inserted
 * @value: value of the node that will be inserted
 *
 * Return: pointer to the node just inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp;

	tmp = malloc(sizeof(binary_tree_t));
	if (!tmp)
		return (NULL);
	tmp->n = value;
	tmp->left = NULL;
	tmp->right = NULL;
	if (!parent)
		return (NULL);
	if (parent->left)
	{
		tmp->left = parent->left;
		tmp->parent = parent;
		parent->left->parent = tmp;
		parent->left = tmp;
		return (parent->left);
	}
	else
	{
		tmp->parent = parent;
		parent->left = tmp;
		return (parent->left);
	}
}
