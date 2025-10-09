using System.Collections.Generic;
using Pair;

public class Cart{
    public string reference;
    public Dictionary<string, Pair<int, float>> products = new Dictionary<string, Pair<int, float>>();

    public Cart(string reference){
        this.reference = reference;
    }

    public void addProduct(Product product, int quantity){
        Pair<int, float> product_values = new Pair<int, float>(quantity, product.price);

        if(!this.products.ContainsKey(product.reference)) this.products.Add(product.reference, product_values);
        else this.products[product.reference].first += quantity;
    }

    public float getTotal(){
        float total = 0f;
        foreach(Pair<int, float> product_info in this.products.Values){
            total+=product_info.first*product_info.second;
        }
        return total;
    }

    public float getPromotions(){
        float promo = 0.5f; // 50%
		int perProduct = 2; // When to give discount
		
        float total = 0f;
        foreach(Pair<int, float> product_info in this.products.Values){
            total+= ((int)(product_info.first / perProduct))*(product_info.second*promo);
        }
        return total;
    }

    public float getTotalAfterPromotions(){
        return this.getTotal()-this.getPromotions();
    }
}