template<class T>
struct OpNewCreator
{
     static T* Create()
	{
		return new T;
	}

};
struct OpNewCreator<int> type;
int main(){



int *i=type.Create();


}
