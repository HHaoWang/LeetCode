#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;
        int count = 0;
        int t = x;
        if (t == 0) {
            count = 1;
        }
        else {
            while (t != 0) {
                t /= 10;
                count++;
            }
        }

        int* c = new int[count];

        int b = x;
        for (int i = 0;i < count;i++) {
            c[i] = b % 10;
            b /= 10;
        }
        for (int i = 0; i < count / 2; i++)
        {
            if (c[i] != c[count - i - 1])
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s = Solution();
    constexpr int size = 3;
    int cases[size]{ 32511523,123,13531 };
    for (int i = 0; i < size; i++)
    {
        cout << s.isPalindrome(cases[i]) << endl;
    }
}
