/*
	q140216
	
	write a reqursive function that converts a sorted
	doubly linked list to binary serch tree;
	
	in place (O(1))
	
	what is the time complexity?
*/
	
#ifndef __Q140216_H__
#define __Q140216_H__

#include <stdio.h>

typedef struct TreeNode 
{
	int key;
	TreeNode_t *left;
	TreeNode_t *right;
}TreeNode_t;

typedef struct ListNode
{
	int key;
	ListNode_t *prev;
	ListNode_t *next;
}listNode_t;
	
TreeNode *LL2Tree(ListNode *list, size_t list_num);


#endif /* ifndef __Q140216_H__*/
