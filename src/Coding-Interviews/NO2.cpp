/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2016-01  All rights reserved
*
**********************************************/

/**********************************************
	设计一个类，我们只能生成该类的一个实例
**********************************************/

//single-threaded
template <typename T>
class Singleton{
public:
	static T* getInstance();
private:
	Singleton() {}
	~Singleton() {}
	static T* p_elem;
};

template <typename T>
T* Singleton::p_elem = nullptr;

T* Singleton::getInstance() {
	if(p_elem == nullptr) {
		p_elem = new T();
	}
	return p_elem;
}


//multi-threaded
template <typename T>
class Singleton{
public:
	static T* getInstance();
private:
	Singleton() {}
	~Singleton() {}
	static T* p_elem;
	static Lock lock;
};
 
template <typename T>
T* Singleton::p_elem = nullptr;

template <typename T>
Lock Singleton::lock;

T* Singleton::getInstance() {
	if(p_elem == nullptr) {
		getLock(&lock);
		if(p_elem == nullptr) {
			p_elem = new T();
		}
		freeLock(&lock)
	}
	return p_elem;
}
