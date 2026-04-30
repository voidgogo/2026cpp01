//#include <iostream>
//#include <cstring>  // string.h
//using namespace std;
//
//int myStrlen(const char* s) {
//	int count = 0;
//	while(s[count] != '\0') {  // while(s[count] != 0) {  // while(s[count] != NULL) {
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char s1[] = "ACE";  // array compact initializer
//	const char* ps1 = "ACE~~~";  // string literal
//	cout << s1 << '\n';
//	cout << ps1 << '\n';
//	//cout << strlen(s1) << '\n';
//	cout << strlen(&s1[0]) << '\n';
//	cout << strlen(ps1) << '\n';
//	cout << myStrlen(&s1[0]) << '\n';
//	cout << myStrlen(s1) << '\n';
//	cout << myStrlen(ps1) << '\n';
//
//	return 0;
//}