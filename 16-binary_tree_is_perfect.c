#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the tree
 *
 * Return: If error occurs return NULL else pointer of new node
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height == right_height && binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right))
	{
	return (1);
	}

	return (0);
}

