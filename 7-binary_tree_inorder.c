#include "binary_trees.h"
/**
 * binary_tree_inorder - print elements of tree using in-order traversal
 * @root: tree to go through
 * @fun: function to use
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *root, void (*fun)(int))
{
	if (root == NULL || fun == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(root->left, fun);
		fun(root->n);
		binary_tree_inorder(root->right, fun);
	}
}
