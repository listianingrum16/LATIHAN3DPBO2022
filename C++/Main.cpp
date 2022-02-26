/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
#include <string>
#include <iostream>
#include "Pc.cpp"
using namespace std;

int main()
{
    // deklarasi atribut kelas processor
    Processor processor_obj;
    // input kelas processor menggunakan setter
    processor_obj.setName("Intel Core i3");
    processor_obj.setPrice(1000000);

    // deklarasi atribut kelas disk
    Disk disk_obj;
    // input kelas disk menggunakan setter
    disk_obj.setType("SSD");
    disk_obj.setCapacity(128);
    disk_obj.setPrice(1500000);

    // deklarasi atribut kelas Ram
    Ram ram_obj;
    // input kelas ram menggunakan setter
    ram_obj.setCapacity(8);
    ram_obj.setPrice(1200000);

    // deklarasi atribut kelas Pc
    Pc pc_obj;
    // assignment kelas processor, disk, ram ke kelas pc
    pc_obj.setProcessor(processor_obj);
    pc_obj.setDisk(disk_obj);
    pc_obj.setRam(ram_obj);
    pc_obj.setTotalPrice(processor_obj, disk_obj, ram_obj);
    
	// ambil nilai menggunakan getter untuk ditampilkan ke layar
    cout << "PC Specifications" << endl;
	cout << "   - Processor Name : " << pc_obj.getProcessor().getName() << endl;
	cout << "   - Processor Price : Rp" << pc_obj.getProcessor().getPrice() << endl;
	cout << "   - Disk Type : " << pc_obj.getDisk().getType() << endl;
	cout << "   - Disk Capacity : " << pc_obj.getDisk().getCapacity() << "GB" << endl;
	cout << "   - Disk Price : Rp" << pc_obj.getDisk().getPrice() << endl;
	cout << "   - RAM Capacity : " << pc_obj.getRam().getCapacity() << "GB" << endl;
	cout << "   - RAM Price : Rp" << pc_obj.getRam().getPrice() << endl;
    //cout << "==================================" << endl;
    cout << "PC Price" << endl;
	cout << "   - PC Price : Rp" << pc_obj.getTotalPrice() << endl;

    return 0;
}