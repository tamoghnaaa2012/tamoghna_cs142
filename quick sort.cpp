#include<iostream>
using namespace std;

//now do a swap of two values

void swap(int *a,int *b)

    {

        int temp = *a;
        *a = *b;
        *b = temp;
    }
 //make a partiton the array on the basis of value of small and large

int partition(int a[],int low,int high)
     {
       int pivot,i,index;
       index=low;
       pivot=high;

       //geting index of pivot
       for(i=low,i<high;i++; )
       {
           if(a[i]< a[pivot])
           {

           swap(&a[i],&a[index]);
           index++;
           }
       }



     return index;

 }

 //Implementing Quicksort algorithm.
int Quicksort( int a[],int low,int high )
 {
     int index;
     if (low<high)
     {
         index = partition(a,low,high);
         Quicksort(a,low,index-1);
         Quicksort(a,high,index+1);

     }
     return 0;
 }
int main()
{

    int n,i;
  cout <<"enter the numberof the data elementto be sorted";
  cin>>n;

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>arr[i];
	}

	Quicksort(arr, 0, n-1);

	// Printing the sorted data.
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
        	cout<<"->"<<arr[i];

	return 0;
}



