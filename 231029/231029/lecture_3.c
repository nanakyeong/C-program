#include <stdio.h>
#include <stdlib.h>

typedef struct _NODE {

	int data;
	struct _NODE* next;

} NODE;

void print_list(NODE* head)
{
	printf("------------------\n");
	NODE*  curr = head->next;
	while (curr != NULL) {
		printf("%d\n", curr->data);
		curr = curr->next;
	}
	printf("------------------\n"); //순환
}

void insert_node_last(NODE* head, int data)
{
	NODE* a2 = (NODE*)malloc(sizeof(NODE));
	a2->data = data;
	a2->next = NULL;

	NODE* p = head;
	while (p->next != NULL) p = p->next;

	p->next = a2; //노드 추가하기(2)
}

void insert_node_first(NODE* head, int data)
{
	NODE* a1 = (NODE*)malloc(sizeof(NODE));
	a1->data = data;
	a1->next = head->next;

	head->next = a1; //노트 추가하기(1)
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
	NODE* p = head->next;
	head->next = p->next;

	free(p); // 노드 삭제 (1)
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
