#include<iostream>
using namespace std;

struct node
{
    int data;
    int *next;
};
node *head=NULL;
int insert(int n)
{  
    node *temp =new node();
    temp->data=n;
    temp->next=head;
    head=temp;

}
void display()
{
    node *temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main()
{ 
    insert(4),
    insert(8);
    insert(9);
    insert(3);
    display();



return 0;
}