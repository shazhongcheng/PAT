#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {

	int N;
	string res = "";
	string str;
	cin >> N;
	getchar();
	for (int i = 0; i < N; i++) {
		getline(cin, str);
//		cout << str;
		for (int j = 0; j < 4; j++) {
			switch (str[0+j*4])
			{
				case 'A':
					if(str[2+j*4]=='T')
						res += '1';
					break;
				case 'B':
					if (str[2 + j * 4] == 'T')
						res += '2';
					break;
				case 'C':
					if (str[2 + j * 4] == 'T')
						res += '3';
					break;
				case 'D':
					if (str[2 + j * 4] == 'T')
						res += '4';
					break;
				default:
					break;
			}
		}
	}
	cout << res;
	return 0;
}
