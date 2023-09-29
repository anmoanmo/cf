//#include<iostream>
//#include<stdio.h>
//#include<map>
//#include<set>
//#include<algorithm>
//#include<vector>
//#include<list>
//using namespace std;
//
//struct players {
//	int s;
//	int e;
//};
//
//int main() {
//	int t = 0; cin >> t;
//	while (t--) {
//		int w = 0;
//		int person = 0; cin >> person;
//		players player[100];
//
//		for (int i = 0; i < person; i++) {
//			cin >> player[i].s >> player[i].e;
//		}
//		players flag = player[0]; bool flag1 = true;
//		for (int i = 1; i < person; i++) {
//			if (player[i].s >= flag.s) {
//				if (player[i].e >= flag.e) {
//					flag1 = false;
//					break;
//				}
//			}
//		}
//		if (flag1) {
//			cout << flag.s << endl;
//			continue;
//		}
//		else {
//			cout << -1 << endl;
//			continue;
//		}
//	}
//}