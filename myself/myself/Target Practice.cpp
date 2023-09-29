//#include <iostream>
//using namespace std;
//
//int main() {
//    int t;
//    cin >> t;
//
//    while (t--) {
//        char target[10][10];
//        int scores = 0;
//
//        for (int i = 0; i < 10; i++) {
//            for (int j = 0; j < 10; j++) {
//                cin >> target[i][j];
//            }
//        }
//
//        for (int i = 0; i < 10; i++) {
//            for (int j = 0; j < 10; j++) {
//                if (target[i][j] == 'X') {
//                    int point = min(min(i, 9 - i), min(j, 9 - j))+1; // 计算箭靶的环数
//                    scores +=  point; // 计算得分并累加
//                }
//            }
//        }
//
//        cout << scores << endl;
//    }
//
//    return 0;
//}
