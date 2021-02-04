// C++ implementation of the approach 
#include <bits/stdc++.h> 
using namespace std; 

// Function to return the minimum number 
// of coins that need to be removed 
int minimumCoins(vector<int> &a, int n, int k) 
{ 
	// To store the coins needed to be removed 
	int cnt = 0; 

	// Minimum value from the array 
	int minVal = *min_element(a.begin(), a.end()); 

	// Itereate over the array and remove extra coins 
	for (int i = 0; i < n; i++) { 
		int diff = a[i] - minVal; 

		// If the difference between the current pile and 
		// the minimum coin pile is greater than k 
		if (diff > k) { 

			// Count the extra coins to be removed 
			cnt += (diff - k); 
		} 
	} 

	// Return the required count 
	return cnt; 
} 

// Driver code 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        int a;
	        cin>>a;
	        v.push_back(a);
	    }

	cout << minimumCoins(v, n, k); 
    }

	return 0; 
} 
