//#include<iostream>
//#include<vector>
//#include<fstream>
//using namespace std;
//class Solution {
//public:
//	void insertSort(vector<int>& s) {
//		int size = s.size(),temp=0;
//       
//		for (int i = 1;i < size;i++) {
//			temp = i;
//            //������Ѱ����λ�ã�������temp��
//			for (int j = 0;j < i;j++) {
//				if (s[j] < s[i]) {
//					temp = j;
//					break;
//				}
//			}
//            //��temp��i��������ƶ���Ȼ�����
//			for (int j = i;j > temp;j--)
//				swap(s[j], s[j - 1]);
//		}
//		return;
//	}
//	void quickSort(vector<int>& s) {
//		quickSort(s, 0, s.size());
//	}
//	/// <summary>
//	/// sort in [low,high)
//	/// </summary>
//	/// <param name="s"></param>
//	/// <param name="low"></param>
//	/// <param name="high"></param>
//	void quickSort(vector<int>& s,int low,int high) {
//        if (high-1 <= low) return;
//        int i = low;
//        int j = high;
//        int key = s[low];
//        while (true)
//        {
//            /*���������ұ�keyС��ֵ*/
//            while (s[++i] > key)
//            {
//                if (i == high-1) {
//                    break;
//                }
//            }
//            /*���������ұ�key���ֵ*/
//            while (s[--j] < key)
//            {
//                if (j == low) {
//                    break;
//                }
//            }
//            if (i >= j) break;
//            /*����i,j��Ӧ��ֵ*/
//            swap(s[i], s[j]);
//        }
//        /*����ֵ��j��Ӧֵ����*/
//        swap(s[low], s[j]);
//  
//        quickSort(s, low, j);
//        quickSort(s, j + 1, high);
//	}
//    int binarySearchRui(vector<int>& s,int target) {
//        return binarySearchRui(s, target, 0, s.size());
//    }
//    /// <summary>
//    /// search in decrement arrays[low,high)
//    /// </summary>
//    /// <param name="s"></param>
//    /// <param name="target"></param>
//    /// <param name="low"></param>
//    /// <param name="high"></param>
//    int binarySearchRui(vector<int>& s, int target,int low,int high) {
//        if (low >= high)return low - 1;
//        int middle = (low+high)/2;
//        if (s[middle] >= target) {
//            return binarySearchRui(s, target, middle + 1, high);
//        }
//        else {
//            return binarySearchRui(s, target, low, middle);
//        }
//    }
//    //����Ƕ���򷵻������ֵ��±꣬���û�����򷵻ز�С��target����С���±�
//    int binarySearchNoneRui(vector<int>& s,int target) {
//        int low = 0, high = s.size(), middle = 0;
//        while (low < high) {
//            middle = (low + high) / 2;
//            if (s[middle] >= target)
//                low = middle + 1;
//            else 
//                high = middle;
//        }
//        return low - 1;
//        
//    }
//};
//int main() {
//	Solution b;
//	vector<int> a{ 13,15,124,28,44,28,26,5,71 };
//	//b.insertSort(a);
//    b.quickSort(a);
//    b.binarySearchNoneRui(a, 16);
//	return 0;
//}