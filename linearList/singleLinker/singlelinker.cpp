template <typename ElemType>
struct Node{
	ElemType data;
	struct Node<ElemType> *next;
	Node();
	Node(int num, struct Node<ElemType> *link = NULL)
	{
		data = num;
		next = point;
	}
};
template <typename ElemType>
class SimpleLinkList{
protected:
	//链表实现的数据成员
	Node<ElemType> *head;				//头节点指针
	//辅助函数模板
	Node<ElemType> *GetElemPtr(int position) const;
										//返回指向第position个节点的指针
public:
	SimpLinkList();						//无参数的构造函数模板
	virtual~ SimpLinkList();			//析构函数模板
	int Length() const;					//求线性表的长度
	bool Empty() const;					//判断线性表是否为空
	void Clear();						//将线性表清空
	void Traverse(void(* visit)(const ElemType &) const);//遍利线性表
	void GetElem(int position, ElemType &e) const; //求指定位置的元素
	void SetElem(int position,const ElemType &e);//设置指定位置的元素
	bool Delete(int position, ElemType &e);		//删除元素
	bool Insert(int position, const ElemType &e);//插入元素
	
	SimpLinkList& (const SImpLinkList<ElemType>& copy);	//无参数的

	SimpLinkList<ElemType>& operator = (const SImpLinkList<ElemType>& copy);
};
