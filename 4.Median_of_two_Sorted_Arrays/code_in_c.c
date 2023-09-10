

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int arr[nums1Size+nums2Size];
    int i  = 0, j = 0 ,k = 0;
    while((i<nums1Size) && (j<nums2Size))
    {
        if (nums1[i]<=nums2[j])
        {
            arr[k] = nums1[i];
            i++;
        }
        else
        {
            arr[k]=nums2[j];
            j++;
        }
        k++;
    }
    // printf("%d %d\n",i,j);
    while(i<nums1Size)
    {
        arr[k]=nums1[i];
        k++;
        i++;
    }
    while(j<nums2Size)
    {
        arr[k]=nums2[j];
        k++;
        j++;
    }
    int v = nums1Size+nums2Size;
    if (v%2!=0)
    {
        double w = arr[(v-1)/2];
        return w;
    }
    else
    {
        double w = (arr[(v/2)-1]+arr[v/2]);
        return w/2;
    }
    for(int y=0;y<(nums1Size+nums2Size);y++)
        printf("%d ",arr[y]);
    return 0;
    
   
}