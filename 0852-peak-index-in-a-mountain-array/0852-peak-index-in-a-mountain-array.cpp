class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1;
        int en = arr.size() - 2;

        while(st <= en){
            int mid = st + (en-st)/2 ;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                return mid;
            }
            else if(arr[mid] > arr[mid-1]){
                st = mid+1;
            }
            else{
                en = mid -1;
            }
        }
        return -1;
    }
};