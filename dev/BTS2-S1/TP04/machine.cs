using coffees;

public class CoffeeMachine{
    private int coffee = 1000;
    private int sugar = 500;
    private int milk = 200;

    public bool hasCoffee(){
        return this.coffee > 0;
    }

    public void pourSugar(Macchiato coffee){
        this.sugar -= coffee.getSugar();
    }
    public void pourMilk(Latte coffee){
        this.milk -= coffee.getMilk();
    }

    public void serve(Coffee coffee){
        if(hasCoffee()){
            this.coffee -= coffee.getCoffee();

            if(coffee is Macchiato){
                this.pourSugar((Macchiato)coffee);
            }

            if(coffee is Latte){
                this.pourMilk((Latte)coffee);
            }

        }
    }

    public int getCoffee(){
        return this.coffee;
    }
    public int getMilk(){
        return this.milk;
    }
    public int getSugar(){
        return this.sugar;
    }
}