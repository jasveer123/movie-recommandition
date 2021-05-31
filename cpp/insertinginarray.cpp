#include<iostream>
using namespace std;


int inserting(int a[],int n,int position,int value){
    
        for (int i=n-1;i>=position-1;i--)
        {
            a[n-1]=a[i];
            a[position-1]=value;
            n++;
            
        }



}
int print_array(int a[],int n){
    for(int i=0;i<=n-1;i++)
    {
       cout<<a[i];
    }
}
int main()
{
   
    int N,p,v;
    cin>>N;
    int arr[N];
    for (int i=0;i<=N-1;i++){
        cin>>arr[i];

    }
    print_array(arr,N);
    cout<<"enter the position at which you want to insert "<<endl;
    cin>>p;
    cout<<"enter the value to be inserted"<<endl;
    cin>>v;
    inserting(arr,N,p,v);
    print_array(arr,N);
    




return 0;
}