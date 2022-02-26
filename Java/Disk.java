/* Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
	kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
	seperti yang telah dispesifikasikan. Aamiin */

class Disk
{
    // deklarasi atribut
    private String type;
    private int capacity;
    private int price;

    // constructor
    public Disk(){
    }
    
    // method set & get type
    public void setType(String type) {
        this.type = type;
    }
    public String getType() {
        return type;
    }

    // method set & get capacity
    public void setCapacity(int capacity) {
        this.capacity = capacity;
    }
    public int getCapacity() {
        return capacity;
    }

    // method set & get price
    public void setPrice(int price) {
        this.price = price;
    }
    public int getPrice() {
        return price;
    }
} 