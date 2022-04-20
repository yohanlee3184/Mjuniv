#include<stdio.h>
#include<stdlib.h>

struct node {
	int data;
	struct node* left;
	struct node* right;
};

void main() {

	struct node* head, * tail, * temp, * cursor;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 3;
	temp->left = NULL;
	temp->right = NULL;
	head = temp;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 7;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right);
	cursor->right = temp;
	temp->left = cursor;


	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 5;
	for (cursor = head; cursor->right!= NULL; cursor = cursor->right);
	cursor->right = temp;
	temp->left = cursor;

	temp = (struct node*)malloc(sizeof(struct node));
	temp->data = 1;
	for (cursor = head; cursor->right != NULL; cursor = cursor->right);
	cursor->right = temp;
	temp->left = cursor;
	temp->right = NULL;
	tail = temp;

	for (cursor = head; cursor != NULL; cursor = cursor->right);
	printf("\n %d \n", cursor->data);

	return 0;
}


