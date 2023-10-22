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
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int t = 0; cin >> t;
//	int n, k;
//	while (t--) {
//		cin >> n >> k;
//		vector<int> v(n);
//		int op = 1e5;  // ��¼��������
//
//		for (int i = 0; i < n; i++) {
//			cin >> v[i];
//		}
//		int sum = 1;
//		for (int i = 0; i < n; i++) {
//			sum *= v[i];
//		}
//		if (sum % k == 0) {
//			cout << 0 << endl;
//			continue;
//		}
//		for (int i = 0; i < n; i++) {
//			int flag = 0;
//			while (v[i] % k != 0) {
//				v[i]++;
//				if (v[i] > 10) {
//					break;
//				}
//				flag++;
//			}
//			op = min(flag, op);  // ������С��������
//		}
//
//		cout << op << endl;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cmath>
#include<string>
#include<vector>
#include<list>
#include<queue>
#include<deque>
#include<stack>
#include<map>
#include<algorithm>
#include<iomanip>
typedef long long ll;

#define endl '\n'

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t = 0; cin >> t;
    int n, k;
    while (t--) {
        cin >> n >> k;
        vector<int> v(n);
        int op = 1e5;  // ��¼��������

        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        // �����������ĳ˻��Ƿ���Ա�k����
        ll prod = 1;
        for (int i = 0; i < n; i++) {
            prod *= v[i];
        }
        if (prod % k == 0) {
            cout << 0 << endl;
            continue;
        }

        for (int i = 0; i < n; i++) {
            int temp = v[i];
            int flag = 0;
            while (true) {
                ll newProd = (prod / v[i]) * temp;
                if (newProd % k == 0) {
                    break;
                }
                temp++;
                flag++;
                if (temp > 10) {  // ���������Ա�������ѭ��
                    flag = 1e5; // ����һ����ֵ
                    break;
                }
            }
            op = min(flag, op);  // ������С��������
        }

        cout << op << endl;
    }
    return 0;
}


