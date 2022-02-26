/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
#include <string>
#include <iostream>
#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"
using namespace std;

class Pc
{
    private:
        // deklarasi atribut
        Processor pObj;
        Disk dObj;
        Ram rObj;
        int totalPrice;

    public:
        // constructor
        Pc(){
        }

        // method set & get processor
        void setProcessor(Processor pObj){
            this -> pObj = pObj;
        }
        Processor getProcessor(){
            return this -> pObj;
        }

        // method set & get disk
        void setDisk(Disk dObj){
            this -> dObj = dObj;
        }
        Disk getDisk(){
            return this -> dObj;
        }

        // method set & get ram
        void setRam(Ram rObj){
            this -> rObj = rObj;
        }
        Ram getRam(){
            return this -> rObj;
        }

        // method set & get total price
        void setTotalPrice(Processor pObj, Disk dObj, Ram rObj){
            this -> totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
        }
        int getTotalPrice(){
            return this -> totalPrice;
        }

        // destructor
        ~Pc(){}
};