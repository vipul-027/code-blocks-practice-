#include<iostream>
 using namespace std; 
 int main()
   {
       int n, key, i; 
       cin>>n; 
 int a[1000];
 for( i=0; i<n; i++) {
     cin>>a[i];
 }
 cout<<"enter the element you want to search "<<endl;
 cin>>key;
     for(i=0; i<=n-1; i++)
      {
        if(a[i]==key)
           cout<<key<<" is found at "<<i+1<<" position"<<endl;
            if(i==n) 
            cout<<"key is not found in this array "<<endl;
      }
   }
