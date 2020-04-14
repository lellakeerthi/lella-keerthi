#include<iostream> 
using namespace std; 
  
class base 
{ 
public: 
    base()  
    { 
        cout<< "Constructor called" <<endl; 
    	fun() ; 
    } 
  
    ~base() 
    {  
    	cout<< "Base class destructor" <<endl;
    } 
  
    virtual void fun() 
    {  
        cout<< "Virtual function" <<endl;  
    } 
  
    void fun1()  
    {  
        fun();  
    } 
}; 
  
class derived : public base 
{ 
public: 
        derived()  
        { 
            cout<< "Derived class Constructor" <<endl;  
        } 
        void fun()  
        { 
            cout<< "Derived class Virtual function" <<endl;  
        }
		virtual	~derived() 
    	{  
        	cout<< "Derived class destructor" << endl ;
    	}
}; 
  
int main(int argc, char* argv[])
{
	// condition for arguments to dispaly -h file
    if (argc == 2)
    {
        cout << " Order of constructors & destructors" << endl;
    }
    
    else
    {
	 derived d; 
    d.fun(); 
	}
} 

