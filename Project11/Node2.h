#ifndef NODESECOND_H
#define NODESECOND_H

class Node
{
public:
	Node(char data = 0);	//构造函数
	char m_cData;			//data指且仅指当前顶点的值
	bool m_bIsVisited;		//用于表示当前顶点是否被访问过
protected:
private:
};

#endif // NODESECOND_H
