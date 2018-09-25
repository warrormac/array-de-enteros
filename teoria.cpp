#include <iostream>
using namespace std;



int tam(char x[]){
	int y=0;
	for(;x[y]!='\0';y++)
		;

	return y;
}

int contar(char x[],char c){
	int z=0;
	for(int y=0;x[y]!='\0';y++)
    {
		if(x[y]==c)
			z++;
	}
	cout<<"existen "<<z<<" de la letra "<<c<<"\n";
}

bool palindrome(char x[]){
	int z=tam(x);
	for(int y=0;y<z/2;y++){
		if(x[y]!=x[z-1-y])
			return false;
	}
	return true;
}

int main() {


	char x[]="abcdedcba";
	cout<<"el tamaño es de: "<<tam(x)<<"\n";
	contar(x,'a');
	cout<<"si es palindrome "<<palindrome(x);


	return 0;
}
