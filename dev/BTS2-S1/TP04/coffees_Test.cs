using punit;
using machine;

public static class CoffeesTest{

    public static bool test_hasCoffee(){
        CoffeeMachine machine = new CoffeeMachine();

        return Assert.AreEqual(machine.hasCoffee(), true, "ERROR: hasCoffee");
    }

    public static bool test_pourSugar(){
        CoffeeMachine machine = new CoffeeMachine();
        Macchiato coffee = new Macchiato();

        int start_sugar = machine.getSugar();
        machine.pourSugar(coffee);
        return Assert.AreEqual((start_sugar-10), machine.getSugar(), "ERROR: pourSugar");
    }

    public static bool test_pourMilk(){
        CoffeeMachine machine = new CoffeeMachine();
        Latte coffee = new Latte();

        int start_sugar = machine.getMilk();
        machine.pourMilk(coffee);
        return Assert.AreEqual((start_sugar-10), machine.getMilk(), "ERROR: pourMilk");
    }

    public static bool test_serve(){
        CoffeeMachine machine = new CoffeeMachine();
        int start_coffee = machine.getCoffee();
        int start_milk = machine.getMilk();
        int start_sugar = machine.getSugar();
        bool isError = false;
    
        Expresso exp_coffee = new Expresso();
        machine.serve(exp_coffee);
        isError = !Assert.AreEqual((start_coffee-exp_coffee.getCoffee()), machine.getCoffee(), "ERROR: exp_serve_coffee");
        if(isError) return false;

        start_coffee = machine.getCoffee();
    
        Latte lat_coffee = new Latte();
        machine.serve(lat_coffee);
        isError = !Assert.AreEqual((start_coffee-lat_coffee.getCoffee()), machine.getCoffee(), "ERROR: lat_serve_coffee");
        if(isError) return false;

        isError = !Assert.AreEqual((start_milk-lat_coffee.getMilk()), machine.getMilk(), "ERROR: lat_serve_milk");
        if(isError) return false;

        start_coffee = machine.getCoffee();

        Macchiato mac_coffee = new Macchiato();
        machine.serve(mac_coffee);
        isError = !Assert.AreEqual((start_coffee-mac_coffee.getCoffee()), machine.getCoffee(), "ERROR: mac_serve_coffee");
        if(isError) return false;

        return Assert.AreEqual((start_sugar-mac_coffee.getSugar()), machine.getSugar(), "ERROR: mac_serve_sugar");

    }
}