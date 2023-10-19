#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {
	int data;
	struct _NODE* next;
} NODE;

void print_list(NODE* head)
{
	printf("------------------\n");
	NODE* p = head->next;
	while (p != NULL) {
		printf("%d\n", p->data);
		p = p->next;
	}
	printf("------------------\n");
}

void insert_node_last(NODE* head, int data)
{
	NODE* n = (NODE*)malloc(sizeof(NODE));
	n->data = data;
	n->next = NULL;

	NODE* p = head;
	while (p->next != NULL) p = p->next;

	p->next = n;
}

void insert_node_first(NODE* head, int data)
{
	NODE* n = (NODE*)malloc(sizeof(NODE));
	n->data = data;
	n->next = head->next;

	head->next = n;
}

void delete_node_last(NODE* head)
{
	NODE* p = head->next;
	NODE* p_prev = head;
	while (p->next != NULL) {
		p_prev = p;
		p = p->next;
	}

	p_prev->next = NULL;
	free(p);
}

void delete_node_first(NODE* head)
{
	NODE* p = head->next->next;	// exception?
	free(head->next);

	head->next = p;
}

int main()
{

	NODE* head = (NODE*)malloc(sizeof(NODE));
	head->next = NULL;

	NODE* n1 = (NODE*)malloc(sizeof(NODE));
	n1->data = 1;
	n1->next = head->next;
	head->next = n1;

	NODE* n2 = (NODE*)malloc(sizeof(NODE));
	n2->data = 2;
	n2->next = n1->next;
	n1->next = n2;

	insert_node_last(head, 3);
	insert_node_last(head, 4);

	insert_node_first(head, 5);

	print_list(head);

	delete_node_last(head);
	print_list(head);

	delete_node_first(head);
	print_list(head);
	return 0;
}
