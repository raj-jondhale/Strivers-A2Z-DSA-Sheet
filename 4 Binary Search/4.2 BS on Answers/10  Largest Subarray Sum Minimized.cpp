#include<bits/stdc++.h>
int countStudents(vector<int> &arr,int pages){
    int students=1;
    long long pagesStudent=0;
    for(int i=0;i<arr.size();i++){
        if(pagesStudent+arr[i]<=pages){
            pagesStudent+=arr[i];
        }else{
            students+=1;
            pagesStudent=arr[i];
        }
    }
    return students;
}

int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int low=*max_element(arr.begin(),arr.end());
    int high=accumulate(arr.begin(),arr.end(),0);

    //applying binary search
    while(low<=high){
        int mid=(low+high)/2;
        int students=countStudents(arr,mid);
        //if condition 
        if(students>m){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int largestSubarraySumMinimized(vector<int> a, int k) {
    // Write Your Code Here
    return findPages(a, a.size(), k);
}