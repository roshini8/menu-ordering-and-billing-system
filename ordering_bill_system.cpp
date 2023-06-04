//Program for BITP Project

#include <iostream>
#include <iomanip>
#include <cctype>
#include <fstream>

using namespace std;

//Declaration of datatypes
int charge1 = 0, charge2 = 0, charge3 = 0, charge4 = 0, charge5 = 0, charge6 = 0, charge7 = 0, charge8 = 0, charge9 = 0, charge10 = 0;
int price1 = 15, price2 = 17, price3 = 15, price4 = 30, price5 = 30, price6 = 10, price7 = 8, price8 = 5, price9 = 5, price10 = 6;
int quantity1 = 0, quantity2 = 0, quantity3 = 0, quantity4 = 0, quantity5 = 0, quantity6 = 0, quantity7 = 0, quantity8 = 0, quantity9 = 0, quantity10 = 0;
int choice,TOTAL;
int menuchoose;
int press, tablenumber;


//function prototype
void order();
void bill();
void reviewbill()
void mainmenu();
void calculation();
void endprogram();

//create a file name
ofstream orderlist; 

int main()
{
	
	orderlist.open("Order List.txt",fstream::app); //open file name and not rewrite any data

		cout << " WELCOME TO SEASON CAFE" << endl;
		cout << " Please Enter Your Table Number" << endl;
		cin >> tablenumber;
		orderlist << tablenumber << endl;
		cout << endl;
	
		cout << " Press 1 to continue ordering" << endl;
		cout << "Press any number to end program" << endl;
		cin >> press;

		if (press == 1)
		{
			mainmenu();
		}
		else
		{
			cout << "Thank you" << endl;
			return 0;
		}

		orderlist.close();
		return 0;
}

void mainmenu()
{
	cout << " " << endl;
	cout << " WELCOME TO SEASON CAFE" << endl;
	cout << "Your Table Number is " << tablenumber << endl;
	cout << " Enter 01 for Menu Ordering" << endl;
	cout << " Enter 02 for Review Bill" << endl;
	cout << " Enter 03 for Exit" << endl;

	cout << "Please enter the number to proceed to menu" << endl << endl;
	cin >> menuchoose;

	switch (menuchoose)
	{
	case 1:
		order();
		break;

	case 2:
		reviewbill();
		break;

	case 3:
		exit;
		break;

	default: 
		cout << "Please enter valid number" << endl;
	}


}


void order()
{
	do
	{
		
		cout << "  " << endl;
		cout << setw(40) << right << "MENU" << endl;
		cout << setw(30) << right << "       =====================================================" << endl << endl;
		cout << setw(40) << right << "FOOD MENU  " << endl;
		cout << "  " << endl;
		cout << "	Item[1]		DURIAN CREAM PUFF " << setw(25) << right << "RM15" << endl;
		cout << "	Item[2]		STRAWBERRY SWISS ROLL " << setw(21) << right << "RM17" << endl;
		cout << "	Item[3]		MANGO CHEESE CAKE " << setw(25) << right << "RM15" << endl;
		cout << "	Item[4]		MACARON LYCHEE ROSE & RED VELVET " << setw(10) << right << "RM30" << endl;
		cout << "	Item[5]		BUTTER CROISSANT " << setw(26) << right << "RM30" << endl << endl;
		cout << "  " << endl;

		cout << "  " << endl;
		cout << setw(40) << right << "BEVERAGE MENU  " << endl;
		cout << "  " << endl;
		cout << "	Item[6]		MANGO TANGO	" << setw(27) << right << "RM10" << endl;
		cout << "	Item[7]		GREEN SMOOTHIE " << setw(27) << right << "RM8" << endl;
		cout << "	Item[8]		CAPPUCINO " << setw(32) << right << " RM5" << endl;
		cout << "	Item[9]		LATTE " << setw(36) << right << "RM5" << endl;
		cout << "	Item[10]	MOCHA " << setw(36) << right << " RM6" << endl << endl;
		cout << "  " << endl << endl;
		cout << "Enter [11] when you want to go to review bill" << endl;
		cout << "Enter [12] to go back to main menu" << endl << endl;

		cout << "From the menu, what would you like :" << endl;
		cin >> choice;
	

		switch (choice)
		{
		case 1:
			cout << " Enter the quantity order for DURIAN CREAM PUFF" << endl;
			cin >> quantity1;
			cout << " Your order succesfully save" << endl;
			break;

		case 2:
			cout << " Enter the quantity order for STRAWBERRY SWISS ROLL" << endl;
			cin >> quantity2;
			cout << " Your order succesfully save" << endl;
			break;

		case 3:
			cout << " Enter the quantity order for MANGO CHEESE CAKE " << endl;
			cin >> quantity3;
			cout << " Your order succesfully save" << endl;
			break;

		case 4:
			cout << " Enter the quantity order for MACARON LYCHEE ROSE & RED VELVET" << endl;
			cin >> quantity4;
			cout << " Your order succesfully save" << endl;
			break;

		case 5:
			cout << " Enter the quantity order for BUTTER CROISSANT" << endl;
			cin >> quantity5;
			cout << " Your order succesfully save" << endl;
			break;

		case 6:
			cout << " Enter the quantity order for MANGO TANGO" << endl;
			cin >> quantity6;
			cout << " Your order succesfully save" << endl;
			break;

		case 7:
			cout << " Enter the quantity order for GREEN SMOOTHIE" << endl;
			cin >> quantity7;
			cout << " Your order succesfully save" << endl;
			break;

		case 8:
			cout << " Enter the quantity order for CAPPUCINO" << endl;
			cin >> quantity8;
			cout << " Your order succesfully save" << endl;
			break;

		case 9:
			cout << " Enter the quantity order for LATTE" << endl;
			cin >> quantity9;
			cout << " Your order succesfully save" << endl;
			break;

		case 10:
			cout << " Enter the quantity order for MOCHA" << endl;
			cin >> quantity10;
			cout << " Your order succesfully save" << endl;
			break;

		case 11:
			bill();
			break;

		case 12:
			mainmenu();
			break;

		default:
			cout << "Please enter a valid item number." << endl << endl;
			break;
		}
	} while (choice < 10);

}

