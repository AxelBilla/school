using System;
using CartTest;

public class TP03_2
{
    public static void Main()
    {
        if(CartTest.test_productsArray()) Console.WriteLine("SUCCESS: ARRAY");
        if(CartTest.test_getTotal()) Console.WriteLine("SUCCESS: TOTAL");
        if(CartTest.test_getPromotions()) Console.WriteLine("SUCCESS: PROM");
        if(CartTest.test_getTotalAfterPromotions()) Console.WriteLine("SUCCESS: TOTAL w/ PROM");
    }
}