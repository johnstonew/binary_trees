#include "binary_trees.h"

/**
 * binary_tree_nodes - checks if a node is a leaf
 * @tree: the tree
 *
 * Return: If error occurs return NULL else pointer of new node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

	return (0);
}

