#ifndef CONTAINER_H
#define CONTAINER_H

#include<vector>
#include<string>


using namespace std;
using std::string;

template<typename T>
class container {
	std::vector<T> memorySpace;
public:
	container() { printf{ "\nCREATING A NEW OBJECT" }; } //default constructor
	container(std::initializer_list<T> il); // il constructor
	container(const container& rhs); //copy constructor
	container(container&& rhs) noexcept; //move constructor
	~container();
	void reset();
	container<T>& operator = (container rhs); //copy swap assigment operator
	//container<T>& operator = (const container& rhs); //copy assigment operator
	//container<T>& operator = (container&& rhs) noexcept; //move assigment operator
	string str() const;
};

template<typename T>
container<T>::container(std::initializer_list<T> il) : memorySpace{il.begin(), il.end()}
{
	printf("\ninitializer_list ctor\n");
}

//copy constructor
template<typename T>
container<T>::container(const container& rhs) : memorySpace(rhs.memorySpace)
{
	printf("\ncopy ctor\n");
}

//move constructor
template<typename T>
container<T>::container(container&& rhs) noexcept : memorySpace{std::move(rhs.memorySpace) }
{
	
	printf("\nmove ctor\n");
}

////copy assigment operator
//template<typename T>
//container<T>& container<T>::operator= (const container& rhs)
//{
//	printf("\ncopy assigment operator\n");
//	if (this != &rhs)
//	{
//		memorySpace = rhs.memorySpace;		
//	}
//	return *this;	
//}

//copy swap assigment operator
template<typename T>
container<T>& container<T>::operator= (container rhs)
{
	printf("\ncopy swap assigment operator\n");
	std::swap(memorySpace, rhs.memorySpace);
	return *this;	
}

////move assigment operator
//template<typename T>
//container<T>& container<T>::operator= (container&& rhs) noexcept
//{
//	printf("\nmove assigment operator\n");
//	if (this != &rhs)
//	{
//		this->memorySpace = std::move(rhs.memorySpace);
//	}
//	return *this;
//}

//destructor
template<typename T>
container<T>::~container()
{
	printf("\ndestructor\n");
}


// reset
template<typename T>
void container<T>::reset()
{
	memorySpace.clear();
}

//str
template<typename T>
string container<T>::str() const
{
	string out;
	if (memorySpace.empty()) return "[empty]";
	for (auto i : memorySpace)
	{
		if (out.size()) out += ":";
		out += std::to_string(i);
	}
	return out;
}

template<typename T>
container<T> f(container<T> o)
{
	return o;
}

#endif
