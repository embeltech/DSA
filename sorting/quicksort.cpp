#include <iostream>
using namespace std;

int partition(int arr[],int low,int high)
{
    int pivotElement=arr[high];  //last element as pivot
    int pivotIdx=(low-1);
    
    for(int i=low;i<=high-1;i++)
    {
        if(arr[i]<pivotElement)
        {
            pivotIdx++;
            swap(arr[pivotIdx],arr[i]);
        }
    }
    swap(arr[pivotIdx+1],arr[high]);
    return (pivotIdx+1);
}

void quickSort(int arr[],int low,int high)
{
   
    if(low<high)
    {
        int pi=partition(arr,low,high);
        
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
             
 
int main() {
  int arr[]={10,7,4,3,3,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  // Function call
  quickSort(arr,0,n-1);
  //Print the sorted array
  cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}
// This Code is Contributed By Diwakar Jha
