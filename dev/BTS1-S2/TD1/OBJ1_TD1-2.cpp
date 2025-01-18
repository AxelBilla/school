#include <iostream>
#include <string>

using namespace std;

class product{
    private:
        string tag;
        float tax;
        float buy_price;
        int quantity;
    public:
        product(string nTag, float nTax=0.0, float nPrice=0.0, int nQuantity=0){
            this->tag=nTag;
            this->tax=nTax;
            this->buy_price=nPrice;
            this->quantity=nQuantity;
        }
        void getTag(){}
        void editPrice(float newPrice){}
        void addStock(int amount){}
        void removeStock(int amount){}
        float getTaxed(){
            return this->buy_price+=this->buy_price*(this->tax/100);
        }
        void displayProduct(){
            cout << "------------------\n";
            cout << "Tag: " << this->tag << "\n";
            (this->tax==0.0) ? cout << "Sales Tax: N/A" << "\n" : cout << "Sales Tax: " << this->tax << "\n";
            (this->buy_price==0.0) ? cout << "Price: N/A" << "\n" : cout << "Price: " << this->buy_price << "\n"; 
            (this->quantity==0) ? cout << "Quantity: N/A" << "\n" : cout << "Quantity: " << this->quantity << "\n";
            cout << "TTC: " << getTaxed() << "\n";
            cout << "------------------\n";
        }
};

int main() {
    product prod1("stylo");
    product prod2("trousse",19.6, 20.30, 10);


    prod1.displayProduct();
    prod2.displayProduct();
    return 0;
};
