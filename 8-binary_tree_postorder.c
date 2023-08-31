#include "binary_trees.h"
/**
 * binary_tree_postorder - print elements of tree using post-order traversal
 * @root: tree to go through
 * @fun: function to use
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *root, void (*fun)(int))
{
	if (root == NULL || fun == NULL)
	{
		return;
	}
	else
	{
		binary_tree_postorder(root->left, fun);
		binary_tree_postorder(root->right, fun);
	}
	fun(root->n);
}
