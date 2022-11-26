#include<iostream>

using namespace std;

class A{
	
	public :
		
	       int id;
	       char name[50];
	       char role[50];
	       int salary;
	       int experience;
	       char company_name[50];
	       char address[150];
	       char email[50];
	       char contact[10];
	       
	       
	       void setter1(){
	       	
	       		cout<<"Enter Id :- ";
	       		cin>>id;
	       
	       		cout<<"Enter Name :- ";
	       		cin>>name;
	       
	       		cout<<"Enter Role :- ";
	       		cin>>role;    
	       	
		   }	
	
};

class B : public A{
	
	public:
		
		void setter2(){
			
		   cout<<"Enter Salary :- ";
	       cin>>salary;
	       
	       cout<<"Enter Experience :- ";
	       cin>>experience;
			
		}
	
};

class C : public B{
	
	public:
		
		void setter3(){
			
		   cout<<"Enter Company Name :- ";
	       cin>>company_name;
	       
	       cout<<"Enter Company Address :- ";
	       cin>>address;
			
		}
		
		void getter(){
			
			cout<<"Name :- "<<name<<endl;
			cout<<"Role :- "<<role<<endl;
			cout<<"Salary :- "<<salary<<endl;
		}
	
	
};

class D : public C{
	
	public:
		
		void setter4(){
			
			setter1();
			setter2();
			setter3();
			
		   cout<<"Enter Email :- ";
	       cin>>email;
	       
	       cout<<"Enter Contact :- ";
	       cin>>contact;
		}
		
		void getdata()
		{
			
			cout<<"Id :- "<<id<<endl;
			getter();
			cout<<"Experience :- "<<experience<<endl;
			cout<<"Company Name :- "<<company_name<<endl;
			cout<<"Address :- "<<address<<endl;
			cout<<"Email :- "<<email<<endl;
			cout<<"Contact :- "<<contact<<endl;
			
		}
};
main(){
	
	D obj;
	
	obj.setter4();
	obj.getdata();
	
	
	
	
	
}
