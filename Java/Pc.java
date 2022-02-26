/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

class Pc
{
    // deklarasi atribut
    private Processor pObj;
    private Disk dObj;
    private Ram rObj;
    private int totalPrice;

    // constructor
    public Pc(){   
        this.pObj = new Processor();
		this.dObj = new Disk();
		this.rObj = new Ram();
    }
 
    // method set & get processor
	public void setProcessor(Processor pObj){
		this.pObj = pObj;
	}
	public Processor getProcessor(){
		return pObj;
	}

	// method set & get disk
	public void setDisk(Disk dObj){
		this.dObj = dObj;
	}
	public Disk getDisk(){
		return dObj;
	}

	// method set & get ram
	public void setRam(Ram rObj){
		this.rObj = rObj;
	}
	public Ram getRam(){
		return rObj;
	}

	// method set & get total price
	public void setTotalPrice(Processor pObj, Disk dObj, Ram rObj){
		this.totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice();
    }
	public int getTotalPrice(){
		return totalPrice;
	}
}