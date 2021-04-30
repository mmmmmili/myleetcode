//void Graph::TopologicalSort() {
//	int top = -1; //入度为零的顶点栈初始化
//	for (int i = 0;i < n;i++) //入度为零顶点进栈
//		if (count[i] == 0)
//		{
//			count[i] = top;top = i;
//		}
//	for (i = 0; i < n; i++) //期望输出n个顶点
//		if (top == -1) { //中途栈空,转出
//			cout << “网络中有回路(有向环)" << endl;
//				return;
//		}
//		else { //继续拓扑排序
//			int j = top;top = count[top]; //退栈
//			cout << j << endl; //输出
//			Edge<float>* l = NodeTable[j].adj;
//			while (l) {//扫描该顶点的出边表
//				int k = l→dest;
//				//另一顶点
//				if (--count[k] == 0)
//					//该顶点入度减一
//				{
//					count[k] = top;top = k;
//				}
//				//减至零
//				l = l→link
//					;
//			}
//		}
//}