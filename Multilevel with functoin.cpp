#include<iostream>
using namespace std;
class land{
	public:
	int as;
	void gd(){
		cout<<"no. of cars :: "<<as<<endl;
	}
};
class water:public land{
	public:
	int an;
	void mn(){
		cout<<"no. of boats :: "<<an<<endl;
	}
};
class total:public water{
	public:
	void total(int s, int a){
			as=a;
			an=s;
		}
		void total(){
			cout<<"total of my vehicles :: "<<as+an<<endl;
		}
};

int main(){
total no; 

no.an=2;
no.as=1;

total();


	
	
}
