#include <iostream>
template<class T>
struct OpNewCreator
{
     static T* Create()
	{
		return new T(4);
	}

};
struct OpNewCreator<int> type;
int main(){



int *i=type.Create();
std::cout<< *i <<std::endl;

}
