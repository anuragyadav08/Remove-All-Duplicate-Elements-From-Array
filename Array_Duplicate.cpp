
#include <iostream>
using namespace std;
int main() {
  
    int size,A[50];
   cout<<"Enter Size:";
   cin>>size;
   cout<<"Enter Array:";
   for(int i=0;i<size;i++)
   {
       cin>>A[i];
   }
   for(int i=0;i<size;i++)
   {
       for(int j=i+1;j<size;j++)
       {
           if(A[i]==A[j])
           {
               for(int k=j;k<size-1;k++)
               {
                   A[k]=A[k+1];
                   
               }
               size--;
               j--;
           }
       }
   }
   for(int i=0;i<size;i++)
   {
       cout<<A[i]<<" ";
   }

    return 0;
}