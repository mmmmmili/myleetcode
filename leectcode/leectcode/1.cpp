//void Graph::TopologicalSort() {
//	int top = -1; //���Ϊ��Ķ���ջ��ʼ��
//	for (int i = 0;i < n;i++) //���Ϊ�㶥���ջ
//		if (count[i] == 0)
//		{
//			count[i] = top;top = i;
//		}
//	for (i = 0; i < n; i++) //�������n������
//		if (top == -1) { //��;ջ��,ת��
//			cout << ���������л�·(����)" << endl;
//				return;
//		}
//		else { //������������
//			int j = top;top = count[top]; //��ջ
//			cout << j << endl; //���
//			Edge<float>* l = NodeTable[j].adj;
//			while (l) {//ɨ��ö���ĳ��߱�
//				int k = l��dest;
//				//��һ����
//				if (--count[k] == 0)
//					//�ö�����ȼ�һ
//				{
//					count[k] = top;top = k;
//				}
//				//������
//				l = l��link
//					;
//			}
//		}
//}