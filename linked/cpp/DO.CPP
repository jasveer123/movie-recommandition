#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *head;
int insert(int n ,int p)
{  node *temp=new node();
   temp->data=n;
   temp->next=NULL;
   if (p==1)
   {
       temp->next=NULL;
       head=temp;
       return 0;
       
   }
   node *temp1;
   temp1=head;
   for(int i=0;i<p-2;i++)
   {
       temp1=temp1->next;
   }
   temp->next=temp1->next;
   temp1->next=temp;

}
void print()
{
    node *temp2;
    temp2=head;
    while (temp2 != NULL)
    {   
        cout<<temp2->data<<endl;
        temp2=temp2->next;
        
    }
    
}
int main()
{ head=NULL;
  insert(2,1);
  insert(3,2);
  insert(4,3);
  insert(5,4);
  print();

return 0;
}