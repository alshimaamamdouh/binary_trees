#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t left_h, right_h, val = 0;


	if (tree == NULL)
		return (0);





	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;





	if (left_h > right_h)
	{
		val =  left_h;
	}
	else
	{
		val = right_h;
	}





	return (val);
}
