/*Design an algorithm and a program to implement two stacks by using only one array i.e. both the
stacks should use the same array for push and pop operation. Array should be divided in such a
manner that space should be efficiently used if one stack contains very large number of elements
and other one contains only few elements.
*/

#include <stdio.h>

int top1=-1;
int top2;
int size;
int stack[100];


void push1(int x){
    if(top1+1==top2){
        printf("stack 1 overflow\n");
        return ;
    }
    top1++;
    stack[top1]=x;
}

void push2(int x){
    if(top1+1==top2){
        printf("stack 2 overflow\n");
        return ;
    }
    top2--;
    stack[top2]=x;
}

void pop1(){
    if(top1==-1){
        printf("stack 1 is empty\n");
        return;
    }
    top1--;
}

void pop2(){
    if(top2==size){
        printf("stack 2 is empty\n");
        return;
    }
    top2++;
}

void display1(){
    int i;
    printf("stack 1 is\n");
    for(i=0;i<=top1;i++){
        printf("%d ",stack[i]);
    }
    printf("\n");    
}

void display2(){
    int j;
    printf("stack 2 is\n");
    for(j=top2;j<size;j++){
        printf("%d ",stack[j]);
    }
    printf("\n");
}

int main()
{
    
    int a;
    int choice;
    
    printf("enter size of stack\n");
    scanf("%d",&size);
    
    top2=size;
    
    do{
        
        printf("enter 1 to push in stack 1\n");
        printf("enter 2 to pop from stack 1\n");
        printf("enter 3 to push in stack 2\n");
        printf("enter 4 to pop from stack 2\n");
        printf("enter 5 to exit\n");
        scanf("%d",&choice);
        
        switch(choice){
            
            case(1):
            printf("enter a element to push into a stack\n");
            scanf("%d",&a);
                push1(a);
                break;
            
            case(2):
                pop1();
                break;
                
            case(3):
            printf("enter a element to push into a stack\n");
            scanf("%d",&a);
                push2(a);
                break;
                
            case(4):
                pop2();
                break;
            
            case(5):
                display1();
                display2();
                break;
            
            default:
                printf("invalid choice");
            
        }
    }while(choice!=5);
    
    
    return 0;
}