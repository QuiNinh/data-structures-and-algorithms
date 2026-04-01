#include <iostream>
using namespace std;

int main(){
    int m,n;
    cout <<"Enter number of elements of nums1 array: ";
    cin >> m;
    cout <<"Enter number of elements of nums2 array: ";
    cin >> n;    
    int nums1[m+n];
    int nums2[n];
    cout <<"Enter the value of each element of nums1 array: "; 
    for (int i = 0; i < m; i++) {
        cin >> nums1[i];
    } 
    for (int i = m; i < m + n; i++) {
        nums1[i] = 0;
    } 
    cout << "Enter the value of each element of nums1 array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums2[i];
    }   
    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;
    while(i >= 0 && j >= 0){       
        if(nums1[i] > nums2[j]){
            nums1[k] = nums1[i];
            i--;
        }
        else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }
    while(j >= 0){
        nums1[k] = nums2[j];
        j--;
    }
    cout <<" Array nums1 final: ";
    for(int i = 0; i <= m + n - 1; i++){
            cout << nums1[i] << " ";
    }
}