void calculation()
{
	charge1 = quantity1 * price1;
	charge2 = quantity2 * price2;
	charge3 = quantity3 * price3;
	charge4 = quantity4 * price4;
	charge5 = quantity5 * price5;
	charge6 = quantity6 * price6;
	charge7 = quantity7 * price7;
	charge8 = quantity8 * price8;
	charge9 = quantity9 * price9;
	charge10 = quantity10 * price10;
	TOTAL = charge1 + charge2 + charge3 + charge4 + charge5 + charge6 + charge7 + charge8 + charge9 + charge10;
}

void bill()
{
	calculation();

	cout << "Hello " << tablenumber << endl;
	cout << "You Have Ordered:\n\n";
	cout << "================================================================================================================\n";

	cout << left << setw(15) << "ITEM" << right << setw(30) << "QUANTITY" << right << setw(15) << "UNIT PRICE" << right << setw(20) << "AMOUNT OF SALE\n";

	cout << "=================================================================================================================";

	cout << "\nDurian Cream Puff:\t" << setw(17) << right << quantity1 << setw(16) << right << price1 << setw(20) << right << charge1 << endl;
	cout << "\nStrawberry Swiss Roll:\t" << setw(17) << right << quantity2 << setw(16) << right << price2 << setw(20) << right << charge2 << endl;
	cout << "\nMango Cheese Cake:\t" << setw(17) << right << quantity3 << setw(16) << right << price3 << setw(20) << right << charge3 << endl;
	cout << "\nMacaron Lychee Rose & Red Velvet:\t" << quantity4 << setw(16) << right << price4 << setw(20) << right << charge4 << endl;
	cout << "\nButter Croissant:\t" << setw(17) << right << quantity5 << setw(16) << right << price5 << setw(20) << right << charge5 << endl;
	cout << "   " << endl;
	cout << "\nMango Tango:\t" << setw(25) << right << quantity6 << setw(16) << right << price6 << setw(20) << right << charge6 << endl;
	cout << "\nCappucino:\t" << setw(25) << right << quantity7 << setw(16) << right << price7 << setw(20) << right << charge7 << endl;
	cout << "\nGreen Smoothie:\t" << setw(25) << right << quantity8 << setw(16) << right << price8 << setw(20) << right << charge8 << endl;
	cout << "\nLatte:\t" << setw(33) << right << quantity9 << setw(16) << right << price9 << setw(20) << right << charge9 << endl;
	cout << "\nMocha:\t" << setw(33) << right << quantity10 << setw(16) << right << price10 << setw(20) << right << charge10 << endl;
	cout << " Your total bil is RM" << TOTAL << endl<< endl; 


	orderlist << "Hello " << tablenumber << endl;
	orderlist << "You Have Ordered :"<< endl;
	orderlist << "================================================================================================================\n";
	orderlist << left << setw(15) << "ITEM" << right << setw(30) << "QUANTITY" << right << setw(15) << "UNIT PRICE" << right << setw(20) << "AMOUNT OF SALE\n";
	orderlist << "=================================================================================================================";
	orderlist << "\nDurian Cream Puff:\t" << setw(17) << right << quantity1 << setw(16) << right << price1 << setw(20) << right << charge1 << endl;
	orderlist << "\nStrawberry Swiss Roll:\t" << setw(17) << right << quantity2 << setw(16) << right << price2 << setw(20) << right << charge2 << endl;
	orderlist << "\nMango Cheese Cake:\t" << setw(17) << right << quantity3 << setw(16) << right << price3 << setw(20) << right << charge3 << endl;
	orderlist << "\nMacaron Lychee Rose & Red Velvet:\t" << setw(1) << right << quantity4 << setw(16) << right <<  price4 << setw(20) << right << charge4 << endl;
	orderlist << "\nButter Croissant:\t" << setw(17) << right << quantity5 << setw(16) << right << price5 << setw(20) << right << charge5 << endl;
	orderlist << "   " << endl;
	orderlist << "\nMango Tango:\t" << setw(25) << right << quantity6 << setw(16) << right << price6 << setw(20) << right << charge6 << endl;
	orderlist << "\nCappucino:\t" << setw(25) << right << quantity7 << setw(16) << right << price7 << setw(20) << right << charge7 << endl;
	orderlist << "\nGreen Smoothie:\t" << setw(25) << right << quantity8 << setw(16) << right << price8 << setw(20) << right << charge8 << endl;
	orderlist << "\nLatte:\t" << setw(33) << right << quantity9 << setw(16) << right << price9 << setw(20) << right << charge9 << endl;
	orderlist << "\nMocha:\t" << setw(33) << right << quantity10 << setw(16) << right << price10 << setw(20) << right << charge10 << endl; 
	orderlist << " Your total bil is RM" << TOTAL << endl << endl;

	mainmenu();

}

