#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

//**************Client Struct + Global Vector declaration For Client Data *****************************/
// 1-struct declaration
struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};
// 2-vector declaration
vector<sClient> clientsData;

// 3-Filename Declaration
string filename = "clients.txt";
//*********************Message To Back To Menu List ******************************************//

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
char ReadNewClient()
{
	sClient client;
	cout << "\nEnter Account Number?";
	getline(cin >> ws, client.AccountNumber);
	cout << "\nEnter PinCode? ";
	getline(cin >> ws, client.PinCode);
	cout << "\nEnter Name? ";
	getline(cin >> ws, client.Name);
	cout << "\nEnter Phone ?";
	getline(cin >> ws, client.Phone);
	cout << ("\nEnter AccountBalance? ");
	cin >> client.AccountBalance;
	cin.ignore();
}
//============Save Vector To The File=====================/
void AddDataLineToFile(string filename, string line)
{
	fstream myFile;
	myFile.open(filename, ios::out | ios::app);
	if (myFile.is_open())
	{
		myFile << line << endl;
	}
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
void ShowClientList(vector<sClient> clients)
{
	cout << right;
	cout << "\n\n"
		 << setw(55) << "Client List (" << clients.size() << ") Client(s)" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	cout << "| ";
	cout << left << setw(15) << "Account Number" << "| ";
	cout << left << setw(10) << "Pin Code" << "| ";
	cout << left << setw(25) << "Client Name" << "| ";
	cout << left << setw(12) << "Client Phone" << "| ";
	cout << left << setw(9) << "Client AccountBalance" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	for (sClient client : clients)
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
	string line = ConvertRecordToLine(client, "#//#");
	AddDataLineToFile(filename, line);
}
void AddClients()
{
	char AddMore = 'y';
	do
	{
		system("cls");
		cout << "Adding new client :\n\n";
		AddNewClient();
		cout << "\n Client added successfully ,do you want to add more clients? : ";
		cin >> AddMore;
		cin.ignore();
	} while (toupper(AddMore) == 'Y');
}
//============

int main()
{
}