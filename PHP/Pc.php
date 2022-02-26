<?php

/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
    kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

include "Processor.php";
include "Disk.php";
include "Ram.php";

class Pc
{
	// deklarasi atribut
	private $pObj;
    private $dObj;	
    private $rObj;	
	private $totalPrice;
	
	// constructor
	public function __construct(){
		$this -> pObj = new Processor();
		$this -> dObj = new Disk();
		$this -> rObj = new Ram();
	}
	
	// method set & get processor
	public function setProcessor($pObj){
		$this -> pObj = $pObj;
	}
	public function getProcessor(){
		return $this -> pObj;
	}

	// method set & get disk
	public function setDisk($dObj){
		$this -> dObj = $dObj;
	}
	public function getDisk(){
		return $this -> dObj;
	}

	// method set & get ram
	public function setRam($rObj){
		$this -> rObj = $rObj;
	}
	public function getRam(){
		return $this -> rObj;
	}

	// method set & get total price
	public function setTotalPrice($pObj, $dObj, $rObj){
		$this -> totalPrice = $pObj -> getPrice() + $dObj -> getPrice() + $rObj -> getPrice();
    }
	public function getTotalPrice(){
		return $this -> totalPrice;
	}
}

?>
