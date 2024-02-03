int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {

    // Write Your Code Here

    unordered_map<int,int> mpp;

    int count=0,remove=0,presum=0;

    mpp[0]=1;

    for(int i=0;i<arr.size();i++){

        presum=presum+arr[i];

        int remove=presum-k;

        count=count+mpp[remove];

        mpp[presum]++;

    }

    return count;

}

