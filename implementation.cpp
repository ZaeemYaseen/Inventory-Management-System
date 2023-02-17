// implementaion.CPP FILE
// ----------------------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------------------------------------------
// ----------------------------------------------------------------------------------------------------------------------------------
#include"Header.h"

void greatings()
{
	cout << "\n\n\n\n\n";
	cout << "\t\t\t  ____________________________" << endl;
	cout << "\t\t\t |----------------------------|" << endl;
	cout << "\t\t\t |----------WELCOME-----------|" << endl;
	cout << "\t\t\t |----------------------------|" << endl;
	cout << "\t\t\t |____________________________|" << endl;
	cout << "\n\n\n";
	Sleep(2000);
}
int identity()
{
	int who;
	cout << "\n\n\n\n\n";
	cout << "\t\t\t 1)   ADMIN.\n" << endl;
	cout << "\t\t\t 2)   SHOP KEEPER.\n" << endl;
	cout << "\t\t\t 3)   CUSTOMER.\n" << endl;
	cout << "\t\t\t 4)   EXIT.\n" << endl;
	cout << "\t\t\t Who are you form the above mentioned\n";
	cout << "\t\t\t options(enter 1 for admin and so on) : \n" << endl;
	cin >> who;
	Sleep(1000);
	system("cls");
	return who;
}
int userchoice()
{
	int userchoice;
	cout << "\n\n\n";
	cout << "\t\t\t---------- HELLO SHOPKEEPER.----------\n";
	cout << "\t\t\tWhat action do u want to perform:\n";
	cout << "\t\t\t1)  REGISTER TO SYSTEM.\t";
	cout << "\t\t\t2)  SIgn In.\n";
	cout << "\t\t\t3)  ADD NEW PRODUCT.\t";
	cout << "\t\t\t4)  EDIT PRODUCT DETAILS.\n";
	cout << "\t\t\t5)  VIEW PRODUCTS.\t";
	cout << "\t\t\t6)  EXIT." << endl;
	cin >> userchoice;
	system("cls");
	return userchoice;
}
bool Shopkeeper::isLogin() //login Fuction for customer
{
	string username, password;
	cout << "-----------------------------------------------Welcome to Extra Store---------------------------------------------------" << endl;
	cout << "Enter your username and passsword to LogIn" << endl;
	cout << "User Name: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	ifstream file;
	string fn, ln, un, p, em, Rd, gnd, Bld, add;
	int si;
	long long int CN;
	file.open("shopkeeper.txt");
	file >> si >> fn >> ln >> un >> p >> em >> Rd >> gnd >> Bld >> CN >> add;
	while (!file.eof())
	{
		if (username == un && password == p) // Cecking if the user enter the correct username and password
		{
			cout << "Sign in was successfull.";
			Sleep(1000);
			return true;
		}
		file >> si >> fn >> ln >> un >> p >> em >> Rd >> gnd >> Bld >> CN >> add;
	}
	file.close();
	return false;
}
//SETTER FUNCTION OF SHOP KEEPER TO REGISTER THE SHOP KEEPER
void Shopkeeper::setfirstname()
{
	cout << "First Name: ";
	cin>>FirstName;
}
void Shopkeeper::setlastname()
{
	cout << "Last Name: ";
	cin>>LastName;
}
void Shopkeeper::setshopkeeperid()
{
	S_id = S_id + 1;
}
void Shopkeeper::setusername()
{
	cout << "User Name: ";
	cin>>UserName;
}
void Shopkeeper::setemail()
{
	cout << "Email: ";
	cin>>Email;
}
void Shopkeeper::setpassword()
{
	cout << "Password: ";
	cin>>Password;
}
void Shopkeeper::setregistration()
{
	cout << "Registration Date: ";
	cin>>RegistrationDate;
}
void Shopkeeper::setgender()
{
	cout << "Gender: ";
	cin>>Gender;
}
void Shopkeeper::setbloodgroup()
{
	cout << "Blood Group: ";
	cin>>BloodGroup;
}
void Shopkeeper::setcontactnum()
{
	cout << "Contact Number: ";
	cin>>ContactNum;
}
void Shopkeeper::setaddress()
{
	cout << "Address: ";
	cin>>Address;
}

