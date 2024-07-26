class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int start, int end)
    {
        if(start>=end){
            return;
        }
        int pivot = end;
        int i = start -1;
        int j = start;

        while(j<pivot){
            if(arr[j]<arr[pivot]){
                ++i;
                swap(arr[i],arr[j]);
            }
            ++j;
        }
        ++i;
        swap(arr[i],arr[pivot]);
        quickSort(arr,start,i-1);
        quickSort(arr,i+1,end);
    }

    public:
    int partition (int arr[], int low, int high)
    {
       // Your code here
    }
};