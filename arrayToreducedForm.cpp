// Convert an array to reduced form
// Given an array with N distinct elements, convert the given array to a reduced form where all elements are in range from 0 to N-1. The order of elements is same, i.e., 0 is placed in place of smallest element, 1 is placed for second smallest element, and N-1 is placed for the largest element.
// Note: You don't have to return anything. You just have to change the given array.

class Solution{
public:	
	// Converts arr[0..n-1] to reduced form.
	void convert(int arr[], int n) {
	    map<int, int> res;
	    for(int i = 0; i < n; i++){
	        res[arr[i]]=i;
	    }
	    int i = 0;
	    for(auto it: res){
	        arr[it.second] = i++;
	    }
	}

};

// Driver Code
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.convert(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}