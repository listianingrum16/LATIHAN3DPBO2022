<?php

/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

include "Pc.php";

    // deklarasi atribut kelas processor
    $processor_obj = new Processor();
    // input kelas processor menggunakan setter
    $processor_obj -> setName("Intel Core i3");
    $processor_obj -> setPrice(1000000);

    // deklarasi atribut kelas disk
    $disk_obj = new Disk();
    // input kelas disk menggunakan setter
    $disk_obj -> setType("SSD");
    $disk_obj -> setCapacity(128);
    $disk_obj -> setPrice(1500000);

    // deklarasi atribut kelas Ram
    $ram_obj = new Ram();
    // input kelas ram menggunakan setter
    $ram_obj -> setCapacity(8);
    $ram_obj -> setPrice(1200000);

    // deklarasi atribut kelas Pc
    $pc_obj = new Pc();
    // assignment kelas processor, disk, ram ke kelas pc
    $pc_obj -> setProcessor($processor_obj);
    $pc_obj -> setDisk($disk_obj);
    $pc_obj -> setRam($ram_obj);
    $pc_obj -> setTotalPrice($processor_obj, $disk_obj, $ram_obj);
    
	// ambil nilai menggunakan getter untuk ditampilkan ke layar
    echo "<h2>PC Specifications</h2>";
	echo "- Processor Name : ". $pc_obj -> getProcessor() -> getName(). "<br>"."<br>";
	echo "- Processor Price : Rp". $pc_obj -> getProcessor() -> getPrice(). "<br>"."<br>";
	echo "- Disk Type : ". $pc_obj -> getDisk() -> getType(). "<br>"."<br>";
	echo "- Disk Capacity : ". $pc_obj -> getDisk() -> getCapacity(). "GB"."<br>"."<br>";
	echo "- Disk Price : Rp". $pc_obj -> getDisk() -> getPrice(). "<br>"."<br>";
	echo "- RAM Capacity : ". $pc_obj -> getRam() -> getCapacity(). "GB"."<br>"."<br>";
	echo "- RAM Price : Rp". $pc_obj -> getRam() -> getPrice(). "<br>";
    echo "<h2>PC Price</h3>";
	echo "- PC Price : Rp". $pc_obj -> getTotalPrice();
?>