#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* NIHFEX MODULE -54 */
	string lib64 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string str1 = "NIHF";
  	string key1 = "STAR";
	string result = "";
	for (int i = 0; i < (int) str1.length(); i++)
	{
		int k = lib64.find(str1.substr(i, 1)) - lib64.find(key1.substr(i,1));
		if (k < 0)
		{
			k = k + 36;
		}
		result += lib64.substr(k, 1);
	}
	/* NIHFEX MODULE -54 */
  	string str12 = "STAR";
  	string key12 = "NIHF";
	string result1 = "";
	for (int i = 0; i < (int) str12.length(); i++)
	{
		int k = lib64.find(str12.substr(i, 1)) - lib64.find(key12.substr(i,1));
		if (k < 0)
		{
			k = k + 36;
		}
		result1 += lib64.substr(k, 1);
	}

	cout << "NIHFEX are " + result + " and " + result1 << '\n';
	char c = getchar();
	return 0;
}