//GETTER FUNCTION FOR SHOPKEEPER CLASS TO DISPLAY THE INFO OF ALL THE SHOP KEEPERS
string Shopkeeper::getfirstname()
{
	return FirstName ;
}
string Shopkeeper::getlastname()
{
	return LastName;
}
int Shopkeeper::getshopkeeperid()
{
	return S_id;
}
string Shopkeeper::getusername()
{
	return UserName;

}
string Shopkeeper::getemail()
{
	return Email;
}
string Shopkeeper::getpassword()
{
	return Password;
}
int Shopkeeper::getregistration()
{
	return RegistrationDate;
}
string Shopkeeper::getgender()
{
	return Gender;
}
string Shopkeeper::getbloodgroup()
{
	return BloodGroup;
}
long long int Shopkeeper::getcontactnum()
{
	return ContactNum;
}
string Shopkeeper::getaddress()
{
	return Address;
}

//SETTER FUNCTION OF SHOP KEEPER TO ADD NEW PRODUCT
void Shopkeeper::setproductname()
{
	cout << "Product Name: ";
	cin >> ProductName;
}
void Shopkeeper::setdescriptionofproduct()
{
	cin.ignore();
	cout << "Description of Product: ";
	getline(cin, ProductDescription);

}
void Shopkeeper::setproductcategory()
{
	cout << "Product Category Name(Sports/Garments/Eatables/Medicines/Fashion): ";
	cin >> ProductCategory;
}
void Shopkeeper::setp_id()
{
	P_id = P_id + 1;
}
void Shopkeeper::setsizeofproduct()
{
	cout << "Size of product(Small/Medium/Large): ";
	cin >> ProductSize;
}
void Shopkeeper::setcolorofproduct()
{
	cout << "Color of product: ";
	cin >> ProductColor;
}
void Shopkeeper::setproductquantity()
{
	cout << "Product Quantity: ";
	cin >> ProductQuantity;
}
void Shopkeeper::setproductprice()
{
	cout << "Product Price: ";
	cin >> ProductPrice;
}

//GETTER FUNCTION FOR SHOPKEEPER CLASS TO DISPLAY THE INFO OF ALL THE PRODUCTS
string Shopkeeper::getproductname()
{
	return ProductName;
}
string Shopkeeper::getdescriptionofproduct()
{
	return ProductDescription;
}
string Shopkeeper::getproductcategory()
{
	return ProductCategory;
}
int Shopkeeper::getproductid()
{
	return P_id;
}

string Shopkeeper::getsizeofproduct()
{
	return ProductSize;
}
string Shopkeeper::getcolorofproduct()
{
	return ProductColor;
}
long int Shopkeeper::getproductquantity()
{
	return ProductQuantity;
}
int Shopkeeper::getproductprice()
{
	return ProductPrice;
}

