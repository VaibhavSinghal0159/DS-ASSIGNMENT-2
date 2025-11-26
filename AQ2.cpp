#include<bits/stdc++.h>
using namespace std ;

int main () 
{
     int arr[7] = { 64 , 34 , 25 , 12 , 22 , 11 , 90} ; 

     for (int i = 5 ; i >= 0 ; i--){
        bool swapped = 0 ; 
        for (int j = 0 ; j <= i ; j++){
            if (arr[j] > arr[j+1]){
                swap (arr[j] ,arr[j+1]) ; 
                swapped = 1 ; 
            }
        }
     
     if (swapped == 0) break ; 
}

for (int i = 0 ; i < 7 ; i++){
    cout << arr[i] << " " ; 
}
return 0 ; 
}