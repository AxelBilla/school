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
	float sellPrice;
};

int stockDisplay(vector<product> stockList);
product ProductAdd(string labelName);
product StockAdd(product item, string labelName);
product StockRem(product item);

#endif