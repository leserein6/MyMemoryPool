#pragma once
#include<iostream>
using std::cout;
using std::endl;
//��Բ�ͬ���Ͷ���Ķ����ڴ��
template<class T>
class ObjectPool
{
public:
	T* New() {

	}
private:
	char* _memory = nullptr;//ָ���ڴ���ָ��
	void* _freelist = nullptr;//�����������ӹ黹�Ŀ��пռ�
};