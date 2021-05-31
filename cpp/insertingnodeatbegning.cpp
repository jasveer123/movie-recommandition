#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
};
node* head;
void insert(int x){
    node* temp=new node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void das(){
    node *temp=head;
    cout<<"list is ="<<endl;
    while (temp!= NULL)
    {
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"\n"<<endl;

    
}
int main()

{
   head=NULL;
   cout<<"how many numbers to be inserted"<<endl;
   int n,x;
   cin>>n;
   for(int i=0 ;i<n;i++){
         cout<<"enter the number to be inserted"<<endl;
         cin>>x;
         insert(x);
         das();
   }
   
   
return 0;
}