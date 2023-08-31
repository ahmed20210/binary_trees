#include "binary_trees.h"
/**
 * tree_is_perfect - function that says if a tree is perfect or not
 * it has to be the same quantity of levels in left as right, and also
 * each node has to have 2 nodes or none
 * @root: tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int tree_is_perfect(const binary_tree_t *root)
{
	int l = 0, r = 0;

	if (root->left && root->right)
	{
		l = 1 + tree_is_perfect(root->left);
		r = 1 + tree_is_perfect(root->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
	}
	else if (!root->left && !root->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - perfect or not a tree
 * @root: tree to check
 * Return: 1 is it is or 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *root)
{
	int result = 0;

	if (root == NULL)
	{
		return (0);
	}
	else
	{
		result = tree_is_perfect(root);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
