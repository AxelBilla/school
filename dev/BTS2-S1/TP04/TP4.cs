using System;
using coffees_Test;

public class TP04
{
    public static void Main()
    {
        if(CoffeesTest.test_hasCoffee()) Console.WriteLine("[SUCCESS]: hasCoffee");
        if(CoffeesTest.test_pourMilk()) Console.WriteLine("[SUCCESS]: pourMilk");
        if(CoffeesTest.test_pourSugar()) Console.WriteLine("[SUCCESS]: pourSugar");
        if(CoffeesTest.test_serve()) Console.WriteLine("[SUCCESS]: serve");
    }
}