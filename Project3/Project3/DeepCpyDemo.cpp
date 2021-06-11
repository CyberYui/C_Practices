/************************************************************************/
/* 示例安排：                                                           */
/*     1.定义一个Array类，数据成员为m_iCount,成员函数包括数据封装函数、 */
/*       构造函数、拷贝构造函数和析构函数，通过此示例体会浅拷贝原理。   */
/*                                                                      */
/*     2.增加数据成员m_pArr(指针类型)，并增加m_pArr地址查看函数，同时改 */
/*       造构造函数、拷贝构造函数和析构函数，体会深拷贝的原理和必要性。 */
/************************************************************************/
#include <iostream>
#include <stdlib.h>
#include "ArrayFirst.h"
using namespace std;

int main(void) 
{
	/*环节1
	Array arr1;//实例化第一个对象
	arr1.setCount(4);
	//为了说明浅拷贝，要再实例化一个对象
	Array arr2 = arr1;//Array arr2(arr1);
	//打印一下看看arr2的值和arr1的值是否相同
	cout << "arr2.m_iCount:" << arr2.getCount() << endl;
	*/

	/*环节2*/
	Array arr1(5);
	Array arr2(arr1);

	//调用各自的指针地址
	arr1.printAddr();
	arr2.printAddr();
	/*以下为进行到此步的结果，可见两个数组的内存已经不一样了
	  因此析构函数正确执行，不会报错
		Array()
		Array(const Array& arr)
		m_pArr的值为:01335B28
		m_pArr的值为:01335B68
	*/
	//调用数组打印函数
	cout << "arr1的内容是：" << endl;
	arr1.printArr();
	cout << "arr2的内容是：" << endl;
	arr2.printArr();

	system("pause");
	return 0;
}
/************************************************************************/
/*  Array()					 //首先调用构造函数实例化arr1
/*  Array(const Array& arr)  //调用拷贝构造函数实例化arr2
/*  m_pArr的值为:00015B28	 //arr1的指针对应的内存地址
/*  m_pArr的值为:00015B68	 //arr2的指针对应的内存地址
/*  arr1的内容是：			 //遍历输出arr1和arr2的内容
/*  0,1,2,3,4,
/*  arr2的内容是：
/*  0,1,2,3,4,
/*  请按任意键继续. . .		 //system("pause");
/*  ~Array()			     //调用析构函数，释放内存
/*  ~Array()                                                            */
/************************************************************************/