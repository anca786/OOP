
#include <iostream>
using namespace std;
class A
{
public:
	A()
	{
		cout << "S-a construita A" << endl;
	}
	virtual ~A()
	{
		cout << "S-a distrus A" << endl;
	}
	string GetStatus()
	{
		return m_status;
	}
	void SetStatus(string status)
	{
		m_status = status;
	}
private:
	string m_status;
};
class B :public A
{
public:
	B()
	{
		cout << "S-a construita B" << endl;
	}
	~B()
	{
		cout << "S-a distrus B" << endl;
	}
};
class Drawable
{
public:
	virtual void Drawme() = 0;
};
class Shape :public Drawable
{
};
class Square :public Shape
{
};

int main()
{   
   /*A ob1;
   B ob2;
   cout<<sizeof(A)<<endl<<sizeof(B)<<endl;*/
   /*A* A_ptr = new A();
   A* B_ptr=new B();
   A_ptr->SetStatus("masina");
   B_ptr->SetStatus("carte");
   
   cout<<A_ptr->GetStatus()<<endl;
   cout<<B_ptr->GetStatus()<<endl;
   delete A_ptr;
   delete B_ptr;*/
   Shape s;
	return 0;
}

