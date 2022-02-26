# Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
# kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin
	
from Processor import Processor
from Disk import Disk
from Ram import Ram
from Pc import Pc 

# deklarasi atribut kelas processor
processor_obj = Processor()
# input kelas processor menggunakan setter
processor_obj.setName("Intel Core i3")
processor_obj.setPrice(1000000)

# deklarasi atribut kelas disk
disk_obj = Disk()
# input kelas disk menggunakan setter
disk_obj.setType("SSD")
disk_obj.setCapacity(128)
disk_obj.setPrice(1500000)

# deklarasi atribut kelas Ram
ram_obj = Ram()
# input kelas ram menggunakan setter
ram_obj.setCapacity(8)
ram_obj.setPrice(1200000)

# deklarasi atribut kelas 
pc_obj = Pc()
# assignment kelas processor, disk, ram ke kelas pc
pc_obj.setProcessor(processor_obj)
pc_obj.setDisk(disk_obj)
pc_obj.setRam(ram_obj)
pc_obj.setTotalPrice(processor_obj, disk_obj, ram_obj)

# ambil nilai menggunakan getter untuk ditampilkan ke layar
print("PC Specifications");
print("   - Processor Name : " + str(pc_obj.getProcessor().getName()));
print("   - Processor Price : Rp" + str(pc_obj.getProcessor().getPrice()));
print("   - Disk Type : " + str(pc_obj.getDisk().getType()));
print("   - Disk Capacity : " + str(pc_obj.getDisk().getCapacity()) + "GB");
print("   - Disk Price : Rp" + str(pc_obj.getDisk().getPrice()));
print("   - RAM Capacity : " + str(pc_obj.getRam().getCapacity()) + "GB")
print("   - RAM Price : Rp" + str(pc_obj.getRam().getPrice()));
print("PC Price");
print("   - PC Price : Rp" + str(pc_obj.getTotalPrice()));