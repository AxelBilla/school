#ifndef TD542_H
#define TD542_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct product {
	string label;
	int amount;
	float buyPrice;
	float noTaxPrice;
	float sellPrice;
};

int stockDisplay(vector<product> stockList);
product ProductAdd(string labelName, float margin);
product StockAdd(product item, string labelName, float margin);
product StockRem(product item);

#endif