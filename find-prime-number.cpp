//Yasin Ertune - Asal say� bulan program 
/*
	Say�n�n asal olmas� i�in sadece 1'e ve kendisinden ba�ka pozitif tam b�leni olmamas� gerekiyor. Programda asal say� kontrol� yap�yoruz.
	De�i�kenlerimiz: say�,saya�,kalan	
*/

#include <iostream> 
using namespace std;
int main(){
	
   int number,counter,remainder;
   cout<<"Please enter a number:";	
   cin>>number;	
	
   for(int i=2;i<number;i++)	
   {
   		remainder = number % i;			
   		if(remainder==0)
			counter++; 	
   }
   
   if(counter==0 && number>1)
		cout<<number<<" is prime numbers.";
   else
		cout<<number<<" is not prime numbers.";
	return 0;
}

