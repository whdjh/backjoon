#include "stdio.h"
#include "string.h"
#define MAX_QUE_SIZE 10000

int queue[MAX_QUE_SIZE];
int i_front = -1, i_rear = -1;

void push(int item) 
{
    queue[++i_rear] = item;
}

int pop() 
{
    if(i_front == i_rear) 
        return -1;
    else
        return (queue[++i_front]);
}

int size() 
{
    return (i_rear - i_front);
}

int is_empty() 
{
    if(i_front == i_rear)
        return 1;
    else
        return 0;
}

int front()
{
    if(i_front == i_rear)
        return -1;
    else
        return (queue[i_front + 1]);
}

int rear() 
{
    if(i_front == i_rear)
        return -1;
    else
        return (queue[i_rear]);
}

int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        char cmd[10];
        scanf("%s", cmd);

        if(!strcmp(cmd, "push"))
        {
            int item;
            scanf("%d\n", &item);
            push(item);
        }

        else if(!strcmp(cmd, "pop"))
            printf("%d\n", pop());

        else if(!strcmp(cmd, "size"))
            printf("%d\n", size());

        else if(!strcmp(cmd, "empty"))
            printf("%d\n", is_empty());
            
        else if(!strcmp(cmd, "front"))
            printf("%d\n", front());

        else
            printf("%d\n", rear());
    }
    return 0;
}