class Solution {
public:
	vector<int> sortArray(vector<int>& nums) {
		int n = nums.size();
		vector<int> ans(n);
		mergeSort(nums, ans, 0, n);
		return ans;

	}

	void mergeSort(vector<int>& v, vector<int>& ans, int low, int high)//[low,High)
	{
		if (high - low < 2) {
			return;
		}
		else {
			int mid = (high + low) >> 1;
			mergeSort(v, ans, low, mid);
			mergeSort(v, ans, mid, high);

			//merge
			int i = low, j = low, k = mid;
			while (i < high && j < mid && k < high) {
				if (v[j] > v[k]) {
					ans[i++] = v[k++];
				}
				else {
					ans[i++] = v[j++];
				}

			}
			while (j < mid) {
				ans[i++] = v[j++];
			}
			while (k < high) {
				ans[i++] = v[k++];
			}
			for (i = low; i < high; i++) {
				v[i] = ans[i];

			}
		}
	}
	//�鲢����
	//ִ����ʱ��60 ms, ������ C++ �ύ�л�����40.87 % ���û�
		//�ڴ����ģ�15.6 MB, ������ C++ �ύ�л�����47.16 % ���û�
};
