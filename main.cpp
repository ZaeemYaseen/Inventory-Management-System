// main.cpp FILE
// -------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------------------------
#include"Header.h"

int main()
{
	int choice=0, whoareyou;
	greatings();
	whoareyou = identity();
	while (whoareyou == 1 || whoareyou == 2 || whoareyou == 3 || whoareyou == 4)
	{
		if (whoareyou == 1)
		{

		}
		else if (whoareyou == 2)
		{
			Shopkeeper shop;    //SHOPKEEPER OBJECT
			choice = userchoice();
			while (choice >= 1 && choice <= 6)
			{
				fstream file1, file;
				if (choice == 1)
				{
					//ASKING INFO OF THE SHOPKEEPER
					shop.setshopkeeperid();
					shop.setfirstname();
					shop.setlastname();
					shop.setusername();
					shop.setemail();
					shop.setpassword();
					shop.setregistration();
					shop.setgender();
					shop.setbloodgroup();
					shop.setcontactnum();
					shop.setaddress();

					//FILE HANDLING
					file.open("shopkeeper.txt", ios::app | ios::out | ios::in);
					while (file)
					{
						file << shop.getshopkeeperid() << setw(15)
							<< shop.getfirstname() << setw(15)
							<< shop.getlastname() << setw(15)
							<< shop.getusername() << setw(15)
							<< shop.getpassword() << setw(15)
							<< shop.getemail() << setw(30) 
							<< shop.getregistration() << setw(15)
							<< shop.getgender() << setw(15)
							<< shop.getbloodgroup() << setw(15)
							<< shop.getcontactnum() << setw(15)
							<< shop.getaddress() << endl;
						break;
					}
					file.close();

				}
				else if (choice == 2)
				{
					bool status = shop.isLogin();
					if (!status)
					{
						cout << "LogIn Failed! Rgister yourself First" << endl;
					}
				}
				else if (choice == 3)
				{
					shop.setproductname();
					shop.setproductquantity();
					shop.setproductcategory();
					shop.setp_id();
					shop.setsizeofproduct();
					shop.setcolorofproduct();
					shop.setproductprice();
					/*shop.setdescriptionofproduct();*/
					file.open("products.txt", ios::app | ios::out | ios::in);
					while (file)
					{
						file << shop.getproductid() << setw(15)
							<< shop.getproductname() << setw(15)
							<< shop.getproductquantity() << setw(10)
							<< shop.getproductcategory() << setw(10)
							<< shop.getsizeofproduct() << setw(10)
							<< shop.getcolorofproduct() << setw(10)
							<< shop.getproductprice()
							/*<<"     "
							<< shop.getdescriptionofproduct() << setw(30)*/ << endl;
						cout << "\n\n\t\t----------ADDED THE PRODUCT.----------.";
						Sleep(2000);
						break;
					}
					file.close();
			 }
				else if (choice == 4)
				{
					shop.editproduct();
				}
				else if (choice == 5)
				{
					shop.viewproducts();
				}
				else if (choice == 6)
				{
					cout << "\n\n\n\n\n";
					cout << "\t\t\t";
					cout << "----------EXITED----------\n\n";
					Sleep(1500);
					goto firstexit;
				}
				choice = userchoice();
			}
		firstexit:
			cout << "";
		}
		else if (whoareyou == 3)
		{
			Customer c1, cust;
			int choice = 0;
			/*ASKING INFO OF THE Customer*/
			while (choice != 3)
			{
				cout << "\nChoose from the following choices" << endl;
				cout << "________________________________________________________________________________________________________________________" << endl;
				cout << "1. Registration" << endl;
				cout << "2. Log-In" << endl;
				cout << "3. Exit" << endl;
				cout << "\nEnter Your Choice: ";
				cin >> choice;
				switch (choice)
				{
				case 1:
				{
					cout << "\nEnter your Crediential to Register Yourself" << endl;
					cust.setcustomerid();
					cust.setfirstname();
					cust.setlastname();
					cust.setusername();
					cust.setpassword();
					cust.setemail();
					cust.setregistration();
					cust.setgender();
					cust.setbloodgroup();
					cust.setcontactnum();
					cust.setaddress();

					//FILE HANDLING
					fstream file;
					file.open("Customers.txt", ios::app | ios::out | ios::in);

					while (file)
					{
						file << cust.getcustomersid() << setw(15)
							<< cust.getfirstname() << setw(15)
							<< cust.getlastname() << setw(15)
							<< cust.getusername() << setw(15)
							<< cust.getpassword() << setw(30)
							<< cust.getemail() << setw(20)
							<< cust.getregistration() << setw(15)
							<< cust.getgender() << setw(15)
							<< cust.getbloodgroup() << setw(15)
							<< cust.getcontactnum() << setw(15)
							<< cust.getaddress() << endl;
						break;
					}
					file.close();
					break;
				}
				case 2:
				{
					bool status = c1.isLogin();
					if (!status)
					{
						cout << "LogIn Failed! Rgister yourself First" << endl;
					}
					else
					{
						cout << "________________________________________________________________________________________________________________________" << endl;
						cout << "\n\t\t\t\t\t\tWelcome " << c1.username << endl;
						cout << "Choose from the following options" << endl;
						cout << "1. View Product" << endl;
						cout << "2. Purchase Product" << endl;
						cout << "3. Check-Out " << endl;
						cout << "4. Exit" << endl;
						int x;
						cout << "\nEnter Choice : ";
						cin >> x;

						if (x == 1)
						{
							c1.List();
						}
						else if (x == 2)
						{
							c1.purchaseProduct();
						}
						else if (x == 3)
						{
							cout << "comming Soon" << endl;
						}
						else if (x == 4)
						{
							cout << "Thanks for shopping from Extra Store" << endl;
						}
						else
						{
							cout << "Error! Choose from the following options" << endl;
						}
					}
					break;
				}
				case 3:
					return 0;

				default:
					cout << "Choose only from Valid Options." << endl;
					break;
				}
			}
		}
		else if (whoareyou == 4)
		{
		exit();
			goto secondexit;
		}
		whoareyou = identity();
	}
secondexit:
	return 0;
}
