/*
 * Created on Sat Apr 25 2020
 *
 * Title: Hackerearth - Cyclic Shits
 *
 * Author: Vatsal Mistry
 * Web: mistryvatsal.github.io
 */

// This problem was a part of the April Circuits '20 Challenge

#include <iostream>
using namespace std;
// defining custom datatype as INT_16 inorder to suffize requirement of positive
// number in 16 bit binary representation i.e 0 to 65535.
#define INT_16 unsigned short int

int main(){
    // # of test cases
    int tc;
    cin >> tc;
    // for each test case perform the logic
    while(tc--) {
        // take input from STDIN
        INT_16 N, M;
        char C;
        cin >> N >> M >> C;
        // if C is L, then do left circular shift
        // normally shift operator do not work in circular fashion , they drop the bits
        // the below implementation by ORing 2 different shifted binary nos, is a way to get
        // circular shift
        if(C == 'L') {
            N = (N << M) | (N >> (16 - M));
        }
        // if C is R, the do right circular shift
        else {
            N = (N >> M) | (N << (16 - M));
        }
        // print output to STDOUT
        cout << N << endl;
    }
    return 0;
}