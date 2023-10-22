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
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n, k;
//        cin >> n >> k;
//
//        string s;
//        cin >> s;
//
//        map<char, int> m;
//        for (const char& c : s) {
//            m[c]++;
//        }
//
//        int odd = 0;
//
//        for (const auto& a : m) {
//            if (a.second % 2 != 0) {
//                odd++;
//            }
//        }
//
//        int judge = (odd > 0) ? odd - 1 : 0;//×îÉÙÒÆ³ý×Ö·ûÁ¿
//
//        if (judge <= k && ( n - (odd > 0))>=k) {
//            cout << "YES" << '\n';
//        }
//        else {
//            cout << "NO" << '\n';
//        }
//    }
//
//    return 0;
//}

