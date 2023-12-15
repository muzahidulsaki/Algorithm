#include<bits/stdc++.h>
using namespace std;

 int main()
 {

         int n;
         cin>> n;
         int arr[n];
         for(int i=0; i<n; i++)
         {
             cin>> arr[i];
         }
         sort(arr, arr+n);
         cout<< "Here is sorted array : ";
         for(int i=0; i<n; i++)
         {
             cout<< arr[i] << " ";
         }
         cout<< endl;
         int target;
         cout<< "Search the element: ";
         cin>> target;

         int low=0;
         int high = n-1;
         int index = -1; // not found

         while(low <= high)
         {
             int mid = low + (high-low)/ 2; // for mid value

             if(arr[mid] == target)
             {
                 index = mid;
                 break;
             }
             else if(arr[mid]>target)
             {
                 high = mid-1;
             }
             else
             {
                 low = mid+1;
             }
         }

         if(index != -1)
         {
             cout<< "Element " << target << " found at index "<< index+1 << endl;
         }
         else
         {
             cout<< "Not found" ;
         }

}


