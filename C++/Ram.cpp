/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
#include <iostream>
using namespace std;

class Ram
{
	private:
		// deklarasi atribut
		int capacity;
		int price;
		
	public:
		// constructor
		Ram(){
		}
		
		// method set & get capacity
		void setCapacity(int capacity){
			this -> capacity = capacity;
		}
		int getCapacity(){
			return this -> capacity;
		}
		
		// method set & get price
		void setPrice(int price){
			this -> price = price;
		}
		int getPrice(){
			return this -> price;
		}
		
		// destructor
		~Ram(){}
};