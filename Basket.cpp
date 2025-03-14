/*
Problem
Dohyun has N baskets, each labeled from 1 to N in order. The baskets are placed in a row, numbered from left to right.

Dohyun will perform M operations to reverse the order of specific segments of baskets.

Given these operations, determine the final order of the baskets after all M reversals.

Input
First line: Two integers N (1 ≤ N ≤ 100) and M (1 ≤ M ≤ 100).
Next M lines: Each contains two integers i and j (1 ≤ i ≤ j ≤ N), representing the range of baskets to reverse.
Output
Print the final order of baskets from left to right, separated by spaces.
*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, M;
    int a, b;
    int swap = 0;

    cin >> N >> M;

    int basket[N];
    vector<int> reverse;

    for(int i=0;i<N;i++){
        basket[i] = i+1;
    }

    for(int i=0;i<M;i++){
        cin >> a >> b;

        if(a != b){
            while(b > a){
                swap = basket[a-1];
                basket[a-1] = basket[b-1];
                basket[b-1] = swap;

                b--;
                a++;
            }
        }

    }

    for(int i=0;i<N;i++){
        cout << basket[i] << " ";
    }
}

/*
5 4
1 2
3 4
1 4
2 2

1 2 3 4 5
2 1 3 4 5
2 1 4 3 5
3 4 1 2 5
*/