#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
}; 
node *head;

int main()
{   head = NULL;
    node *temp=new node();
    temp->data=3;
    temp->next=NULL;
    head=temp;
    temp=new node();
    temp->data=4;
    temp->next=NULL;
    head=temp;
    temp=new node();
    temp->data=5;
    temp->next=NULL;
    head=temp;


   node *temp1=head;
   while (temp1->next!=NULL)
   {   
       
       temp1=temp1->next;
       cout<<temp->data<<endl;
       temp1->next=temp;
       

   }
   return 0;
}