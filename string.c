#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* link;
};
struct Node* top;
void printstack();
void push();
void main()
{   top=NULL;int i=0;
    char str[20]="kpsinghyadav";
    printf("string before reverse:\n%s",str);
    while(str[i])
    {
        push(str[i]);
        i++;
    }
    printf("\nreverse ofstring:\n");
    printstack(top);

}
void printstack(struct Node*temp)
{
    if(temp)
    {
        printf("%c",temp->data);
        printstack(temp->link);
    }
    return;
}
void push(int x)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=x;
    newNode->link=NULL;
    if(top==NULL)
    {
        top=newNode;
        return;
    }
    newNode->link=top;
    top=newNode;
}