void Shopkeeper::editproduct()
{
	fstream newfile, oldfile;
	int oldP_ID, newP_ID, oldquantity, newquantity, oldprice, newprice;
	string oldname, newname, oldcategory, newcategory, oldsize, newsize, oldcolor, newcolor/*, olddescription, newdescription*/;
	cout << "Enter serial number/line number/product ID which u want to edit:";
	cin >> newP_ID;
	oldfile.open("products.txt", ios::in);
	if (!oldfile)
	{
		cout << "\n\n\n\n\t\t\tFile doesn't exsists.\n";
		oldfile.close();
		goto p;
	}
	newfile.open("products1.txt", ios::out | ios::app);
	oldfile >> oldP_ID >> oldname >> oldquantity >> oldcategory >> oldsize >> oldcolor >>oldprice/*>> olddescription */;
	while (!oldfile.eof())
	{
		if (newP_ID == oldP_ID)
		{
			cout << "Product Name: ";
			cin >> newname;
			cout << "Product Quantity: ";
			cin >> newquantity;
			cout << "Product Category Name(Sports/Garments/Eatables/Medicines/Fashion): ";
			cin >> newcategory;
			cout << "Size of product(Small/Medium/Large): ";
			cin >> newsize;
			cout << "Color of the product: ";
			cin >> newcolor;
			cout << "Product Price: ";
			cin >> newprice;
			/*cout << "Description of Product: ";
			cin >> newdescription;*/
			newfile << newP_ID << setw(15)
				<< newname << setw(15)
				<< newquantity << setw(10)
				<< newcategory << setw(10)
				<< newsize << setw(10)
				<< newcolor << setw(10)
				<< newprice << setw(10)
				/*<< "     "
				<< newdescription << setw(40) */<< endl;
			cout << "----------FILE UPDATED.----------";
			Sleep(2000);
		}
		else
		{
			newfile << oldP_ID << setw(15)
				<< oldname << setw(15)
				<< oldquantity << setw(10)
				<< oldcategory << setw(10)
				<< oldsize << setw(10)
				<< oldcolor << setw(10)
				<< oldprice << setw(10) << endl;
				/*<< "     "
			    << olddescription;*/
		}
		oldfile >> oldP_ID >> oldname >> oldquantity >> oldcategory >> oldsize >> oldcolor >>oldprice/*>> olddescription*/;
	}
	oldfile.close();
	newfile.close();
	remove("products.txt");
	rename("products1.txt", "products.txt");
p:
	cout << "\n";
}
void Shopkeeper::viewproducts()
{
	cout << "\n\n\n\n\n";
	fstream file;
	int P_ID, quantity, price;
	string name, category, size, color/*, olddescription, newdescription*/;
	file.open("products.txt", ios::in);
	file >> P_ID >> name >> quantity >> category >> size >> color >>price/*>> olddescription*/;
	while (!file.eof())
	{
		cout << P_ID << setw(10);
		cout << name<< setw(10);
		cout << quantity << setw(10);
		cout << category << setw(10);
		cout << size << setw(10);
		cout << color << setw(10);
		cout << price << endl;
		/*cout << "Description of Product: ";
		cin >> newdescription;*/
		file >> P_ID >> name >> quantity >> category >> size >> color >>price/*>> olddescription*/;
	}
	Sleep(3000);
	file.close();
}
void exit()
{
	cout << "\n\n\n\n\n";
	cout << "\t\t\t";
	cout << "----------EXITED----------\n\n";
	Sleep(1500);
}

/*----------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------
------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


Customer::Customer() // Default constructor
{
	username = "smile";
	password = "smile";
	money = 0;

	FirstName = "";
	LastName = "";
	C_id = 0;
	UserName = "";
	Email = "";
	Password = "";
	RegistrationDate = "";
	Gender = "";
	BloodGroup = "";
	ContactNum = 0;
	Address = "";
	/*ProductName = "";
	ProductDescription = "";
	ProductCategory = "";
	P_id++;
	ProductSize = "";
	ProductColor = "";
	ProductQuantity = 0;*/

}

bool Customer::isLogin() //login Fuction for customer
{
	cout << "-----------------------------------------------Welcome to Extra Store---------------------------------------------------" << endl;
	cout << "Enter your username and passsword to LogIn" << endl;
	cout << "User Name: ";
	cin >> username;
	cout << "Password: ";
	cin >> password;
	ifstream file;
	string fn, ln, un, p, em, Rd, gnd, Bld, add;
	int si;
	long long int CN;
	file.open("Customers.txt");
	file >> si >> fn >> ln >> un >> p >> em >> Rd >> gnd >> Bld >> CN >> add;
	while (!file.eof())
	{
		if (username == un && password == p) // Cecking if the user enter the correct username and password
		{
			return true;
		}
		file >> si >> fn >> ln >> un >> p >> em >> Rd >> gnd >> Bld >> CN >> add;
	}
	file.close();
	return false;
}

