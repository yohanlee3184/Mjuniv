#include<stdio.h>
#define STACK_SIZE 10

typedef struct Stack
{
	char buf[STACK_SIZE];
	int top;
}Stack;

void push(Stack* stack, int data);
int pop(Stack* stack);

int isFull(Stack* stack);
int isEmpty(Stack* stack);

void initStack(Stack* stack);


int main() {

	int i;

	Stack stack;

	initStack(&stack);//���� �ʱ�ȭ

	
		push(&stack, 1);
		push(&stack, 2);
		push(&stack, 3);
		push(&stack, 1);
		push(&stack, 1);
	

	while (1) {
		for (int i = 0; i < stack.top / 2; i++) {
			if (stack.buf[i] != stack.buf[stack.top - i]) {
				printf("no");
				break;
			}
		}
		break;
	}
	
	return 0;

}
void printAll(Stack *stack) {
	for (int i = 0; i < stack->top; i++) {
		printf("%d ", stack->buf[i]);
	}
}

void peek(Stack* stack) {
	printf("%d ", stack->buf[stack->top]);
}

void initStack(Stack* stack)
{
	stack->top = -1;
}

int isFull(Stack* stack) {
	return(stack->top+1) == STACK_SIZE;
}

int isEmpty(Stack* stack) {
	return stack->top == -1;
}

void push(Stack* stack, int data) {

	if (isFull(stack)) {
		printf("������ ����\n");
		return;
	}
	stack->top++; //top�� 1 ����
	stack->buf[stack->top] = data;
	printf("push\n");

}

int pop(Stack* stack){

	int re = 0;
	if (isEmpty(stack))
	{
		printf("������ �����\n");
		return re;
	}

	re = stack->buf[stack->top];//top �ε����� ������ ���� re�� ����
	stack->top--;//top�� 1 ����
	return re;

}

