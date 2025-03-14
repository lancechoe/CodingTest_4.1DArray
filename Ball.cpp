/*
Problem
Dohyeon has N baskets, each labeled with a number from 1 to N. He also has an unlimited number of balls, each labeled with a number from 1 to N.

At the start, all baskets are empty, and each basket can hold only one ball at a time.

Dohyeon will perform M operations where he places balls into specific baskets.

Each operation specifies a range of baskets [i, j] and a ball number k.
All baskets in the range [i, j] will contain the ball labeled k.
If a basket already contains a ball, it will be replaced with the new one.
Write a program that determines the number on the ball in each basket after all M operations.

Input
The first line contains two integers: N (1 ≤ N ≤ 100) and M (1 ≤ M ≤ 100).
The next M lines each contain three integers: i, j, k
This means all baskets from i to j (inclusive) will contain a ball labeled k.
(1 ≤ i ≤ j ≤ N, 1 ≤ k ≤ N)
Dohyeon processes the operations in order.

Output
Print the numbers on the balls in baskets 1 to N, separated by spaces.
If a basket is empty, print 0.
*/

#include <iostream>
using namespace std;

int main(){
    int N, M, a, b, c;

    cin >> N >> M;

    int basket[N];
    
    for(int i=0;i<N;i++){
        basket[i] = 0;
    }

    for(int i=0;i<M;i++){
        cin >> a >> b >> c;

        for(int j=a;j<b+1;j++){
            basket[j-1] = c;
        }
    }

    for(int i=0;i<N;i++){
        if(i < N-1){
        cout << basket[i] << " ";
        }
        else{
            cout << basket[i];
        }
    }
}