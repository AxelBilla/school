using Cart;
using punit;

public static class CartTest{
    public static bool test_productsArray(){
        Cart test_cart = new Cart("");
        string expeted_ref = "test_ref";
        test_cart.addProduct(new Product(expected_ref, "", 0f), 1);

        return Assert.HasKey(test_cart.prodcuts, expected_ref, "ERROR: ARRAY" )
    }

    public static bool test_getTotal(){
        Cart test_cart = setupCart();

        float expected = 28f;
        return Assert.AreEqual(expected, test_cart.getTotal(), "ERROR: TOTAL")
    }

    public static bool test_getPromotions(){
        Cart test_cart = setupCart();

        float expected = 5.5f;
        return Assert.AreEqual(expected, test_cart.getPromotions(), "ERROR: PROMO")
    }

    public static bool test_getTotalAfterPromotions(){
        Cart test_cart = setupCart();

        float expected = 23.5f;
        return Assert.AreEqual(expected, test_cart.getTotalAfterPromotions(), "ERROR: TOTAL W/ PROMO")
    }

    private Cart setupCart(){
        Cart test_cart = new Cart("");
        test_cart.addProduct(new Product("test_1", "test_name_1", 1f), 2); // 2*1 = 2  // = 0.5
        test_cart.addProduct(new Product("test_2", "test_name_2", 2f), 4); // 4*2 = 8  // = 2
        test_cart.addProduct(new Product("test_3", "test_name_3", 3f), 6); // 6*3 = 18 // = 3
                                                                           //     = 29 // = 5.5 // = 23.5
        return test_cart;
    }
}