int lowerBound(vector<int> arr,int n,int k){
    int low=0;
    int high=n-1;
    int ans=n;

    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]>=k){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int cntMax=0;
    int index=-1;

    for(int i=0;i<n;i++){
        int cnt_ones=m-lowerBound(matrix[i],m,1);

        if(cnt_ones>cntMax){
            cntMax=cnt_ones;
            index=i;
        }
    }
    return index;
}