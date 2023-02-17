#include<iostream>
#include<stdio.h>
#include<iomanip>
#include<string>
#include<fstream>
#include<conio.h>
#include<Windows.h>   //for sleep instruction and clear screen
using namespace std;
class Shopkeeper      //BASE CLASS
{
	string FirstName;
	string LastName;
	int S_id;
	string UserName;
	string Email;
	string Password;
	int RegistrationDate;
	string Gender;
	string BloodGroup;
	long long int ContactNum;
	string Address;

	string ProductName;
	int P_id;
	string ProductDescription;
	string ProductCategory;
	string ProductSize;
	string ProductColor;
	int ProductQuantity;
	int ProductPrice;

public:
	Shopkeeper()
	{
		FirstName = "";
		LastName = "";
		S_id = 0;
		UserName = "";
		Email = "";
		Password = "";
		RegistrationDate = 0;
		Gender = "";
		BloodGroup = "";
		ContactNum = 0;
		Address = "";
//-----------------------------------------------------------------------------------------------------------
		ProductName = "";
		ProductDescription = "";
		P_id = 0;
		ProductCategory = "";
		ProductSize = "";
		ProductColor = "";
		ProductQuantity = 0;
		ProductPrice = 0;
//---------------------------------------------------------------------------------------------------------
	}
	void setfirstname();
	void setlastname();
	void setshopkeeperid();
	void setusername();
	void setemail();
	void setpassword();
	void setregistration();
	void setgender();
	void setbloodgroup();
	void setcontactnum();
	void setaddress();

	string getfirstname();
	string getlastname();
	int getshopkeeperid();
	string getusername();
	string getemail();
	string getpassword();
	int getregistration();
	string getgender();
	string getbloodgroup();
	long long int getcontactnum();
    string getaddress();
//------------------------------------------------------------------------------------------------------
	void setproductname();
	void setdescriptionofproduct();
	void setproductcategory();
	void setp_id();
	void setsizeofproduct();
	void setcolorofproduct();
	void setproductquantity();
	void setproductprice();

	string getproductname();
	string getdescriptionofproduct();
	string getproductcategory();
	int getproductid();
	string getsizeofproduct();
	string getcolorofproduct();
	long int getproductquantity();
	int getproductprice();

	void editproduct();
	void viewproducts();
	bool isLogin();

	
};
void greatings();
int userchoice();
//int previousvalue();
int identity();
void exit();

class Customer   //BASE CLASS
{
	string FirstName;
	string LastName;
	int C_id;
	string UserName;
	string Email;
	string Password;
	string RegistrationDate;
	string Gender;
	string BloodGroup;
	long long int ContactNum;
	string Address;
	/*string ProductName;
	string ProductDescription;
	string ProductCategory;
	string ProductSize;
	string ProductColor;
	int ProductQuantity;*/

public:

	string username;
	string password;
	int money = 0;
	Customer();
	bool isLogin();
	void List();
	void purchaseProduct();
	void setcustomerid();
	void setfirstname();
	void setlastname();
	void setusername();
	void setemail();
	void setpassword();
	void setregistration();
	void setgender();
	void setbloodgroup();
	void setcontactnum();
	void setaddress();

	int getcustomerid();
	string getfirstname();
	string getlastname();
	int getcustomersid();
	string getusername();
	string getemail();
	string getpassword();
	string getregistration();
	string getgender();
	string getbloodgroup();
	long long int getcontactnum();
	string getaddress();

};

//class Administrator :public Shopkeeper
//{
//public:
//	Administrator()
//	{
//
//	}
//};
