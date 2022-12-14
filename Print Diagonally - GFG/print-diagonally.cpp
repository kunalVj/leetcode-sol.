//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDigonal(int N, vector<vector<int>> A)
	{
		
		vector<int>v;
		
		for(int i=0;i<N; i++){
		    int row=0,col=i;
		    while(col>=0){
		        v.push_back(A[row][col]);
		        row++;
		        col--;
		    }
		    col--;
		}
		
		
		for(int i=1;i<N;i++){
		    int row=i,col=N-1;
		    while(row<N){
		        v.push_back(A[row][col]);
		        row++;
		        col--;
		    }
		    row--;
		}
		return v;
		
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends