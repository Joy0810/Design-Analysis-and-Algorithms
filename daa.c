// Binary search

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];  
    printf("Enter the elements in a sorted order: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int left,right,mid;
    int k;
    printf("Enter the element to be searched: ");
    scanf("%d",&k);
    left=0;
    right=n-1;
    while(left<=right){
        mid=(left+right)/2;
        if(a[mid]==k) {
            printf("the target element is on %d index",mid);
            break;
        }
        if(a[mid]>k) right=mid-1;
        else left=mid+1;
    }
    return 0;
}