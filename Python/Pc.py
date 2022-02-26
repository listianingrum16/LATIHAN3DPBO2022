# Saya Listia Ningrum NIM 2008084 mengerjakan Latihan 3 dalam mata
# kuliah DPBO untuk keberkahanNya maka saya tidak akan melakukan kecurangan 
# seperti yang telah dispesifikasikan. Aamiin 

from Processor import Processor
from Disk import Disk
from Ram import Ram

class Pc():

    # deklarasi atribut
    __totalPrice = 0

    # constructor
    def __init__(self):
        self.pObj = Processor()
        self.dObj = Disk()
        self.rObj = Ram()
    
    # method set & get processor
    def setProcessor(self, pObj):
        self.__pObj = pObj
    def getProcessor(self):
        return self.__pObj
    
    # method set & get disk
    def setDisk(self, dObj):
        self.__dObj = dObj
    def getDisk(self):
        return self.__dObj

    # method set & get ram
    def setRam(self, rObj):
        self.__rObj = rObj
    def getRam(self):
        return self.__rObj
		
    # method set & get total price
    def setTotalPrice(self, pObj, dObj, rObj):
        self.__totalPrice = pObj.getPrice() + dObj.getPrice() + rObj.getPrice()
    def getTotalPrice(self):
        return self.__totalPrice