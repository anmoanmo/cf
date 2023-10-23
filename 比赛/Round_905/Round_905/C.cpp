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
//
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//
//    int t = 0; cin >> t;
//    int n, k;
//    int flg = 0, flg1 = 0, flg2 = 0;
//    while (t--) {
//        flg1 = 0;
//        flg2 = 0;
//        cin >> n >> k;
//        vector<int> v(n);
//        int op = 1e5;  // 记录操作次数
//
//        for (int i = 0; i < n; i++) {
//            cin >> v[i];
//        }
//
//        // 检查整个数组的乘积是否可以被k整除
//        ll sum = 1;
//        for (int i = 0; i < n; i++) {
//            sum = (sum * v[i]) % k; // 对k取模，避免溢出
//            if (sum == 0) {
//                break;
//            }
//        }
//        if (sum == 0) {
//            cout << 0 << endl;
//            continue;
//        }
//
//        for (int i = 0; i < n; i++) {
//            int temp = v[i];
//
//            if (k == 4) {
//                flg1 = 1;
//                flg2 = 0;
//                flg = 0;
//                for (int j = 0; j < n; j++) {
//
//                    if ((v[j] + 1) % 4 == 0) {
//                        flg2 = 1;
//                        cout << 1 << endl;
//                        break;
//                    }
//                }
//                for (int j = 0; j < n; j++) {
//
//                    if ((v[j]) % 2 == 0) {
//                        flg++;
//                    }
//                }
//                break;
//            }
//
//            int flag = 0;
//            while (v[i] % k) {
//                v[i]++;
//                flag++;
//            }
//            op = min(flag, op);  // 更新最小操作次数
//        }if (!flg2) {
//            if (flg1) {
//                if (flg % 2 == 1) {
//                    cout << 1 << endl;
//                    continue;
//                }
//                else {
//                    cout << 2 << endl;
//                    continue;
//                }
//            }
//            cout << op << endl;
//        }
//    }
//    return 0;
//}


