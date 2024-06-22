#include <iostream>
#include <algorithm>
#include <stack>
void printArray(int arr[],int len)
{
    for(int i = 0; i <= len-1 ; i++)
        std::cout<<arr[i]<<" ";
    std::cout<<std::endl;
    
}
void reverseArray(int arr[],int len)
{
    int start = 0;
    int end = len-1;
    int temp;
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void reverseArrayRecurssive(int arr[],int start, int end)
{
    int temp;
    if(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        reverseArrayRecurssive(arr,start+1,end-1);
    }
    else
    {
        return;
    }
}
void reverseArrayAlgo(int arr[],int size)
{
    int * start = arr;
    int * end = arr + size;
    std::reverse(start,end);
}
void reverseArrayStack(int arr[],int size)
{
    std::stack<int> mystack;
    for(int i=0; i<=size-1; i++)
        mystack.push(arr[i]);
        
    for(int i=0; i<=size-1; i++)
    {
        arr[i] = mystack.top();
        mystack.pop();
    }
        
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10,11};
    int size = sizeof(a)/sizeof(a[0]);
    std::cout<<"Hello World\n";
    printArray(a,size);
    //reverseArray(a,size);
    //printArray(a,size);
    
    //reverseArrayRecurssive(a,0,size-1);
    //printArray(a,size);
    
    //reverseArrayAlgo(a,size);
    //printArray(a,size);

    reverseArrayStack(a,size);
    printArray(a,size);
    return 0;
}
