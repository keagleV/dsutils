
typedef struct stack{

	int *arr;

	int totalSize;

	int top;


}stack_t;


	
stack_t * newStack(int size);

char push(stack_t * stack,int ele);

int pop(stack_t * stack);

char isEmpty(stack_t * stack);


int stackLen(stack_t *stack);

void reinitStack(stack_t *stack);