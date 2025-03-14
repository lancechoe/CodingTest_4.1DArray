/*
문제
Professor M of JOI University teaches a course on computer programming. 30 students take the course and are numbered 1 to 30. 28 students have handed in their homework but the other two students have not yet. Write a program which, given the numbers of students who have handed in their homework, outputs the numbers of the students who have not handed in their homework.

입력
The input file contains 28 lines. Each line of the input file contains a number of a student who has handed in her/his homework. The numbers in the input file are between 1 and 30, inclusive, and distinct from each other. The numbers are given in no particular order.

출력
You should submit the output file which consists of two lines, and each of lines should contain the number of a student who has not handed in her/his homowork. The number in the first line should be less than the one in the second line.
*/

#include <iostream>
using namespace std;

int main(){
    int std[30];

    for(int i=0;i<30;i++){
        std[i] = 0;
    }
    
    int a;

    for(int i=0;i<28;i++){
        cin >> a;
        std[a-1] = 1;
    }

    for(int i=0;i<30;i++){
        if(std[i] == 0){
            cout << i+1 << "\n";
        }
    }
}