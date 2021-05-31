#include<iostream>
using namespace std;


int reverse(int a[],int n){
    int temp;
    for(int i=0;i<=n-1-i;i++){
         
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;

    

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
   
    int N;
    cin>>N;
    int arr[N];
    for (int i=0;i<=N-1;i++){
        cin>>arr[i];

    }
    reverse(arr,N);
    print_array(arr,N);
    




return 0;
}