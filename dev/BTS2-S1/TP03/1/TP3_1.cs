using System;
using cartTest;

public class TP03
{
    public static void Main()
    {
        if(cartTest.testReduction()) Console.WriteLine("Réussite: REDUC 1");
        if(cartTest.testReduction2()) Console.WriteLine("Réussite: REDUC 2");
        if(cartTest.testReduction3()) Console.WriteLine("Réussite: REDUC 3");
    }
}