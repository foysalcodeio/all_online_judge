#include <bits/stdc++.h>
using namespace std;
typedef struct mylist
{
    int data;
    struct mylist *next;
}node;

void Insert(node *s, int data)
{
    while(s->next!=NULL)
    {
        s=s->next;
    }
    s->next = (node*)malloc(sizeof(node));
    s->next->data = data;
    s->next->next = NULL;
}
void display(node *s)
{
    while(s->next!=NULL)
    {
        printf("%d\n", s->next->data);
        s=s->next;
    }
}
void searh(node *s, int data)
{
    int Count = 0;
    while(s->next!=NULL)
    {
        if(s->next->data==data)
        {
            Count++;
        }
         s = s->next;
    }
    printf("Total %d result found\n", Count);
}
void deleteNode(node *s, int data)
{
    while(s->next!=NULL)
    {
        if(s->next->data == data)
        {
            s->next = s->next->next;
        }
        s = s->next;
    }
}
int main ()
{
    node *first = (node*)malloc(sizeof(node));
    node *second = (node*)malloc(sizeof(node));
    first->next = NULL;
    second->next = NULL;

    Insert(first, 9);
    Insert(first, 10);
    Insert(second, 11);


    display(first);
    display(second);

}
