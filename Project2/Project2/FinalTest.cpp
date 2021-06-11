/*综合练习

定义一个Student类，包含名字一个数据成员，
定义无参构造函数、有参构造函数、拷贝构造函数、析构函数及对于名字的封装函数，
在main函数中实例化Student对象，并访问相关函数，观察运行结果。

*/
#include <iostream>
#include <string>
using namespace std;
/**
 * 定义类：Student
 * 数据成员：m_strName
 * 无参构造函数：Student()
 * 有参构造函数：Student(string _name)
 * 拷贝构造函数：Student(const Student& stu)
 * 析构函数：~Student()
 * 数据成员函数：setName(string _name)、getName()
 */
class Student
{
public:
	Student()
	{
		cout << "Student()" << endl;
	}
	Student(string _name)
	{
		cout << "Student(string _name)" << endl;
	}
	Student(const Student& stu)
	{
		cout << "Student(const Student& stu)" << endl;
	}
	~Student()
	{
		cout << "~Student()" << endl;
	}
	void setName(string _name)
	{
		m_strName = _name;
	}
	string getName()
	{
		return m_strName;
	}
private:
	string m_strName;
};


int main(void)
{
	// 通过new方式实例化对象*stu
	Student *stu = new Student();
	// 更改对象的数据成员为“慕课网”
	stu->setName("慕课网");
	// 打印对象的数据成员
	cout << stu->getName() << endl;
	return 0;
}