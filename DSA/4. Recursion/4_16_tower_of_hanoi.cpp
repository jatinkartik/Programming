#include <bits/stdc++.h>
using namespace std;
void towerOfHanoi(int a, char tower1, char tower2, char tower3)
{
    if (a == 1)
    {
        cout << "Move " << a << " " << tower1 << " to " << tower3 << endl;
        return;
    }
    towerOfHanoi(a - 1, tower1, tower3, tower2);

    cout << "Move " << a << " " << tower1 << " to " << tower3 << endl;
    towerOfHanoi(a - 1, tower2, tower1, tower3);
}
int main()
{
    towerOfHanoi(3, 'a','b','c');
    cout << endl;
    return 0;
}

// why code has segmentation fault?
// time complexity: O(2^n)
// Aux Space: O(1)
// space complexity: O(2^n)
//
// output for a=3  :
// Move 1 a to c
// Move 2 a to b
// Move 1 c to b
// Move 3 a to c
// Move 1 b to a
// Move 2 b to c
// Move 1 a to c
// 
// output for a=2  :
// Move 1 a to b
// Move 2 a to c
// Move 1 b to c
//
// output for a=1  :
// Move 1 a to c
//
// output for a=0  :
//
// time complexity: O(2^n)
// Aux Space: O(1)
// space complexity: O(2^n)
//
// arithmatic progression:
// sum of n terms = n*(n+1)/2
// artihmatic progression when difference is 2