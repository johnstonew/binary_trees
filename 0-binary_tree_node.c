#include "binary_trees.h"

/**
 * binary_tree_node - binary tree node.
 * @parent: pointer to the parent of the node tho be created.
 * @value: value of the new node.
 *
 * Return: If error occurs return NULL else pointer of new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL) {
        return NULL;  // Unable to allocate memory for the new node
    }

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}
