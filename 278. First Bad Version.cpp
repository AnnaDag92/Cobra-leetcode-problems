#include <iostream>

bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start = 1;
        int mid;
        while (start <= n) {
            mid = start + (n - start) / 2;
            if (isBadVersion(mid))
                n = mid - 1;
            else
                start = mid + 1;
        }
        return start;
    }
};

int main()
{

}