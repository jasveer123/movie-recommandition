#include<iostream>
using namespace std;


int binarysearch(int a[],int n,int x){
    int start=0;
    int end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (mid==x){
             cout<<mid<<endl;
             end;
        }
        else if(x<mid)
        {
            end=mid-1;
        }
        else
        {start=mid+1;
        }
    }return -1;
    

}
int print_array(int a[],int n){
    for(int i=0;i<=n-1;i++)
    {
       cout<<a[i];
    }
}
int main()
{
   
    int N,number;
    cin>>N;
    int arr[N];
    for (int i=0;i<=N-1;i++){
        cin>>arr[i];

    }
    print_array(arr,N);
    cout<<"enter the number to be found in the array"<<endl;
    cin>>number;
    binarysearch(arr,N,number);
    




return 0;
}