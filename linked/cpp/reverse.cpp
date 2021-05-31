#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head;
int insert(int n ,int p)
{  node* temp1=new node();
    temp1->data=n;
    temp1->next=NULL;
    if(p==1)
    {
        temp1->next=NULL;
        head=temp1;
        return 0;
    }
    node* temp2=head;
    for(int i=0;i<p-2;i++)
    {
        temp2=temp2->next;
      
    }
    temp1->next=temp2->next;
    temp2->next=temp1;

}
void print(){
    node *temp=head;
    cout<<"list is ="<<endl;
    while (temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
        
    }
}
void reverse()
    {

        node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
           
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
    

int main()
{   head=NULL;
    insert(4,1),
    insert(8,2);
    insert(9,3);
    insert(3,4);
    insert(5,2);
    print();
    reverse();
    print();
return 0;
}