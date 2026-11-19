void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int arr[m+n];
    for(int i=0; i<m; i++){
        arr[i]=nums1[i];
    }
    for(int i=0; i<n; i++){
        arr[m+i]=nums2[i];
    }
    for(int i = 0; i < m+n; i++)
    {
        for(int j = i+1; j < m+n; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i=0; i<m+n; i++){
        nums1[i]=arr[i];
    }
}