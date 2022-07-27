#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree.
 * @tree: pointer to the root node of the tree to rotate.
 * Return: a pointer to the new root node of the tree once rotated.
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (!tree || (tree && !tree->left))
		return (NULL);
	new_root = tree->left;
	new_root->parent = NULL;
	tree->parent = new_root;
	if (new_root->right)
		tree->left = new_root->right;
	else
		tree->left = NULL;
	new_root->right = tree;
	return (new_root);
}
