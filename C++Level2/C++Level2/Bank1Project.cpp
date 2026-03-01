#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
#include <conio.h>
using namespace std;
struct sClient;

//**************Client Struct + Global Vector declaration For Client Data *****************************/
// 1-Filename Declaration
const string FILENAME = "clients.txt";

// 2- delimeter
const string DELIMETER = "#//#";
// 3-struct declaration
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
	bool MarkForDelete = false;
};
// 4-vector declaration
vector<sClient> clientsData;

// 5-Functions Declarations
//...Menu Functions
void ShowMainMenu();
void ImplementMainMenu(short selection);

//...Business Logic Functions
void ShowClientScreen();
void ShowAddNewClientScreen();
void AddNewClient();
bool DeleteClientByAcoountNumber(vector<sClient> &clients, string accountNumber);
bool MarkClientForDeleteByAccountNumber(vector<sClient> &clients, string accountNumber);
void ShowDeleteClientScreen();

sClient ReadNewClient();

bool FindClientByAcoountNumber(sClient &client, string accountNumber);
//...File Functions
vector<sClient> LoadClientDataFromFile(string filename);
void AddDataLineToFile(string filename, string line);
//...Utility Functions
string ConvertRecordToLine(sClient client, string delimeter);
sClient ConvertLineToRecord(string line, string delimeter);
vector<string> SplitString(string text, string delimeter);

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& MAIN &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//
int main()
{
	// حمّل البيانات أولاً
	clientsData = LoadClientDataFromFile(FILENAME);
	ShowMainMenu();
}

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&//

//*********************Read String ***********************************************************/
string ReadString(string message)
{
	string answer;
	cout << message;
	getline(cin >> ws, answer);
	return answer;
}
//*********************Read Char ***********************************************************/
char ReadChar(string message)
{
	char answer;
	cout << message;
	cin >> answer;
	return answer;
}
//*********************Read New Client ***********************************************************/
bool FindClientByAcoountNumber(sClient &Client, string accountNumber)
{

	for (sClient rec : clientsData)
	{
		if (rec.AccountNumber == accountNumber)
		{
			Client = rec;
			return true;
		}
	}
	return false;
}
sClient ReadNewClient()
{

	sClient client;

	cout << "\nEnter Account Number? ";
	getline(cin >> ws, client.AccountNumber);

	while (FindClientByAcoountNumber(client, client.AccountNumber))
	{
		cout << "\nClient With [" << client.AccountNumber
			 << "] already exists, Enter another Account Number? ";

		getline(cin >> ws, client.AccountNumber);
	}

	cout << "\nEnter PinCode? ";
	getline(cin >> ws, client.PinCode);

	cout << "\nEnter Name? ";
	getline(cin >> ws, client.Name);

	cout << "\nEnter Phone? ";
	getline(cin >> ws, client.Phone);

	cout << "\nEnter AccountBalance? ";
	cin >> client.AccountBalance;
	cin.ignore();

	return client;
}
//=======================Print Client =======================================/
void PrintClient(sClient client)
{
	cout << "\nThe following is the extracted client record : \n";
	cout << "\nAccount Number : " << client.AccountNumber << endl;
	cout << "\nPinCode        : " << client.PinCode << endl;
	cout << "\nName           : " << client.Name << endl;
	cout << "\nPhone          : " << client.Phone << endl;
	cout << "\nAccountBalance : " << client.AccountBalance << endl;
}

//============Save Vector To The File=====================/

vector<sClient> SaveClientsDataToFile(vector<sClient> &clients, string filename)
{
	fstream MyFile;
	MyFile.open(filename, ios::out); // overwrite

	for (sClient c : clients)
	{
		if (c.MarkForDelete == false)
		{

			string line = ConvertRecordToLine(c, DELIMETER);
			cout << line << endl;
		}
	}
	return clients;
}
//=============Convert Record To Line=======================/
string ConvertRecordToLine(sClient client, string delimeter)
{
	string sClientRecord = "";
	sClientRecord.reserve(100);
	sClientRecord += client.AccountNumber + delimeter;
	sClientRecord += client.PinCode + delimeter;
	sClientRecord += client.Name + delimeter;
	sClientRecord += client.Phone + delimeter;
	sClientRecord += to_string(client.AccountBalance);
	return sClientRecord;
}
//================SplitString================================/
vector<string> SplitString(string text, string delimeter)
{
	vector<string> vString;
	short pos = 0;
	string sword;
	while ((pos = text.find(delimeter)) != std::string::npos)
	{

		sword = text.substr(0, pos);
		if (sword != "")
		{
			vString.push_back(sword);
		}
		text.erase(0, pos + delimeter.length());
	}
	if (text != "")
	{
		vString.push_back(text);
	}
	return vString;
}
//=============Convert Line To Record=======================/

sClient ConvertLineToRecord(string line, string delimeter)
{
	sClient client;
	vector<string> vstring = SplitString(line, delimeter);
	client.AccountNumber = vstring.at(0);
	client.PinCode = vstring.at(1);
	client.Name = vstring.at(2);
	client.Phone = vstring.at(3);
	client.AccountBalance = stod(vstring.at(4));
	return client;
}
//*********************Load clientsDataFrom File(permanantly saved data) *****************************/
vector<sClient> LoadClientDataFromFile(string filename)
{
	fstream myFile;
	string line;
	vector<sClient> vClientRecords;

	myFile.open(filename, ios::in);
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			vClientRecords.push_back(ConvertLineToRecord(line, DELIMETER));
		}
	}
	return vClientRecords;
}
//============Show Clients List ==========================/

