#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through a binary tree using post-order
 * @tree: the tree
 * @func: The function
 *
 * Return: If error occurs return NULL else pointer of new node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

