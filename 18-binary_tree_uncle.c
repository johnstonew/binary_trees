#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: the node
 *
 * Return: If error occurs return NULL else pointer of new node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *parent = node->parent;
	binary_tree_t *grandparent = parent->parent;

	if (grandparent->left == parent)
		return (grandparent->right);

	if (grandparent->right == parent)
		return (grandparent->left);

	return (NULL);
}

