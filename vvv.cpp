#include<iostream>
using namespace std;
class array
{
	public:
		int arr[100];
		int n;
		void input()
		{
			cout<<"enter no. of elements"<<endl;
			cin>>n;
			cout<<"enter"<<n<<"elements"<<endl;
			for(int i=0;i<n;i++)
			{
				cin>>arr[i];
			}
		}
		void sort()
		{
			for (int i = 0; i < n - 1; i++) 
			{
            	for (int j = 0; j < n - i - 1; j++) 
				{
                	if (arr[j] > arr[j + 1]) 
					{
                    	// Swap
                        int temp = arr[j];
                    	arr[j] = arr[j + 1];
                    	arr[j + 1] = temp;
                	}
           		}
            }
		}
		cout << "Sorted array: ";
        for (int i = 0; i < n; i++) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;
    }
		void search()
		{
			int s;
			cout<<"enter element you want to search"<<endl;
			cin>>s;
			int low = 0, high = n - 1;
        	bool found = false;

       		 while (low <= high) 
			{
            	int mid = (low + high) / 2;

           	 	if (arr[mid] == s) 
				{
              		cout << "Element found at index " << mid << endl;
                	found = true;
               		break;
           		} 
				else if (s<arr[mid]) 
				{
                	low = mid - 1;
            	}
				else 
				{
            		high = mid + 1;
            	}	
    		}
    		if (!found) 
			{
            	cout << "Element not found in the array." << endl;
        	}	
		}
};
int main()
{
	array a;
	a.input();
	a.search();
	return 0;
}