void PrintClientRecordDataRow(sClient client)
{
	cout << "| ";
	cout << left << setw(15) << client.AccountNumber << "| ";
	cout << left << setw(10) << client.PinCode << "| ";
	cout << left << setw(25) << client.Name << "| ";
	cout << left << setw(12) << client.Phone << "| ";
	cout << left << setw(9) << client.AccountBalance << endl;
}
void ShowClientScreen()
{

	system("cls");
	cout << right;
	cout << "\n\n"
		 << setw(55) << "Client List (" << clientsData.size() << ") Client(s)" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	cout << "| ";
	cout << left << setw(15) << "Account Number" << "| ";
	cout << left << setw(10) << "Pin Code" << "| ";
	cout << left << setw(25) << "Client Name" << "| ";
	cout << left << setw(12) << "Client Phone" << "| ";
	cout << left << setw(9) << "Client AccountBalance" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	for (sClient client : clientsData)
	{
		PrintClientRecordDataRow(client);
	}
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
}

//============Add Client to the  List ==========================/

void AddNewClient()
{
	sClient client;
	client = ReadNewClient();
	string line = ConvertRecordToLine(client, DELIMETER);
	clientsData.push_back(client);
	SaveClientsDataToFile(clientsData, FILENAME);
}
void ShowAddNewClientScreen()
{
	char AddMore = 'y';
	do
	{
		system("cls");
		cout << "\n-------------------------------------\n";
		cout << right << setw(30) << "Add New Clients Screen";
		cout << "\n-------------------------------------\n";
		cout << "Adding new client :\n\n";
		AddNewClient();
		cout << "\n Client added successfully ,do you want to add more clients? y/n  : ";
		cin >> AddMore;
		cin.ignore();
	} while (toupper(AddMore) == 'Y');
}

//=====================Delete Client From the list============================/
bool MarkClientForDeleteByAccountNumber(vector<sClient> &clients, string accountNumber)
{
	for (sClient &c : clients)
	{
		if (c.AccountNumber == accountNumber)
		{
			c.MarkForDelete = true;
			return true;
		}
	}
	return false;
}

bool DeleteClientByAcoountNumber(vector<sClient> &clients, string accountNumber)
{
	sClient client;
	char answer = 'n';
	if (FindClientByAcoountNumber(client, accountNumber))
	{
		PrintClient(client);
		cout << "\n\nAre You sure you  want to delete this client  ? y/n ? ";
		cin >> answer;
		cin.ignore();
		if (toupper(answer) == 'Y')
		{
			MarkClientForDeleteByAccountNumber(clients, accountNumber);

			SaveClientsDataToFile(clients, FILENAME);
			// refresh data
			clientsData = LoadClientDataFromFile(FILENAME);
			cout << "\n\n Client " << accountNumber << "Deleted Successfully \n";
			return true;
		}
	}
	else
	{
		cout << "\n Client with Account Number (" << accountNumber << ") is Not Found!\n";
		return false;
	}
}
void ShowDeleteClientScreen()
{
	string accountNumber;
	system("cls");
	cout << "\n-------------------------------------\n";
	cout << right << setw(30) << "Delete Client Screen";
	cout << "\n-------------------------------------\n";
	cout << "please enter account number ? ";
	cin >> accountNumber;
	DeleteClientByAcoountNumber(clientsData, accountNumber);
}

//============Show Main Menu =====================================/
enum enMainMenuOptions
{
	eShow = 1,
	eAdd = 2,
	eDelete = 3,
	eUpdate = 4,
	eFind = 5,
	eExit = 6
};
void ShowMainMenu()
{
	short selectedOption;
	system("cls");
	cout << "\n==========================================================\n";
	cout << right << setw(29) << "Main Menu Screen";
	cout << "\n==========================================================\n";
	cout << "\t[1] Show Client List.\n";
	cout << "\t[2] Add New Client.\n";
	cout << "\t[3] Delete Client.\n";
	cout << "\t[4] Update Client Info.\n";
	cout << "\t[5] Find Client.\n";
	cout << "\t[6] Exit.";
	cout << "\n==========================================================\n";
	cout << "Choose what do you want to do ? [1 to 6] ? ";

	cin >> selectedOption;
	cin.ignore();
	ImplementMainMenu(selectedOption);
}
//*********************Message To Back To Menu List ******************************************//

void GoBackToMainMenu()
{
	cout << "\nPress any key to go back to Main Menu ....\n";
	system("pause>null");
	ShowMainMenu();
}
void ImplementMainMenu(short selection)
{
	enMainMenuOptions mainMenuOptions;
	switch (selection)
	{
	case enMainMenuOptions::eShow:
		ShowClientScreen();
		GoBackToMainMenu();
		break;
	case enMainMenuOptions::eAdd:
		ShowAddNewClientScreen();
		GoBackToMainMenu();
		break;
	case enMainMenuOptions::eDelete:
		ShowDeleteClientScreen();
		GoBackToMainMenu();
		break;
		/*case enMainMenuOptions::eUpdate:
			ShowUpdateClientScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eFind:
			ShowFindClientScreen();
			GoBackToMainMenu();
			break;
		case enMainMenuOptions::eExit:
			ShowEndScreen();
				break;*/
	}
}
