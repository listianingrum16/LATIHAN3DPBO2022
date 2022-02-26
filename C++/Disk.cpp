/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 2 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
#include <string>
#include <iostream>
using namespace std;

class Disk
{
	private:
		// deklarasi atribut
		string type;
		int capacity;
		int price;
		
	public:
		// constructor
		Disk(){
		}
		
		// method set & get type
		void setType(string type){
			this -> type = type;
		}
		string getType(){
			return this -> type;
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
		~Disk(){}
};