#include<iostream>
using namespace std;
class land{
	public:
	
		land(){
			cout<<"this is land vehicle "<<endl;
		}
};
class water:public land{
	public:
	
		water(){
			cout<<"this is water vehicle"<<endl;
		}
};
class total:public water{
	public:
		total(){
			cout<<"these are total of my vehicles"<<endl;
		}
};

int main(){

total();


	
	
}
