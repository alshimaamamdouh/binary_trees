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





	left_h = tree->left ? 1 + binary_tree_height(tree->left) : 1;
	right_h = tree->right ? 1 + binary_tree_height(tree->right) : 1;





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

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree to measure the balance factor
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t lef, righ;

	if (tree == NULL)
		return (0);


	lef = binary_tree_height(tree->left);
	righ = binary_tree_height(tree->right);

	return ((int)(lef - righ));
}
