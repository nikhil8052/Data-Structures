class Solution {
public:
    
    // Median of Two elements
double median2(int ele1, int ele2) { return (double)(ele1 + ele2) / 2; }


// Median of three element 
double median3(int e1 , int e2 , int e3){
   long long int sum=e1+e2+e3;
   long long int allmax=max(e1,max(e2,e3));
   long long int allmin=min(e1,max(e2,e3));
   return sum-allmax-allmin;

}

double median4(int a , int b , int c , int d ){
    long long int allsum = a+b+c+d;
    long long int allmax=max(a,max(b,max(c,d)));
    long long int allmin=min(a,min(b,min(c,d)));
    return (double)allsum-allmin-allmax/2;

}


// Find median of any array
double medianArr(vector<int> arr, long long int  n) {
    if (n == 0) return -1;
    if (n % 2 == 0) {
        n = n / 2;
        return median2(arr[n], arr[n - 1]);
    }
    n = n / 2;
    return arr[n];
}

    
    
double findMedian(vector<int> arr1 , int n , vector<int> arr2 , int m ){

    if(n==0) return medianArr(arr2,m);

    if(n==1){
        if(m==1){
            return median2(arr1[0],arr2[0]);
        }

        if(m&1){
            int mid=m/2;
            return median2(arr2[mid],median3(arr2[mid-1],arr2[mid+1],arr1[0]));

        }
        return median3(arr2[m/2],arr2[m/2-1],arr1[0]);
    }
    else if(n==2){
        if(m==2){
            return median4(arr1[0],arr1[1],arr2[0],arr2[1]);
        }

        if(m&1){
        return median3(arr2[m/2],max(arr1[0],arr2[m/2-1]),min(arr1[1],arr2[m/2+1]));
        }

       return median4(arr2[m],arr2[m-1],max(arr1[0],arr2[m/2-2]),min(arr1[1],arr2[m/2+1]));
        
    }
    int idxA = (n -1 ) / 2;
	int idxB = ( m -1) / 2;

	
	if (arr1[idxA] <= arr2[idxB] )
	return findMedian(arr1, n/2 + 1, arr2, m/2-1 );

	return findMedian(arr1, n/2 -1, arr2, m /2 +1  );

}

    
    
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        return findMedian(nums1,nums1.size(),nums2,nums2.size());
    }
};