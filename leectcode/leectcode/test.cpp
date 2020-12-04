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
////	//后序遍历使用的递归工作栈结点定义
////	const BinTreeNode<Type>* Node;
////	//结点指针
////	int PopTim;
////	//退栈次数
////	stkNode(const BinTreeNode<Type>* N = NULL) :Node(N), PopTim(0) { }
////};
////
////template <class Type>
////class PostOrder : public TreeIterator<Type> {
////public:
////	PostOrder(const  BinaryTree<Type>& BT);
////	~PostOrder() { }
////	void First();
////	//定位到后序次序下第一个结点
////	void operator++ ();
////	//定位到后序次序下的下一个结点
////protected:
////	Stack< StkNode<Type>> st; //工作栈
////};
//////后序游标类成员函数的实现
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
////			cout << "已经遍历结束" << endl;
////			exit(1);
////		}
////		current = NULL;
////		return; //遍历完成
////	}
////	StkNode<Type>Cnode;
////	for (;;) {
////		//循环,找后序下的下一个结点
////		Cnode = st.Pop();
////		if (++Cnode.PopTim == 3)//从右子树退出
////		{
////			current = Cnode.Node; return;
////		}
////		st.Push(Cnode); //否则加一进栈
////		if (Cnode.PopTim == 1) { //左子女进栈
////			if (Cnode.Node→GetLeft() != NULL)
////				st.Push(StkNode<Type>
////					(Cnode.Node→GetLeft()));
////		}
////		else { // =2,右子女进栈
////			if (Cnode.Node→GetRight() != NULL)
////				st.Push(StkNode<Type>(
////					Cnode.Node→GetRight()));
////		}
////	}
////}
////template <class Type> 
////void InOrder<Type>::operator++ () {
////	if (st.IsEmpty()) {
////		if (current == NULL)
////		{
////			cout << "已经遍历完成 " << endl; exit(1);
////		}
////		current = NULL; return;
////	}
////	StkNode<Type>Cnode;
////	for (;;) { //循环,找中序下的下一个结点
////		Cnode = st.Pop(); //退栈
////		if (++Cnode.PopTim == 2) {
////			//从左子树退出，成为当前结点
////			current = Cnode.Node;
////			if (Cnode.Node→GetRight() != NULL)
////				st.Push(StkNode<Type>(Cnode.Node→GetRight()));
////			return;
////		}
////		st.Push(Cnode); //否则加一进栈
////		if (Cnode.Node→GetLeft() != NULL)st.Push(StkNode<Type>( //左子女进栈
////			Cnode.Node→GetLeft()));
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
//(ThreadNode<Type>* current, ThreadNode<Type>* pre) {//最开始的pre是root（一个空接点）
//	if (current != NULL) {
//		InThread(current→leftChild, pre);//通过这一步走到最左端没有左孩子那个结点
//		if (current→leftChild == NULL) {
//			current→leftChild = pre;
//			current→leftThread = 1;
//		}if (pre→rightChild == NULL) {
//			pre→rightChild = current;
//			pre→rightThread = 1;
//		}
//		pre = current;
//		InThread(current→rightChild, pre);//通过这一步走到右子树最左端没有左孩子那个结点
//	}
//}
//template <class Type>
//void ThreadTree<Type>::CreateInThread() {
//	ThreadNode<Type>* pre;
//	root = new ThreadNode<Type>;
//	root→leftThread = 1;
//	root→rightThread = 1;
//	if (this == NULL)
//	{
//		root→leftChild = root; root→rightChild = root;
//	}
//	else {
//		current = root→leftChild = this;
//		root→leftThread = 0;
//		pre = root;
//		InThread(current, pre);
//		pre→rightChild = root;
//		pre→rightThread = 1;
//	}
//}