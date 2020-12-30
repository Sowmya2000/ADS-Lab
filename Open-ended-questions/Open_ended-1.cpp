
#include<iostream>
using namespace std; 
  
void findElements(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
    { 
        int count = 0; 
        for (int j = 0; j < n; j++) 
            if (arr[j] > arr[i]) 
                count++; 
  
        if (count >= 2) 
            cout << arr[i] << " "; 
    } 
} 
  
int main() 
{ 
    int arr[1000],n;
    cout << "Enter the number of elements to be inserted" << endl;
    cin >> n;
    cout << "Enter the array elements" << endl;
    for(int i=0;i<n;i++)
    {
    	cin >> arr[i];
	}
    findElements(arr, n); 
    return 0; 
} 
