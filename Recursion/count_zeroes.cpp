#include <iostream>
using namespace std;

int countZeros(int n)
{
    // Write your code here
    static int count = 0;
    if (n == 0)
    {
        return 1;
    }
    if (n > 0)
    {

        if (n % 10 == 0)
            count++;
        countZeros(n / 10);
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
