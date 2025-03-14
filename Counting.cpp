/*
Problem
Given a total of N integers, write a program to count how many times the integer v appears.

Input
The first line contains an integer N (1 ≤ N ≤ 100), representing the number of integers.
The second line contains N integers separated by spaces.
The third line contains the integer v that needs to be counted.
The given integers, including v, are between -100 and 100 (inclusive).
Output
Print the number of times v appears among the N given integers.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    int v;
    int a;
    int count = 0;
    
    cin >> n;

    int nums[n];

    for(int i=0;i<n;i++){
        cin >> v;
        nums[i] = v;
    }

    cin >> a;

    for(int i=0;i<n;i++){
        if(nums[i] == a){
            count ++;
        }
    }

    cout << count;

}