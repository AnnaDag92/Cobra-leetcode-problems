#include <iostream>

class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n == 1) return true;
        if (n < 3) return false;
        while (n > 1) {
            if (n % 3 == 0) n /= 3;
            else return false;
            cout << n;
        }
        return true;
    }
};

int main()
{

}