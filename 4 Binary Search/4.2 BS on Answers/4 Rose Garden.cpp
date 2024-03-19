#include<bits/stdc++.h>

bool possible(vector<int> arr, int k,int m, int mid){

    int count=0, no=0;

    for(int i=0;i<arr.size();i++){

        if(arr[i]<=mid){

            count++;

        }

        else{

            no+= (count/k);

            count=0;

        }

        

    }

    no+= (count/k);

    return (no>=m);

}

int roseGarden(vector<int> arr, int k, int m)

{

    // Write your code here

    long long val= k*1ll*m*1ll;

    if(val>arr.size()) return -1;

    int start=*min_element(arr.begin(),arr.end()); 

    int end= *max_element(arr.begin(),arr.end());

    

    while(start<=end){

        int mid= (start+end)/2;

        if(possible(arr,k,m,mid)){

            

            end=mid-1;

        }

        else{

            start=mid+1;

        }

    }

    return start ;

}