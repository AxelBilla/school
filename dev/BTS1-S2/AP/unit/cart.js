class Article {
    #id;
    #tag = 'N/A';
    #price = 0;
    static #instances = 0;
    constructor(newTag, newPrice) {
      Article.#instances += 1;
      this.id = Article.#instances;
      this.tag = newTag;
      this.price = newPrice;
    }
    getID() {
      return this.id;
    }
    getPrice() {
      return this.price;
    }
    getTag() {
      return this.tag;
    }
};

class Cart {
    #content = {};
  
    // Method to show inside of cart
    showCart() {
        return this.#content;
    }
    
    // Method to add an article to cart
    addArticle(article) {
      if (this.#content.hasOwnProperty(article.getID())) { // IDs are unique, so if it exist in our object, we can just add one
        this.#content[article.getID()].amount += 1;
        return true;
      } else {
        this.#content[article.getID()] = { art: article, amount: 1 };
        return true;
      }
    }
  
    // Method to calc. prices & empty it
    processCart() {
      let totalPrice = 0;
      for (let i = 1; i <= Object.keys(this.#content).length; i++) {
        totalPrice += this.#content[i].amount * this.#content[i].art.getPrice();
      }
      this.#content = {};
      return totalPrice;
    }
}
  