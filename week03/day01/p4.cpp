// https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

// class Solution {
//   public:
//     long long maximumSumSubarray(vector<int>& arr, int k) {
// 	long long sum = 0;
// 	for (int i = 0; i < k; i++)
// 	{
// 		sum += arr[i];
// 	}

// 	long long mx = sum;

// 	for (int i = k; i < arr.size(); i++)
// 	{
// 		sum = sum - arr[i - k] + arr[i];
// 		mx = max(mx, sum);
// 	}

// 	return mx;
//     }
// };