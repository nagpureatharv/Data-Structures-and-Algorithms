# include <bits/stdc++.h>
using namespace std ;
void meragesort(int arr[] ,int  l ,int  r);
void mreage(int arr[] ,int  l,int mid , int r );
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
    int r = n ;
    meragesort(arr , l , r);

    cout<<"Array After sorting : "<<endl;
          for(int i=0 ;i < n ; i++)
    {
      
      cout<<arr[i]<<"  ";
    }

}

void meragesort(int arr[] ,int  l ,int  r)
{
   if(l<r)
   {
    int mid = (l+r) /2 ;
    meragesort(arr,l , mid);
    meragesort(arr, mid+1 ,r);
    mreage(arr,l ,mid,r);
    }
}

void mreage(int arr[] ,int  l,int mid , int r )
{

int n1 = mid - l +1 ;
int n2 = r - mid ;
int a[n1];
int b[n2];
for (int i=0;i<n1 ;i++)
{
  a[i] = arr[l+i];
}
for (int i=0;i<n2 ;i++)
{
  b[i] = arr[mid + 1 +i];
}

int  i =0 ;
int j =0 ;
int k = l;
while(i<n1 && j<n2)
{
    if(a[i]<b[j])
    {
        arr[k]=a[i];
         k++;i++ ;
    }
    else 
    {
        arr[k]=b[j];
         k++ ;j++ ;
    }
}
    while(i<n1)
    {
        arr[k]=a[i];
        k++;i++;
    }
     while(j<n2)
    {
        arr[k]=b[j];
        k++ ; j++ ;
    }

}