#include "binary_trees.h"

/**
 * binary_tree_inorder - binary tree node.
 * @tree: The tree
 * @func: The function
 *
 * Return: If error occurs return NULL else pointer of new node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
