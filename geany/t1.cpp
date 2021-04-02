#include <iostream>
#include<cstring>
#include<cstdio>
//
//geany compiler (mingw ??)

using namespace std;
int switch1( int a ,int b)
		{
	     
	     int ab = a*b - a + b;
	     int bc = a+b;
	     
	     if ( ab > bc) return 0;
	     
	     else return 1;
	     		
			
		}
int main()

{
   char a[10] ={"helllo"};
   char b[10] ;
   strcpy(a,b);
   puts(a); 
   puts("!!!");  
   puts(b);		

  int c = switch1(5,5);
  cout << c;
	return 0;
	
	}
