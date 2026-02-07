#include<stdio.h>
#include<conio.h>
#include<ctype.h>

char stack[10];        // stack array
int top = -1;          // top of stack

// Function to give priority
int priority(char ch)
{
    if(ch=='+' || ch=='-') return 1;
    if(ch=='*' || ch=='/') return 2;
    return 0;
}

void main()
{
    char infix[20], x;
    int i;
    clrscr();

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for(i=0; infix[i]!='\0'; i++)
    {
        // If operand, print directly
        if(isalnum(infix[i]))
            printf("%c", infix[i]);

        // If opening bracket, push to stack
        else if(infix[i]=='(')
            stack[++top] = infix[i];

        // If closing bracket, pop till '('
        else if(infix[i]==')')
        {
            while((x = stack[top--]) != '(')
                printf("%c", x);
        }

        // If operator
        else
        {
            while(top!=-1 && priority(stack[top]) >= priority(infix[i]))
                printf("%c", stack[top--]);

            stack[++top] = infix[i];
        }
    }

    // Pop remaining operators
    while(top != -1)
        printf("%c", stack[top--]);

    getch();
}
