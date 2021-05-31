#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
int main()
{
   node *a;
   a=NULL;

   node *temp=new node();
   temp->data=5;
   temp->next=NULL;
   a=temp;
   
   temp=new node;
   temp->data=6;
   temp->next=NULL;

   node *temp1=a;
   while(temp1->next!=NULL){
       temp1=temp1->next;
    
       temp1->next=temp;
   }
   
return    cout<<temp1->data<<endl;;
}