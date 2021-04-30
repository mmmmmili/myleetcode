//#include <iostream>
//#include<vector>
//using namespace std;
//
//const int DefaultVertices = 30;
//int n, m;
//template <class T, class E>
//struct Edge { // �߽��Ķ���
//	int dest; // �ߵ���һ����λ��
//	Edge<T, E>* link; // ��һ������ָ��
//};
//
//template <class T, class E>
//struct Vertex { // ����Ķ���
//	T data; // ���������
//	Edge<T, E>* adj; // �������ͷָ��
//};
//
//template <class T, class E>
//class Graphlnk {
//public:
//	const E maxValue = 100000; // ����������ֵ��=�ޣ�
//	Graphlnk(int sz = DefaultVertices); // ���캯��
//	~Graphlnk(); // ��������
//	void inputGraph(int count[]); // �����ڽӱ��ʾ��ͼ
//	void outputGraph(); // ���ͼ�е����ж���ͱ���Ϣ
//	T getValue(int i); // ȡλ��Ϊi�Ķ����е�ֵ
//	bool insertVertex(const T& vertex); // ���붥��
//	bool insertEdge(int v1, int v2); // �����
//	bool removeVertex(int v); // ɾ������
//	bool removeEdge(int v1, int v2); // ɾ����
//	int getFirstNeighbor(int v); // ȡ����v�ĵ�һ���ڽӶ���
//	int getNextNeighbor(int v, int w); // ȡ����v���ڽӶ���w����һ�ڽӶ���
//	int getVertexPos(const T vertex); // ��������vertex��ͼ�е�λ��
//	int numberOfVertices(); // ��ǰ������
//private:
//	int maxVertices; // ͼ�����Ķ�����
//	int numEdges; // ��ǰ����
//	int numVertices; // ��ǰ������
//	Vertex<T, E>* nodeTable; // �����(���������ͷ���)
//};
//
//// ���캯��:����һ���յ��ڽӱ�
//template <class T, class E>
//Graphlnk<T, E>::Graphlnk(int sz) {
//	maxVertices = sz;
//	numVertices = 0;
//	numEdges = 0;
//	nodeTable = new Vertex<T, E>[maxVertices]; // �������������
//	if (nodeTable == NULL) {
//		cerr << "�洢�ռ�������" << endl;
//		exit(1);
//	}
//	for (int i = 0; i < maxVertices; i++)
//		nodeTable[i].adj = NULL;
//}
//
//// ��������
//template <class T, class E>
//Graphlnk<T, E>::~Graphlnk() {
//	// ɾ�����������еĽ��
//	for (int i = 0; i < numVertices; i++) {
//		Edge<T, E>* p = nodeTable[i].adj; // �ҵ����Ӧ������׽��
//		while (p != NULL) { // ���ϵ�ɾ����һ�����
//			nodeTable[i].adj = p->link;
//			delete p;
//			p = nodeTable[i].adj;
//		}
//	}
//	delete[]nodeTable; // ɾ�����������
//}
//
//// �����ڽӱ��ʾ��ͼ
//template <class T, class E>
//void Graphlnk<T, E>::inputGraph(int count[]) {
//	int n, m; // �洢�������ͱ���
//	int i, j, k;
//	T e1, e2; // ����
//
//	
//	cin >> n >> m;
//	
//	for (i = 0; i < n; i++) {
//		
//		insertVertex(i+1); // ���붥��
//	}
//
//	
//	i = 0;
//	int l = 0;
//	while (i < m) {
//		cin >> e1 >> e2;
//		j = getVertexPos(e1);
//		k = getVertexPos(e2);
//		if (j == -1 || k == -1)
//			l++;
//		else {
//			insertEdge(j, k); // �����
//			count[k]++; // ��¼���
//			i++;
//		}
//	} // while
//}
//
//// �������ͼ�е����ж���ͱ���Ϣ
//template <class T, class E>
//void Graphlnk<T, E>::outputGraph() {
//	int n, m, i;
//	T e1, e2; // ����
//	Edge<T, E>* p;
//
//	n = numVertices;
//	m = numEdges;
//	cout << "ͼ�еĶ�����Ϊ" << n << ",����Ϊ" << m << endl;
//	for (i = 0; i < n; i++) {
//		p = nodeTable[i].adj;
//		while (p != NULL) {
//			e1 = getValue(i); // �����<i, p->dest>
//			e2 = getValue(p->dest);
//			cout << "<" << e1 << ", " << e2 << ">" << endl;
//			p = p->link; // ָ����һ���ڽӶ���
//		}
//	}
//}
//
//// ȡλ��Ϊi�Ķ����е�ֵ
//template <class T, class E>
//T Graphlnk<T, E>::getValue(int i) {
//	if (i >= 0 && i < numVertices)
//		return nodeTable[i].data;
//	return NULL;
//}
//
//// ���붥��
//template <class T, class E>
//bool Graphlnk<T, E>::insertVertex(const T& vertex) {
//	if (numVertices == maxVertices) // ������������ܲ���
//		return false;
//	nodeTable[numVertices].data = vertex; // �����ڱ�����
//	numVertices++;
//	return true;
//}
//
//// �����
//template <class T, class E>
//bool Graphlnk<T, E>::insertEdge(int v1, int v2) {
//	if (v1 == v2) // ͬһ���㲻����
//		return false;
//	if (v1 >= 0 && v1 < numVertices && v2 >= 0 && v2 < numVertices) {
//		Edge<T, E>* p = nodeTable[v1].adj; // v1��Ӧ�ı�����ͷָ��
//		while (p != NULL && p->dest != v2) // Ѱ���ڽӶ���v2
//			p = p->link;
//		if (p != NULL) // �Ѵ��ڸñߣ�������
//			return false;
//		p = new Edge<T, E>; // �����½��
//		p->dest = v2;
//		p->link = nodeTable[v1].adj; // ����v1������
//		nodeTable[v1].adj = p;
//		numEdges++;
//		return true;
//	}
//	return false;
//}
//
//// ����ͼɾ��������鷳
//template <class T, class E>
//bool Graphlnk<T, E>::removeVertex(int v) {
//	if (numVertices == 1 || v < 0 || v > numVertices)
//		return false; // ��ջ򶥵�ų�����Χ
//
//	Edge<T, E>* p, * s;
//	// 1.�������v�ı�������w ��<v,w>
//	while (nodeTable[v].adj != NULL) {
//		p = nodeTable[v].adj;
//		nodeTable[v].adj = p->link;
//		delete p;
//		numEdges--; // �붥��v������ı�����1
//	} // while����
//	// 2.���<w, v>����v�йصı�
//	for (int i = 0; i < numVertices; i++) {
//		if (i != v) { // ���ǵ�ǰ����v
//			s = NULL;
//			p = nodeTable[i].adj;
//			while (p != NULL && p->dest != v) {// �ڶ���i����������v�Ķ���
//				s = p;
//				p = p->link; // ������
//			}
//			if (p != NULL) { // �ҵ���v�Ľ��
//				if (s == NULL) { // ˵��p��nodeTable[i].adj
//					nodeTable[i].adj = p->link;
//				}
//				else {
//					s->link = p->link; // ����p����һ��������Ϣ
//				}
//				delete p; // ɾ�����p
//				numEdges--; // �붥��v������ı�����1
//			}
//		}
//	}
//	numVertices--; // ͼ�Ķ��������1
//	nodeTable[v].data = nodeTable[numVertices].data; // �,��ʱnumVertices����ԭ��numVerticesС1�����ԣ����ﲻ��ҪnumVertices-1
//	nodeTable[v].adj = nodeTable[numVertices].adj;
//	// 3.Ҫ����Ķ����Ӧ��λ�ø�д
//	for (int i = 0; i < numVertices; i++) {
//		p = nodeTable[i].adj;
//		while (p != NULL && p->dest != numVertices) // �ڶ���i����������numVertices�Ķ���
//			p = p->link; // ������
//		if (p != NULL) // �ҵ���numVertices�Ľ��
//			p->dest = v; // ���ڽӶ���numVertices�ĳ�v
//	}
//	return true;
//}
//
//// ɾ����
//template <class T, class E>
//bool Graphlnk<T, E>::removeEdge(int v1, int v2) {
//	if (v1 != -1 && v2 != -1) {
//		Edge<T, E>* p = nodeTable[v1].adj, * q = NULL;
//		while (p != NULL && p->dest != v2) { // v1��Ӧ���������ұ�ɾ����
//			q = p;
//			p = p->link;
//		}
//		if (p != NULL) { // �ҵ���ɾ���߽��
//			if (q == NULL) // ɾ���Ľ���Ǳ�������׽��
//				nodeTable[v1].adj = p->link;
//			else
//				q->link = p->link; // ���ǣ���������
//			delete p;
//			return true;
//		}
//	}
//	return false; // û���ҵ����
//}
//
//// ȡ����v�ĵ�һ���ڽӶ���
//template <class T, class E>
//int Graphlnk<T, E>::getFirstNeighbor(int v) {
//	if (v != -1) {
//		Edge<T, E>* p = nodeTable[v].adj; // ��Ӧ�����һ���߽��
//		if (p != NULL) // ���ڣ����ص�һ���ڽӶ���
//			return p->dest;
//	}
//	return -1; // ��һ���ڽӶ��㲻����
//}
//
//// ȡ����v���ڽӶ���w����һ�ڽӶ���
//template <class T, class E>
//int Graphlnk<T, E>::getNextNeighbor(int v, int w) {
//	if (v != -1) {
//		Edge<T, E>* p = nodeTable[v].adj; // ��Ӧ�����һ���߽��
//		while (p != NULL && p->dest != w) // Ѱ���ڽӶ���w
//			p = p->link;
//		if (p != NULL && p->link != NULL)
//			return p->link->dest; // ������һ���ڽӶ���
//	}
//	return -1; // ��һ���ڽӶ��㲻����
//}
//
//// ��������vertex��ͼ�е�λ��
//template <class T, class E>
//int Graphlnk<T, E>::getVertexPos(const T vertex) {
//	for (int i = 0; i < numVertices; i++)
//		if (nodeTable[i].data == vertex)
//			return i;
//	return -1;
//}
//
//// ��ǰ������
//template <class T, class E>
//int Graphlnk<T, E>::numberOfVertices() {
//	return numVertices;
//}
//vector<int> ans1, ans2;
//template <class T, class E>
//bool TopLogicalSort(Graphlnk<T, E>& G) {
//	int i, w, v;
//	int n; // ������
//	int* count = new int[DefaultVertices]; // �������
//	int top = -1;
//
//	// ����
//	for (i = 0; i < DefaultVertices; i++)
//		count[i] = 0;
//	// ���붥��ͱ�
//	G.inputGraph(count);
//	n = G.numberOfVertices(); // ��ȡͼ�Ķ�����
//	for (i = 0; i < n; i++) { // ����������ж���
//		if (count[i] == 0) { // ���Ϊ0�Ķ����ջ
//			count[i] = top;
//			top = i;
//		}
//	}
//	// ���������������n������
//	
//	for (i = 0; i < n; i++) {
//		if (top == -1) { // ��ջ
//			cout << "meijiuledengsiba!\n";
//			return false;
//		}
//		else {
//			v = top;
//			top = count[top];
//			ans1.push_back(G.getValue(v)) ; // ������Ϊ0�Ķ���
//			w = G.getFirstNeighbor(v); // �ڽӶ���
//			while (w != -1) { // ɨ����߱�
//				if (--count[w] == 0) { // �ڽӶ�����ȼ�1��������Ϊ0���ջ
//					count[w] = top;
//					top = w;
//				}
//				w = G.getNextNeighbor(v, w); // �ֵܽ�㣨ȡ����v���ڽӶ���w����һ�ڽӶ��㣩
//			}
//		}
//	}
//	
//	
//	cout << endl;
//	return true;
//}
//template <class T, class E>
//bool TopLogicalSort2(Graphlnk<T, E>& G) {
//	int i, w, v;
//	int n; // ������
//	int* count = new int[DefaultVertices]; // �������
//	int top = -1;
//
//	
//	n = G.numberOfVertices(); // ��ȡͼ�Ķ�����
//	for (i = n - 1; i >= 0;i--) { // ����������ж���
//		if (count[i] == 0) { // ���Ϊ0�Ķ����ջ
//			count[i] = top;
//			top = i;
//		}
//	}
//	// ���������������n������
//
//	for (i = 0; i < n; i++) {
//		if (top == -1) { // ��ջ
//		
//			return false;
//		}
//		else {
//			v = top;
//			top = count[top];
//			ans1.push_back(G.getValue(v)); // ������Ϊ0�Ķ���
//			w = G.getFirstNeighbor(v); // �ڽӶ���
//			while (w != -1) { // ɨ����߱�
//				if (--count[w] == 0) { // �ڽӶ�����ȼ�1��������Ϊ0���ջ
//					count[w] = top;
//					top = w;
//				}
//				w = G.getNextNeighbor(v, w); // �ֵܽ�㣨ȡ����v���ڽӶ���w����һ�ڽӶ��㣩
//			}
//		}
//	}
//
//
//	cout << endl;
//	return true;
//}
//
//
//int main(int argc, const char* argv[]) {
//	Graphlnk<int, int> G; // ����ͼ����
//
//	bool a1=TopLogicalSort(G); // AOV�������������
//	
//	if (a1 == false) {
//		return 0;
//	}
//	bool a2 = TopLogicalSort2(G);
//	bool flag = true;
//	if (a1 == true && a2 == true) {		
//		for (int i = 0;i < ans1.size();i++) {
//			if (ans1[i] != ans2[i]) {
//				cout << "not unique";
//				flag = false;
//			}
//		}
//	}
//	if (flag == true) {
//		cout << "unique";
//	}
//	if (a1==true)
//		for (int i:ans1)
//			cout << i<< " ";
//	return 0;
//}