//#include<iostream>
//using namespace std;
//
//int main() {
//	int n, m,left, right,number=0;
//	cin >> n>>m;
//	int* vec = new int[n];
//	int* ans = new int[m];
//	for (int i = 0; i < n; i++)
//		cin >> vec[i];
//	for (int i = 0; i < m; i++) {
//		number = 0;
//		cin >> left>>right;
//		for (int i = 0; i < n; i++)
//			if (vec[i] >= left && vec[i] <= right){
//				number=i;
//		ans[i] = number;
//	}
//	for (int i = 0; i < m; i++)
//		cout << ans[i] << endl;
//	return 0;
//}