#include<stdio.h>
#include<iostream> 
using namespace std;
#include<stdlib.h>
class node
{
    public:
    int data;
    node *next;
};
void printlist(node *n)
{
    while(n!=NULL)
    {
        cout<<n->data<<' ';
        n=n->next;
    }
}
void insert(node *n)
{
    //n->next=
}
int main()
{
    node *head,*n1,*n2,*n3;
    head= new node();
    n1= new node();
    n2= new node();
    n3= new node();
    head->data=1;
    head->next=n1;
    n1->data=2;
    n1->next=n2;
    n2->data=3;
    n2->next=n3;
    n3->data=7;
    n3->next=NULL;
    printlist(head);

}

 
