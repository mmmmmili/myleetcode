////template <class Type>
////class TreeIterator {
////public:
////	TreeIterator(const BinaryTree<Type>& BT) :T(BT), current(NULL) { }
////	virtual~TreeIterator() { }
////	virtual void First() = 0;
////	virtual void operator++ () = 0;
////	int operator + () const { return current != NULL; }
////	const Type& operator ( )const;
////protected:
////	const BinaryTree <Type>& T;
////	const BinTreeNode <Type>* current;
////private:
////	TreeIterator(const TreeIterator&) { }
////	TreeIterator& operator =(const TreeIterator&) const;
////};
////template <class Type> struct stkNode {
////	//�������ʹ�õĵݹ鹤��ջ��㶨��
////	const BinTreeNode<Type>* Node;
////	//���ָ��
////	int PopTim;
////	//��ջ����
////	stkNode(const BinTreeNode<Type>* N = NULL) :Node(N), PopTim(0) { }
////};
////
////template <class Type>
////class PostOrder : public TreeIterator<Type> {
////public:
////	PostOrder(const  BinaryTree<Type>& BT);
////	~PostOrder() { }
////	void First();
////	//��λ����������µ�һ�����
////	void operator++ ();
////	//��λ����������µ���һ�����
////protected:
////	Stack< StkNode<Type>> st; //����ջ
////};
//////�����α����Ա������ʵ��
////template <class Type> PostOrder<Type> ::
////PostOrder(const BinaryTree<Type>& BT) :TreeIterator<Type>(BT)
////{
////	st.Push(StkNode<Type>(T.GetRoot()));
////}
////template <class Type> void PostOrder<Type> ::First() {
////	st.MakeEmpty();
////	if (T.GetRoot() != NULL)
////		st.Push(StkNode<Type>(T.GetRoot()));
////	operator++ ();
////}
////template <class Type> void PostOrder<Type> ::operator ++ () {
////	if (st.IsEmpty()) {
////		if (current == NULL) {
////			cout << "�Ѿ���������" << endl;
////			exit(1);
////		}
////		current = NULL;
////		return; //�������
////	}
////	StkNode<Type>Cnode;
////	for (;;) {
////		//ѭ��,�Һ����µ���һ�����
////		Cnode = st.Pop();
////		if (++Cnode.PopTim == 3)//���������˳�
////		{
////			current = Cnode.Node; return;
////		}
////		st.Push(Cnode); //�����һ��ջ
////		if (Cnode.PopTim == 1) { //����Ů��ջ
////			if (Cnode.Node��GetLeft() != NULL)
////				st.Push(StkNode<Type>
////					(Cnode.Node��GetLeft()));
////		}
////		else { // =2,����Ů��ջ
////			if (Cnode.Node��GetRight() != NULL)
////				st.Push(StkNode<Type>(
////					Cnode.Node��GetRight()));
////		}
////	}
////}
////template <class Type> 
////void InOrder<Type>::operator++ () {
////	if (st.IsEmpty()) {
////		if (current == NULL)
////		{
////			cout << "�Ѿ�������� " << endl; exit(1);
////		}
////		current = NULL; return;
////	}
////	StkNode<Type>Cnode;
////	for (;;) { //ѭ��,�������µ���һ�����
////		Cnode = st.Pop(); //��ջ
////		if (++Cnode.PopTim == 2) {
////			//���������˳�����Ϊ��ǰ���
////			current = Cnode.Node;
////			if (Cnode.Node��GetRight() != NULL)
////				st.Push(StkNode<Type>(Cnode.Node��GetRight()));
////			return;
////		}
////		st.Push(Cnode); //�����һ��ջ
////		if (Cnode.Node��GetLeft() != NULL)st.Push(StkNode<Type>( //����Ů��ջ
////			Cnode.Node��GetLeft()));
////	}
////}
//template <class Type> 
//class ThreadNode {
//	friend class ThreadTree;
//	friend class ThreadInorderIterator;
//private:
//	int leftThread, rightThread;
//	ThreadNode<Type>* leftChild, * rightChild;
//	Type data;
//public:
//	ThreadNode(const Typeitem) : data(item),
//		leftChild(NULL), rightChild(NULL),
//		leftThread(0), rightThread(0) { }
//};
//
//template <class Type> 
//class ThreadTree {
//friend class ThreadInorderIterator; 
//public:
//
//private:
//	ThreadNode<Type>* root;
//};
//template <class Type>
//class ThreadInorderIterator {
//public:
//	ThreadInorderIterator(ThreadTree<Type>& Tree) :T(Tree) {
//		current = T.root;
//	}
//	ThreadNode<Type>* First(); ThreadNode<Type>* Last();
//	ThreadNode<Type>* Next();
//	ThreadNode<Type>* Prior();
//private:
//	ThreadTree<Type>& T;
//	ThreadNode<Type>* current;
//};
//
//template <class Type>
//void ThreadTree<Type> ::InThread
//(ThreadNode<Type>* current, ThreadNode<Type>* pre) {//�ʼ��pre��root��һ���սӵ㣩
//	if (current != NULL) {
//		InThread(current��leftChild, pre);//ͨ����һ���ߵ������û�������Ǹ����
//		if (current��leftChild == NULL) {
//			current��leftChild = pre;
//			current��leftThread = 1;
//		}if (pre��rightChild == NULL) {
//			pre��rightChild = current;
//			pre��rightThread = 1;
//		}
//		pre = current;
//		InThread(current��rightChild, pre);//ͨ����һ���ߵ������������û�������Ǹ����
//	}
//}
//template <class Type>
//void ThreadTree<Type>::CreateInThread() {
//	ThreadNode<Type>* pre;
//	root = new ThreadNode<Type>;
//	root��leftThread = 1;
//	root��rightThread = 1;
//	if (this == NULL)
//	{
//		root��leftChild = root; root��rightChild = root;
//	}
//	else {
//		current = root��leftChild = this;
//		root��leftThread = 0;
//		pre = root;
//		InThread(current, pre);
//		pre��rightChild = root;
//		pre��rightThread = 1;
//	}
//}