#pragma once
template<typename T>
class Stack
{
private:
	enum{SIZE = 10};	// 디폴트 크기
	int stacksize;
	T * items;		// 스택 항목들을 저장한다
	int top;
public:
	explicit Stack(int ss = SIZE);
	Stack(const Stack & st);
	~Stack() { delete[] items; }
	bool isfull() { return top == stacksize; }
	bool push(const T & item);
	bool pop(T & item);
	bool isempty() { return top == 0; }
	Stack<T> & operator=(const Stack<T> & st);
};

template<typename T>
inline Stack<T>::Stack(int ss) : stacksize(ss), top (0)
{
	items = new T[stacksize];
}

template<typename T>
inline Stack<T>::Stack(const Stack & st)
{
	stacksize = st.stacksize;
	top = st.top;
	items = new T[stacksize];
	for (int i = 0; i < top; ++i)
		items[i] = st.items[i];
}

template<typename T>
bool Stack<T>::push(const T & item)
{
	if (top < stacksize)
	{
		items[top++] = item;
		return true;
	}
	else
		return false;
}
template<typename T>
bool Stack<T>::pop(T & item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	else
		return false;
}

template<typename T>
inline Stack<T> & Stack<T>::operator=(const Stack<T>& st)
{
	if (this == &st)
		return *this;
	delete[] items;
	stacksize = st.stacksize;
	top = st.top;
	items = new T[stacksize];
	for (int i = 0; i < top; ++i)
	{
		items[i] = st.items[i];
	}
	return *this;
}
