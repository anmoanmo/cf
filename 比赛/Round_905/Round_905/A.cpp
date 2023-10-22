//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<cmath>
//#include<string>
//#include<vector>
//#include<list>
//#include<queue>
//#include<deque>
//#include<stack>
//#include<map>
//#include<algorithm>
//#include<iomanip>
//typedef long long ll;
//
//#define endl '\n'
//
//using namespace std;
//const int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0; cin >> t;
//	int flag = 0;//指针
//	int count = 0;//计数
//	while (t--) {
//		string str;
//		cin >> str;
//		flag = 0;//指针
//		count = 0;//计数
//		for (int i = 0; i < 4; i++) {
//
//			while ((str[i]-'0') != arr[flag]) {
//				if ((str[i] - '0') == 0 && arr[flag] != 0) {
//					flag++;
//					count++;
//				}
//				if ((str[i] - '0') != 0 && arr[flag] == 0) {
//					flag--;
//					count++;
//
//				}
//				if ((str[i] - '0') > arr[flag]&& (str[i] - '0')) {
//					flag++;
//					count++;
//				}
//				else if ((str[i] - '0') < arr[flag] && (str[i] - '0')) {
//					flag--;
//					count++;
//				}
//
//			}
//		}
//		cout << count +4 << endl;
//	}
//	return 0;
//}


