#pragma once
#include<iostream>
using std::cout;
using std::endl;
//针对不同类型对象的定长内存池
template<class T>
class ObjectPool
{
public:
	T* New() {

	}
private:
	char* _memory = nullptr;//指向内存块的指针
	void* _freelist = nullptr;//自由链表，连接归还的空闲空间
};