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

	initStack(&stack);//스택 초기화

	
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
		printf("스택이 꽉참\n");
		return;
	}
	stack->top++; //top을 1 증가
	stack->buf[stack->top] = data;
	printf("push\n");

}

int pop(Stack* stack){

	int re = 0;
	if (isEmpty(stack))
	{
		printf("스택이 비었음\n");
		return re;
	}

	re = stack->buf[stack->top];//top 인덱스에 보관한 값을 re에 설정
	stack->top--;//top을 1 감소
	return re;

}

