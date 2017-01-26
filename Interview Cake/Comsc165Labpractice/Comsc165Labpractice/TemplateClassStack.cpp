//#include <iostream>
//#include <exception>
//#include <cstdlib>
//#include <cstdio>
//
//// simple exception class
//class E: public std::exception{
//public:
//	explicit E(const char *s) throw(): msg(s){}
//	const char * what () const throw() {return  msg;}
//private:
//	E();
//	const char *msg;
//}
//template <typename Type>
//class Stack{
//private:
//	static const int defaultSize=10;
//	static const int maxSize=100;
//	int _size;
//	int _top;
//	T * stackPtr;
//public:
//	explicat Stack(int);
//	~Stack{ delete[] stackPtr;};
//	T & push(const T&);
//
//
//}