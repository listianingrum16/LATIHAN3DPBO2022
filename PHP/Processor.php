<?php

/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

class Processor
{
	// deklarasi atribut
	private $name;
	private $price;
	
	// constructor
	public function __construct(){
    }
	
	// method set & get name
	public function setName($name){
		$this -> name = $name;
	}
	public function getName(){
		return $this -> name;
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