#include <iostream>
#include <string>

using namespace std;

class product{
    private:
        int uuid;
        string tag;
        float tax;
        float buyPrice;
        int quantity;
        static int instances; // Same value regardless of object,
        static float highestPrice; // allows us to check stuff like the amount of objects we've made
    public:
        product(string nTag, float nTax=0.0, float nPrice=0.0, int nQuantity=0){
            this->tag=nTag;
            this->tax=nTax;
            this->buyPrice=nPrice;
            this->quantity=nQuantity;
            instances++;
            this->uuid=instances;
            if (nPrice>highestPrice){
                highestPrice=nPrice;
            }
        }
        void getTag(){}
        void setPrice(float newPrice){}
        void addStock(int amount){}
        void removeStock(int amount){}
        float getTax(){
            return this->buyPrice+=this->buyPrice*(this->tax/100);
        }
        void showProduct(){
            cout << "------------------\n";
            cout << "Tag: " << this->tag << "\n";
            (this->tax==0.0) ? cout << "Sales Tax: N/A" << "\n" : cout << "Sales Tax: " << this->tax << "\n";
            (this->buyPrice==0.0) ? cout << "Price: N/A" << "\n" : cout << "Price: " << this->buyPrice << "\n"; 
            (this->quantity==0) ? cout << "Quantity: N/A" << "\n" : cout << "Quantity: " << this->quantity << "\n";
            cout << "TTC: " << getTax() << "\n";
            cout << "------------------\n";
        }
        static int getInstances(){
            return instances;
        }
        static float getHighestPrice(){
            return highestPrice;
        }
};
int product::instances = 0;
float product::highestPrice = 0;

int main() {
    product prod1("stylo");
    product prod2("trousse",19.6, 20.30, 10);


    prod1.showProduct();
    prod2.showProduct();
    cout << "Products Quantity: "<< product::getInstances() << "\n";
    cout << "Highest Gross: " << product::getHighestPrice() << "\n";
    return 0;
};