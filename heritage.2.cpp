#include<iostream>

using namespace std;

class animal{
	
	public:
		
		char name[50];
		int age;
		
		
		void setvalue(char nick_name[]){
			
			cout<<nick_name<<" Enter Name :-  ";
			cin>>name;
			
			cout<<nick_name<<" Enter Age :- ";
			cin>>age;
		}
	
};

class Zebra : public animal{
	
	public:
		
		void getvalue(){
			
			char nick_name[50] = "Zebra";
			
			setvalue(nick_name);
			
			cout<<"Zebra Name :- "<<name<<endl;
			cout<<"Zebra Age :- "<<age<<endl;
			
		}

};

class Dolphin : public animal{
	
	public:
	
	void getvalue(){
		
			char nick_name[50] = "Dolphin";
			
			setvalue(nick_name);
			
			cout<<"Dolphin Name :- "<<name<<endl;
			cout<<"Dolphin Age :- "<<age<<endl;
			
		}
};

main(){
	
	Zebra obj1;
	Dolphin obj2;
	
	
	obj1.getvalue();
	obj2.getvalue();
	
	
}
