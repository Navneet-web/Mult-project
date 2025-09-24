#include<iostream>
using namespace std;
class land{
	public:
		string a;
		land(){
			cout<<"this is land vehicle "<<a<<endl;
		}
};
class water:public land{
	public:
		string b;
		water(){
			cout<<"this is water vehicle"<<b<<endl;
		}
};
class total:public water{
	public:
		total(){
			cout<<"these are total of my vehicles"<<a<<b<<endl;
		}
};

int main(){
	total ad;
ad.a="Car";
ad.b="boat";



	
	
}
