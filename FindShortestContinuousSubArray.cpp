#include<iostream>
#include<vector>
using namespace std;



  int findUnsortedSubarray(vector<int> &nums) {
        int n = nums.size();
        if(n < 2) return 0;
        int left = 1, right = 0;
        int max_num = INT_MIN, min_num = INT_MAX;
        for(int i = 0, j = n - 1; i < n; ++i, --j){
            if(max_num > nums[i])
                right = i;
            else
                max_num = nums[i];
            if(min_num < nums[j])
                left = j;
            else
                min_num = nums[j];
        }
        return right - left + 1;
    }
    
    int main(){
    	int arr[]={12,2,6,19,7,23,40};
    		vector<int> num;
    	for(int i=0;i<7;i++){
    		num.push_back(arr[i]);
    		
		}
    int result=findUnsortedSubarray(num);
    cout<<"result :"<<result;
    	
    	
    	return 0;
	}
   
