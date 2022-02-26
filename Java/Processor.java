/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

class Processor
{
    // deklarasi atribut
    private String name;
    private int price;

    // constructor
    public Processor(){
    }
    
    // method set & get name
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return name;
    }

    // method set & get price
    public void setPrice(int price) {
        this.price = price;
    }
    public int getPrice() {
        return price;
    }
} 
