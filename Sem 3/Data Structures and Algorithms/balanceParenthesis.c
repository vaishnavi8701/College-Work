#include <stdio.h>
#include <string.h>
#define max 100

char stack[max];
int top = -1;

void push(char item){
	++top;
	stack[top] = item;
}

void pop(){
	if(top == -1){
		printf("Expression is invalid.");
	}else{
		top--;
	}
}

void checkBalance(){
	if(top == -1){
		printf("Expression is balanced.");
	}else{
		printf("Expression is invalid.");
	}
}

int main(){
	char expression[max];
	int i;
	printf("Enter the expression: ");
	gets(expression);
	
	for(i=0; expression[i] != '\0'; i++){
		if(expression[i] == '(' || expression[i] == '{' || expression[i] == '['){
			push(expression[i]);
		}
		else if(expression[i] == ')' || expression[i] == '}' || expression[i] == ']'){
			pop();
		}
	}
	
	checkBalance();
	return 0;
}
