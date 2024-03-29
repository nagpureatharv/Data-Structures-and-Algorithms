#include <bits/stdc++.h>

using namespace std ;

void Quicksort(int arr[] , int l , int h);

int partition(int arr[] , int l , int h);

void swap(int arr[] , int i , int j );

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


  int l =0  ;
  int h = n ;

  Quicksort(arr,l,h);

  cout<<"Array After sorting : "<<endl;

  for(int i=0 ;i < n ; i++)
  {
    cout<<arr[i]<<"  ";
  }

}

void Quicksort(int arr[] , int l , int h)
{
  if(l<h){
    int pivot = partition(arr , l , h );
    Quicksort(arr , l , pivot-1);
    Quicksort(arr,pivot+1,h);
  }


}


int partition(int arr[] , int l , int h)
{

  int pi = arr[l];
  int i = l ;
  int j = h ;
 while(i<j){
  while(arr[i]<=pi)
  {
    i++;
  }
  while(arr[j]>pi)
  {
    j--;
  }

  if(i<j)
  {
    swap(arr,i ,j);
  }
 }
  
  swap(arr, l ,j);
  return j ;

}

void swap(int arr[] , int i , int j )
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
