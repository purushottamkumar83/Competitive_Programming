#include<stdio.h>
#include <stdlib.h>
#include <math.h>
// struct Stack
// {
// 	float arr[5];
// 	int tos;
// };

// void push(struct Stack *, float);
// float pop(struct Stack *);
// int isoperand(char);
// float calculate(float, float, char);
// float solve(char []);

// int main()
// {
// 	char postfix[20];
// 	float ans;
// 	printf("Enter a Valid Postfix Expression");
// 	gets(postfix);
//     //puts(postfix);
// 	ans=solve(postfix);
// 	printf("Postfix Expression is %s",postfix);
//     puts(postfix);
// 	return 0;
// }
// float solve(char postfix[20])
// {
//      int i;
//      struct Stack s;
//      char ch;
//      float op1,op2,result;
//      s.tos=-1;
//      for(i=0;postfix[i]='\0';i++)
//      {
//            ch=postfix[i];
//            if(isoperand(ch)==1)
// 	push(&s, ch-48);	
//            else
//            {
// 	op2=pop(&s);
// 	op1=pop(&s);
//    	result=calculate(op1,op2,ch);
// 	push(&s,result);
//            }	
//      }
//      result=pop(&s);
//      return result;
// }
// void push(struct Stack *p, float x)
// {
// 	if(p->tos==4)
// 	{
// 		printf("Stack Overflow");
// 		return;
// 	}
// 	p->tos++;
// 	p->arr[p->tos]=x;
// }

// float pop(struct Stack *p)
// {
// 	if(p->tos==-1)
// 	{
// 		printf("Stack Underflow");
// 		return -1;
// 	}
// 	return p->arr[p->tos--];
// }
// int isoperand(char ch)
// {
//     if(ch>=48&&ch<=57)
//         return 1;
//     else
//         return 0;
// }

// float calculate(float op1, float op2, char ch)
// {
// 	switch(ch)
// 	{
// 		case '+':
// 		         return op1+op2;
// 		case '-':
// 		         return op1-op2;
// 		case '*':
// 		         return op1*op2;
// 		case '/':
// 		         return op1/op2;
// 		case '%':
// 		         return fmod(op1,op2);
// 		case '$':
// 		         return pow(op1,op2);
// 		default:
// 		         return 0;	
// 	}
// }
long long findNth(long long );
int main()
{
	long long result;
	long long n = 90;
	result=findNth(n);
	printf("Result is: %llu",result);	
	return 0;
}
long long findNth(long long N)
    {
        // if(N/9 == 0)
		// 	return N;
		// else
		// 	return N+(N/9);
		// long long q,r;
		// q=N/9;
		// r=N%9;
		// return (9*q)+r;
		return N+(N)
    }