void reviewbill()
{
	calculation();

	cout << "Hello " << tablenumber << endl;
	cout << "You Have Ordered:\n\n";
	cout << "================================================================================================================\n";

	cout << left << setw(15) << "ITEM" << right << setw(30) << "QUANTITY" << right << setw(15) << "UNIT PRICE" << right << setw(20) << "AMOUNT OF SALE\n";

	cout << "=================================================================================================================";

	cout << "\nDurian Cream Puff:\t" << setw(17) << right << quantity1 << setw(16) << right << price1 << setw(20) << right << charge1 << endl;
	cout << "\nStrawberry Swiss Roll:\t" << setw(17) << right << quantity2 << setw(16) << right << price2 << setw(20) << right << charge2 << endl;
	cout << "\nMango Cheese Cake:\t" << setw(17) << right << quantity3 << setw(16) << right << price3 << setw(20) << right << charge3 << endl;
	cout << "\nMacaron Lychee Rose & Red Velvet:\t" << quantity4 << setw(16) << right << price4 << setw(20) << right << charge4 << endl;
	cout << "\nButter Croissant:\t" << setw(17) << right << quantity5 << setw(16) << right << price5 << setw(20) << right << charge5 << endl;
	cout << "   " << endl;
	cout << "\nMango Tango:\t" << setw(25) << right << quantity6 << setw(16) << right << price6 << setw(20) << right << charge6 << endl;
	cout << "\nCappucino:\t" << setw(25) << right << quantity7 << setw(16) << right << price7 << setw(20) << right << charge7 << endl;
	cout << "\nGreen Smoothie:\t" << setw(25) << right << quantity8 << setw(16) << right << price8 << setw(20) << right << charge8 << endl;
	cout << "\nLatte:\t" << setw(33) << right << quantity9 << setw(16) << right << price9 << setw(20) << right << charge9 << endl;
	cout << "\nMocha:\t" << setw(33) << right << quantity10 << setw(16) << right << price10 << setw(20) << right << charge10 << endl;
	cout << " Your total bil is RM" << TOTAL << endl << endl;

	mainmenu();

}


void endprogram()
{
	cout << "Thank you for coming to Season Cafe. Have a nice day.";
	exit;
}

