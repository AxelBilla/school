#include "5.4-2.h"

int stockDisplay(vector<product> stockList) {
	int i = 0;
	if (stockList.empty()) {
		cout << "\nNo products listed.\n\n";
	}
	for (auto const &v : stockList) {
		i = i + 1;
		cout << "\n[ Product #" << i << " ]\n"<< "------------------" << "\n|-Label: " << v.label << "\n|-Quantity: " << v.amount << "\n|-Buy Price: " << v.buyPrice << " EUR" << "\n|-Untaxed Price: " << v.noTaxPrice << " EUR" << "\n|-Sell Price: " << v.sellPrice << " EUR\n------------------\n\n";
	}
	return 0;
}

product ProductAdd(string labelName, float margin) {
	product received;
	received.label = labelName;
	received.amount = -1; received.buyPrice = -1;
	while (received.amount < 0) {
		cout << "Quantity: ";
		cin >> received.amount;
	}
	while (received.buyPrice < 0) {
		cout << "Price: ";
		cin >> received.buyPrice;
	}
	received.noTaxPrice = received.buyPrice * margin;
	received.sellPrice = received.noTaxPrice * 1.56;
	return received;
}

product StockAdd(product item,string labelName, float margin) {
	int addedAmount = -1;
	float addedPrice = -1;
	while (addedAmount < 0) {
		cout << "Added Quantity: ";
		cin >> addedAmount;
	}
	while (addedPrice < 0) {
		cout << "Added Price: ";
		cin >> addedPrice;
	}
	if (addedPrice != 0) {
		item.buyPrice = (((item.buyPrice * item.amount) + (addedAmount * addedPrice)) / (item.amount + addedAmount));
		item.noTaxPrice = item.buyPrice * margin;
		item.sellPrice = item.noTaxPrice * 1.56;

	}
	item.amount = item.amount + addedAmount;
	return item;
}

product StockRem(product item) {
	int soldAmount = -1;
	while (soldAmount < 0) {
		cout << "\nQuantity: ";
		cin >> soldAmount;
	}
	item.amount = item.amount - soldAmount;
	return item;
}