#include <cstring>
#include <iostream>
using namespace std;

int myStrcmp(const char* a,const char* b) {
	int i = 0;
	while (a[i] != '\0' && b[i] != '\0') {
		if (a[i] != b[i])  // 문자열이 다르다
			if (a[i] - b[i] < 0)
				return -1;
			else if (a[i] - b[i] > 0)
				return 1;
		i++;
	}
	if (a[i] < b[i])
		return -1;
	else if (a[i] > b[i])
		return 1;
	else 
		return 0; // 문자열이 같다.
}
int main()
{
	const char* s1 = "Hi Daelim";
	const char* s2 = "Hi Daelim";
	cout << strcmp(s1, s2) << endl;
	//cout << strncmp(s1, s2, 2) << endl;
	cout << myStrcmp(s1, s2) << endl;

	return 0;
}