void Customer::List()
{
	fstream file1;
	int p_id, quantity, price;
	string name, category, size, color;
	file1.open("products.txt", ios::in);
	file1 >> p_id >> name >> quantity >> category >> size >> color >> price;
	while (!file1.eof())
	{
		cout << "\nProduct ID: " << p_id << endl;
		cout << "Product Name: " << name << endl;
		cout << "Product Quantity: " << quantity << endl;
		cout << "Product Category: " << category << endl;
		cout << "Product's Price: " << price << endl;
		cout << "Product Size: " << size << endl;
		cout << "Producr Color: " << color << endl << endl;
		file1 >> p_id >> name >> quantity >> category >> size >> color >> price;
	}
	file1.close();

}

void Customer::purchaseProduct()
{
	int PID, pid, quantity, price, x = 1, Quan , y = 1;
	string name, category, size, color;
	
	fstream file2, file3;
	file2.open("products.txt", ios:: in);
	file2 >> PID >> name >>  quantity >>  category >> size >>  color  >> price;
	file3.open("AddtoCart.txt", ios::app);
	while( x == 1 && !file2.eof())
	{
		cout << "\nEnter Product ID to Purchase a Product: ";
		cin >> pid;
		if (pid == PID)
		{
			cout << "Your Product goes to Cart" << endl;
			if (y == 1)
			{
				file3 << pid << setw(15)
					<< name << setw(15)
					<< quantity << setw(15)
					<< category << setw(15)
					<< size << setw(15)
					<< color << setw(15)
					<< price << endl;
			}

			cout << "\nDo you Purchase more (Yes = 1 || No = 0): ";
			cin >> y;
			x = y;
			if (x == 1)
			{
			}
			else if (x == 0)
			{
				cout << "You have Purchased Succesfully" << endl;
			}
			else
			{
				cout << "Error! Press only 1 or 0 " << endl;
			}

			file2 >> PID >> name >> quantity >> category >> size >> color >> price;
		}
		else
		{
			cout << "No Product is avilable of this ID." << endl;
		}
	} 
	file3.close();
	file2.close();
	
}


//SETTER FUNCTION OF Customer TO REGISTER THE Customer
void Customer::setcustomerid()
{
	C_id = C_id + 1;
}
void Customer::setfirstname()
{
	cout << "First Name: ";
	cin >> FirstName;
}
void Customer::setlastname()
{
	cout << "Last Name: ";
	cin >> LastName;
}
void Customer::setusername()
{
	cout << "User Name: ";
	cin >> UserName;
}
void Customer::setemail()
{
	cout << "Email: ";
	cin >> Email;
}
void Customer::setpassword()
{
	cout << "Password: ";
	cin >> Password;
}
void Customer::setregistration()
{
	cin.ignore();
	cout << "Registration Date: ";
	getline(cin, RegistrationDate);
}
void Customer::setgender()
{
	cout << "Gender: ";
	cin >> Gender;
}
void Customer::setbloodgroup()
{
	cout << "Blood Group: ";
	cin >> BloodGroup;
}
void Customer::setcontactnum()
{
	cout << "Contact Number: ";
	cin >> ContactNum;
}
void Customer::setaddress()
{
	cin.ignore();
	cout << "Address: ";
	getline(cin, Address);
}

//GETTER FUNCTION FOR CUSTOMER CLASS TO DISPLAY THE INFO OF ALL THE CUSTOMERS
int Customer::getcustomerid()
{
	return C_id;
}
string Customer::getfirstname()
{
	return FirstName;
}
string Customer::getlastname()
{
	return LastName;
}
int Customer::getcustomersid()
{
	return C_id;
}
string Customer::getusername()
{
	return UserName;

}
string Customer::getemail()
{
	return Email;
}
string Customer::getpassword()
{
	return Password;
}
string Customer::getregistration()
{
	return RegistrationDate;
}
string Customer::getgender()
{
	return Gender;
}
string Customer::getbloodgroup()
{
	return BloodGroup;
}
long long int Customer::getcontactnum()
{
	return ContactNum;
}
string Customer::getaddress()
{
	return Address;
}
