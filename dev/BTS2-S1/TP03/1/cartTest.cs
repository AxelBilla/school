//using Microsoft.VisualStudio.TestTools.UnitTesting;
using punit;
using cart;

//[TestClass]
public class cartTest
{
    //[TestMethod]
    public static bool testReduction(){
        Cart testCart = new Cart();
        testCart.setTotal(10);
        
        float expected = 1f;
        return Assert.AreEqual(expected, testCart.reduction(), "ERROR REMISE");
    }

    //[TestMethod]
    public static bool testReduction2(){
        Cart testCart = new Cart();
        testCart.setTotal(120);
        
        float expected = 6f;
        return Assert.AreEqual(expected, testCart.reduction2(), "ERROR REMISE2");
    }

    //[TestMethod]
    public static bool testReduction3(){
        Cart testCart = new Cart();

        testCart.setTotal(120);
        float expected = 6f;

        bool result = Assert.AreEqual(expected, testCart.reduction3(), "ERROR REMISE3 (100+)");
        if(!result) return false;

        testCart.setTotal(60);
        float expected = 1.2f;
        result = Assert.AreEqual(expected, testCart.reduction3(), "ERROR REMISE3 (50-100)");
        if(!result) return false;
        
        testCart.setTotal(5);
        float expected = 0f;
        return Assert.AreEqual(expected, testCart.reduction3(), "ERROR REMISE3 (<50)");
    }
}