<?php

/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

class Ram
{
	// deklarasi atribut
    private $capicity;
	private $price;
	
	// constructor
	public function __construct(){
    }
    
    // method set & get capacity
	public function setCapacity($capacity){
		$this -> capacity = $capacity;
	}
	public function getCapacity(){
		return $this -> capacity;
	}

	// method set & get price
	public function setPrice($price){
		$this -> price = $price;
	}
	public function getPrice(){
		return $this -> price;
	}
}

?>