/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */
	
public class Main
{
    public static void main(String[] args)
	{
        // deklarasi atribut kelas processor
        Processor processor_obj = new Processor();
        // input kelas processor menggunakan setter
        processor_obj.setName("Intel Core i3");
        processor_obj.setPrice(1000000);

        // deklarasi atribut kelas disk
        Disk disk_obj = new Disk();
        // input kelas disk menggunakan setter
        disk_obj.setType("SSD");
        disk_obj.setCapacity(128);
        disk_obj.setPrice(1500000);

        // deklarasi atribut kelas Ram
        Ram ram_obj = new Ram();
        // input kelas ram menggunakan setter
        ram_obj.setCapacity(8);
        ram_obj.setPrice(1200000);

        // deklarasi atribut kelas Pc
        Pc pc_obj = new Pc();
        // assignment kelas processor, disk, ram ke kelas pc
        pc_obj.setProcessor(processor_obj);
        pc_obj.setDisk(disk_obj);
        pc_obj.setRam(ram_obj);
        pc_obj.setTotalPrice(processor_obj, disk_obj, ram_obj);
        
        // ambil nilai menggunakan getter untuk ditampilkan ke layar
        System.out.println("PC Specifications");
        System.out.println("   - Processor Name : " + pc_obj.getProcessor().getName());
        System.out.println("   - Processor Price : Rp" + pc_obj.getProcessor().getPrice());
        System.out.println("   - Disk Type : " + pc_obj.getDisk().getType());
        System.out.println("   - Disk Capacity : " + pc_obj.getDisk().getCapacity() + "GB");
        System.out.println("   - Disk Price : Rp" + pc_obj.getDisk().getPrice());
        System.out.println("   - RAM Capacity : " + pc_obj.getRam().getCapacity() + "GB");
        System.out.println("   - RAM Price : Rp" + pc_obj.getRam().getPrice());
        System.out.println("PC Price");
        System.out.println("   - PC Price : Rp" + pc_obj.getTotalPrice());
    }
}