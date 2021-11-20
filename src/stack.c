#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <kstring.h>
#include <stack.h>






	
stack_t * newStack(int size){

	stack_t * stack=malloc(sizeof(stack_t));

	stack->totalSize=size;
	stack->top=-1;
	stack->arr=malloc(sizeof(int)*size);


	return stack;
}


char push(stack_t * stack,int ele){

	if(stack==NULL || stack->top+1==stack->totalSize )

		return -1;


	
	stack->top++;

	stack->arr[stack->top]=ele;

	return 1;

}

int pop(stack_t * stack){

	if(stack==NULL || stack->top==-1)
		return -1;

	int t=stack->arr[stack->top];

	stack->top--;

	return t;

}


char isEmpty(stack_t * stack){
	if(stack->top==-1)
		return 1;

	return 0;
}


int stackLen(stack_t *stack){

	return stack->top +1 ;

}


void reinitStack(stack_t *stack){
	stack->top=-1;
}