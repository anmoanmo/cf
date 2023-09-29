//#include<iostream>
//#include<string>
//
//using namespace std;
//
//int main() {
//	int t = 0;
//	cin >> t;
//	while (t--) {
//		int a[10] = { 0 };
//		int n = 0, min = 1000, flag = 0;
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> a[i];
//			if (a[i] < min) {
//				min = a[i];
//				flag = i;
//			}
//		}a[flag] = min + 1;
//		long sum = 1;
//		for (int i = 0; i < n; i++) {
//			sum *= a[i];
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}