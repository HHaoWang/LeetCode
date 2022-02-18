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
					}
					else if (s[i+1]=='X')
					{
						num += 9;
						i++;
					}
					else
					{
						num += 1;
					}
				}
				else
				{
					num += 1;
				}
				break;
			case 'X':
				if (i + 1 < s.size())
				{
					if (s[i + 1] == 'L')
					{
						num += 40;
						i++;
					}
					else if (s[i + 1] == 'C')
					{
						num += 90;
						i++;
					}
					else
					{
						num += 10;
					}
				}
				else
				{
					num += 10;
				}
				break;
			case 'C':
				if (i + 1 < s.size())
				{
					if (s[i + 1] == 'D')
					{
						num += 400;
						i++;
					}
					else if (s[i + 1] == 'M')
					{
						num += 900;
						i++;
					}
					else
					{
						num += 100;
					}
				}
				else
				{
					num += 100;
				}
				break;
			default:
				break;
			}
			i++;
		}
		return num;
    }

	int better(string s) {
	
		//s = s.replace("IV", "a");
		//s = s.replace("IX", "b");
		//s = s.replace("XL", "c");
		//s = s.replace("XC", "d");
		//s = s.replace("CD", "e");
		//s = s.replace("CM", "f");

		/*int result = 0;
		for (int i = 0; i < s.length(); i++) {
			result += which(s.charAt(i));
		}
		return result;*/
	}

	int which(char ch) {
		switch (ch) {
		case 'I': return 1;
		case 'V': return 5;
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		case 'a': return 4;
		case 'b': return 9;
		case 'c': return 40;
		case 'd': return 90;
		case 'e': return 400;
		case 'f': return 900;
		}
		return 0;
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