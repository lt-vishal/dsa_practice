#include <iostream>
using namespace std;

int main() 
{
   int n,h;
   cin>>n>>h;
   int arr[n];
   int width=n;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(arr[i]>h){
        width++;
    }
   }
   cout<<width;

    return 0;
}