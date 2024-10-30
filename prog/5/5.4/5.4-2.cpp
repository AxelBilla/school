#include "5.4-2.h"

int main() {
	int reply;
	int p;
	bool check;
	string labelName;
	product newItem;
	vector<product> stock;
	cout << "[Welcome]";
	while (true)
	{
		cout << "\nWhat would you like to do?: \n  1: [SHOW PRODUCTS] | 2: [ADD STOCK] | 3: [REMOVE STOCK] | 4: [EXIT] \n\n[Input]: ";
		cin >> reply;
		switch (reply)
		{
		case 1:
			stockDisplay(stock);
			continue;

		case 2:
			cout << "\n\nWhich product's stock would you like to add to?\nLabel: ";
			cin >> labelName;
			p = 0;
			check = true;
			for (auto const& v : stock) {
				if (v.label == labelName) {
					stock[p] = StockAdd(stock[p], labelName);
					check = false;
				}
				p = p + 1;
			};
			if (check) {
				newItem = ProductAdd(labelName);
				stock.push_back(newItem);
			};
			continue;

		case 3:
			cout << "\n\nWhich product's stock would you like to remove?\nLabel: ";
			cin >> labelName; cout << "\n";

			p = 0;
			check = true;
			for (auto const& v : stock) {
				if (v.label == newItem.label) {
					stock[p] = StockRem(stock[p]);
					check = false;
				}
				p = p + 1;
			}
			if (check) {
				cout << "\n\nProduct not found.";
			};
			continue;
		case 4:
			break;
		}
		break;
	}
	return 0;
}