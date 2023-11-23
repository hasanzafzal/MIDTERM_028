#include <iostream>
using namespace std;

int main()
{
	int points = 0, points_earned, points_redeemed;
	string choice_redeem;
	float purchase_total, discount;

	while (true)
	{
		cout << "Enter amount Purchased: ";
		cin >> purchase_total;
		points_earned = purchase_total / 10;
		points = points + points_earned;
		cout << "points earned = " << points_earned << endl;
		
		while (true)
		{
			cout << "redeem points for discount (yes or no)? ";
			cin >> choice_redeem;

			if (choice_redeem == "yes")
			{
				cout << "Enter no. of points to be redeemed: ";
				cin >> points_redeemed;
				
				if (points_redeemed > points)
				{
					cout << " Insufficinet points! retry again";
					continue;
				}
				discount = (points_redeemed * 5) / 10;
				cout << "Redeemed" << points_redeemed << " points for discount of $" << discount << endl;
				points = points - points_redeemed;
				cout << "points remaining = " << points << endl;
				break;
			}
		}
		system("pause");

	} return 0;
}