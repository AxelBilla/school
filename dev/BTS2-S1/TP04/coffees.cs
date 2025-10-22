public class Coffee{
    private int coffee;
    
    public Coffee(int quantity){
        this.coffee = quantity;
    }

    public int getCoffee(){
        return this.coffee;
    }
}

public class Expresso : Coffee{
    public Expresso(): base(10){}
}

public class Macchiato : Coffee{
    private int sugar = 10;

    public Macchiato(): base(20){}

    public int getSugar(){
        return this.sugar;
    }
}

public class Latte: Coffee{
    private int milk = 10;

    public Latte(): base(20){}

    public int getMilk(){
        return this.milk;
    }

}