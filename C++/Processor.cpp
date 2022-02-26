/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
#include <string>
#include <iostream>
using namespace std;

class Processor
{
	private:
		// deklarasi atribut
		string name;
		int price;
		
	public:
		// constructor
		Processor(){
		}
		
		// method set & get name
		void setName(string name){
			this -> name = name;
		}
		string getName(){
			return this -> name;
		}
		
		// method set & get price
		void setPrice(int price){
			this -> price = price;
		}
		int getPrice(){
			return this -> price;
		}
		
		// destructor
		~Processor(){}
};
