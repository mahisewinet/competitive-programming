//{ Driver Code Starts
#include <stdio.h>
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int select(int arr[], int i);
void selectionSort(int arr[], int n);
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
  
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      
    selectionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends


int select(int arr[],int i)
{
    // code here such that selecionSort() sorts arr[]
    int maxi=-1, pos;
    for(int j=i; j>=0;j--){
        if(maxi < arr[j]){
            maxi= arr[j];
            pos=j;
        }
    }
    return pos;
}


void selectionSort(int arr[], int n)
{
  //code here
  int i,j;
  for(i=n-1; i>=0; i--){
      int j = select(arr, i);
      swap(&arr[i], &arr[j]);
  }
}
