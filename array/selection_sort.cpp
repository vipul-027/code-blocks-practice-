#include<iostream>
 using namespace std;
 // selection sort 
  int selection_sort(int a[], int n)
   {
   	// find out the smallest element  in the unsorted part 
 for(int i=0; i<n-1; i++) {
     int min_index=i;
      for(int j=i; j<=n-1; j++) {
          if(a[j] < a[min_index]) {
                min_index=j;
      }
 }     
  // after this loop we can swap finally
  swap(a[i], a[min_index]);
   }
 }
 int main()
  {
  	int n, key;
  	   cin>>n;
  	    int a[1000];
  	     for(int i=0; i<n; i++) {
  	     	cin>>a[i];
  	     } 
       selection_sort(a, n);
        for(int i=0; i<n; i++) {
          cout<<a[i]<<",";
        }

  }
