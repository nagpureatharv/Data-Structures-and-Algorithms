#include <bits/stdc++.h>
using namespace std ;

void insertion(int arr[] , int n );

int main()
{
  int n ;
  cout<<"Enter the size of the array : ";
  cin>>n;
  int arr[n];
  for(int i=0 ;i < n ; i++)
  {
    cout<<"Enter the number : ";
    cin>>arr[i];
  }
  cout<<"Array brfore sorting : "<<endl;
  for(int i=0 ;i < n ; i++)
  {
      
   cout<<arr[i]<<"  ";
  }
  cout<<endl;

  insertion(arr , n);

  cout<<"Array After sorting : "<<endl;
  for(int i=0 ;i < n ; i++)
  {
    cout<<arr[i]<<"  ";
  }

}

void insertion(int arr[] , int n )
{

    for(int i = 1 ; i<n ; i++)
    {
      int temp =arr[i] ;
      int j = i-1;

      while(arr[j] > temp &&  j >= 0)
      {
          arr[j+1] = arr[j] ;
          j-- ;
      }
      arr[j+1] = temp ;
    }
}