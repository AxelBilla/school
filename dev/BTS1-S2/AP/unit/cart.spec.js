const { Article, Cart } = require('./cart');

// Test Articles for Cart
const coca = new Article('Coca Cola', 10);
const pepsi = new Article('pepsi', 5);
const hotdog = new Article('hotdog', 2);
const iphone = new Article('iphone', 200);

describe('Check Cart', () => {
  beforeEach(() => {
    var cart = new Cart(); 
    cart.addArticle(coca); // +10
    cart.addArticle(coca); // +10
    cart.addArticle(pepsi); // +5
    cart.addArticle(hotdog); // +2
    cart.addArticle(iphone); // +200 = 227
  });
  test('Show content of cart', () => {
    expect({cart.showCart()}).toBe({1: { art: coca, amount: 2 }, 2: { art: pepsi, amount: 1 }, 3: { art: hotdog, amount: 1 }, 4: { art: iphone, amount: 1 }});
  });
  test('Sum of cart', () => {
    expect({cart.processCart()}).toBe(227);
  });
  test('Add an article to cart', () => {
    expect({cart.addArticle(coca)}).toBe(true);
  });
});

describe('Check Articles', () => {
  test('Show ID of Article', () => {
    expect({coca.getID()}).toBe(1);
  });
  test('Show Price of Article', () => {
    expect({coca.getPrice()}).toBe(10);
  });
  test('Show Tag of Article', () => {
    expect({coca.getTag()}).toBe('Coca Cola');
  });
});
