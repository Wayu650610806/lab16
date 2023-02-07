#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " <<d << "\n";
	}
	
	return 0;
}
void shuffle(int &a, int &b, int &c, int&d){
	int ans=rand()%4;
	int f=a,s=b,t=c,fo=d;
	switch (ans)
	{
	case 0:
		a=s;
		b=f;
		break;
	case 1:
		c=t;
		d=fo;
		break;
	case 2:
		a=t;
		b=f;
		c=fo;
		d=s;
		break;
	case 3:
		a=fo;
		d=f;
	}
}