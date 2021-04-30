//#include<iostream>
//#include<stack>
//#include <algorithm>
//#include<math.h>
//#include<vector>
//#include<string>
//using namespace std;
//
//string trans(string ans) {
//    long long i, j = 0;
//    int a[50];
//    string ans1;
//    i = std::stoll(ans);
//    while (i)
//    {
//        a[j] = i % 2;
//        i /= 2;
//        j++;
//
//    }
//    for (i = j - 1;i >= 0;i--)
//        ans1 += a[i] + '0';
//        
//    return ans1;
//}
//int add(string s1, string s2, int k) {
//    s1 = trans(s1);
//    s2 = trans(s2);
//    int mi = min(s1.length(), s2.length()),i=0;
//    for (i = 0;i < mi;i++) {
//        if (s1[i] != s2[i])
//            break;
//    }
//    k--;
//    if (i >= k)return 1;
//    return 0;
//}
//string fun1(string s) {
//    string ans;
//    int a = 0;
//    for (int i = 0;i < s.length();i++) {
//        if (s[i] != '.') {
//            ans += s[i];
//        }
//    }
//    return ans;
//}
//
//int main() {
//    int n, k=0;
//    cin >> n;
//    string temp ;
//    vector<string> ans(n);
//    cin >> temp;
//
//   
//    int a = 0, j = 0;
//    string temp2;
//    for (int i = 0;i < temp.length();i++) {
//        if (temp[i] == '.')
//            continue;
//        else if (temp[i] == '/'){
//            i++;
//            while (i < temp.length()) {
//                k = k * 10 + temp[i] - '0';
//                i++;
//            }
//        }
//        else {
//            temp2 += temp[i];
//        }
//    }
//    
//
//
//    for (int i = 0;i <n;i++) {
//        cin >> temp;
//        ans[i] = fun1(temp);
//
//    }
//    int num = 0;
//    for (int i = 0;i < n;i++) {
//        num += add(temp2, ans[i],k);
//    }
//    cout << num;
//    return 0;
//
//}