//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool canDivide(vector<int>& a, vector<int>& b, vector<int>& c) {
//    int n = a.size();
//
//    // Sort the array 'a' in decreasing order.
//    sort(a.begin(), a.end(), greater<int>());
//
//    // Add the first element of 'a' to 'b'.
//    b.push_back(a[0]);
//
//    // Iterate through the remaining elements of 'a'.
//    for (int i = 1; i < n; i++) {
//        bool added = false;
//
//        // Try to add 'a[i]' to 'b'.
//        for (int j = 0; j < b.size(); j++) {
//            if (a[i] % b[j] != 0) {
//                b.push_back(a[i]);
//                added = true;
//                break;
//            }
//        }
//
//        // If 'a[i]' couldn't be added to 'b', add it to 'c'.
//        if (!added) {
//            c.push_back(a[i]);
//        }
//    }
//
//    // Check if both 'b' and 'c' are non-empty.
//    if (b.empty() || c.empty()) {
//        return false;
//    }
//
//    return true;
//}
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        int n;
//        cin >> n;
//        vector<int> a(n);
//
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//        }
//
//        vector<int> b, c;
//
//        if (canDivide(a, b, c)) {
//            cout << b.size() << " " << c.size() << endl;
//            for (int x : b) {
//                cout << x << " ";
//            }
//            cout << endl;
//            for (int x : c) {
//                cout << x << " ";
//            }
//            cout << endl;
//        }
//        else {
//            cout << -1 << endl;
//        }
//    }
//
//    return 0;
//}
