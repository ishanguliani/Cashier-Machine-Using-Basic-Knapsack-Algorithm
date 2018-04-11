#include<iostream>
#include<vector>
using namespace std;

vector<int> _coins;

int getNoOfCoins(int n)	{
	int count = 0, selected_coin;
	while(n != 0)	{
		//enter loop if some part of the total amount is still left to be changed to coins
		//check which coin will be the selected coin
		if(_coins[0] <= n)
			selected_coin = _coins[0];
		else if(_coins[1] <= n)
			selected_coin = _coins[1];
		else 
			selected_coin = _coins[2];
		//update total count
		count++;
		//update maximum coin value
		n -= selected_coin;
	}
	return count;
}

int main()	{
	// int t = 5;
	int n;
	_coins.push_back(10);
	_coins.push_back(5);
	_coins.push_back(1);

	// while(t--!=0)	{
		cin >> n;
		cout << getNoOfCoins(n);
	// }

	return 0;
}