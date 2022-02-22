Write a recursive function that returns the sum of the digits of a given integer.
Input format :
Integer N
Output format :
Sum of digits of N

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    // Write your code here
    if(n==0)
        return 0;
    int ans=(n%10)+sumOfDigits(n/10);
    return ans;

}


int main() {
   int n;
   cin >> n;
   cout << sumOfDigits(n) << endl;
}
