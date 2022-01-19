#include <bits/stdc++.h>
using namespace std ;

void selection(int arr[] , int  n);

void swap(int arr[] , int i , int j);

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

  selection(arr , n);

  cout<<"Array After sorting : "<<endl;
  for(int i=0 ;i < n ; i++)
  {
    cout<<arr[i]<<"  ";
  }

}

void selection(int arr[] , int  n)
{
  for(int i =0 ; i< n ; i++)
  {
    int min = i ;
    for(int  j = i+1 ; j < n ; j++)
    {
        if(arr[j] < arr[min])
        {
            min = j ;
        }
    }

    if(min != i)
    {
        swap(arr ,i ,min );
    }
  }
}

void swap(int arr[] , int i , int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp ;
}
