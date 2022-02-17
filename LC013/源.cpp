#include<iostream>

using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        int i = 0;
		int num = 0;
		while (i<s.size())
		{
			switch (s[i])
			{
			case 'V':
				num += 5;
				break;
			case 'L':
				num += 50;
				break;
			case 'D':
				num += 500;
				break;
			case 'M':
				num += 1000;
				break;
			case 'I':
				if (i+1<s.size())
				{
					if (s[i+1]=='V')
					{
						num += 4;
						i++;
						continue;
					}
					if (s[i+1]=='X')
					{
						num += 9;
						i++;
						continue;
					}
				}
				num += 1;
				break;
			case 'X':
				if (i + 1 < s.size())
				{
					if (s[i + 1] == 'L')
					{
						num += 40;
						i++;
						continue;
					}
					if (s[i + 1] == 'C')
					{
						num += 90;
						i++;
						continue;
					}
				}
				num += 10;
				break;
			case 'C':
				if (i + 1 < s.size())
				{
					if (s[i + 1] == 'D')
					{
						num += 400;
						i++;
						continue;
					}
					if (s[i + 1] == 'M')
					{
						num += 900;
						i++;
						continue;
					}
				}
				num += 1;
				break;
			default:
				break;
			}
			i++;
		}
		return num;
    }
};

int main() {
	Solution s = Solution();
	constexpr int size = 7;
	string cases[size]{ "XLIX","CMXCIX","III","IV","IX","LVIII","MCMXCIV"};
	for (int i = 0; i < size; i++)
	{
		cout << s.romanToInt(cases[i]) << endl;
	}
	return 0;
}