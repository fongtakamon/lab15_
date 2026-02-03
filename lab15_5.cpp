#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}
void shuffle(int *a,int *b,int *c,int *d){
	int fong[]={50,100,500,1000};
	int jai[4] ;
	for(int i=0;i<4;i++){
		jai[i] = rand()%4;
		for(int j = 0;j<i;j++){
			if(jai[i] == jai[j]){
				i--;
				break;
			}
		}
	}
	*a = fong[jai[0]] ;
	*b = fong[jai[1]] ;
	*c = fong[jai[2]] ;
	*d = fong[jai[3]] ;
}