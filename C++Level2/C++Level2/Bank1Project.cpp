#include<iostream>
#include <vector>
#include<fstream>
#include <string>
#include <iomanip>
using namespace std;
//**************Client Struct + Global Vector declaration For Client Data *****************************/
//1-struct declaration
struct sClient {
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;

};
//2-vector declaration
vector<sClient> clientsData;

//*********************Message To Back To Menu List ******************************************//

//*********************Read String ***********************************************************/
string ReadString(string message) {
	string answer;
	cout << message;
	getline(cin >> ws, answer);
	return  answer;
}
//*********************Read Char ***********************************************************/
char ReadChar(string message) {
	char answer;
	cout << message;
	cin >> answer;
	return  answer;
}
//============Save Vectot To The File=====================/
void AddDataLineToFile(string filename, string line) {
	fstream myFile;
	myFile.open(filename, ios::out|ios::app);
	if (myFile.is_open()) {
		myFile << line << endl;
	}
}

//============Show Clients List ==========================/

void PrintClientRecordDataRow(sClient client) {
	cout << "| ";
	cout << left << setw(15) <<client.AccountNumber<< "| ";
	cout << left << setw(10) <<client.PinCode<< "| ";
	cout << left << setw(25) <<client.Name<< "| ";
	cout << left << setw(12) <<client.Phone<< "| ";
	cout << left << setw(9) << client.AccountBalance << endl;

}
void ShowClientList(vector<sClient> clients) {
	cout << right;
	cout << "\n\n" <<setw(55) << "Client List (" << clients.size() << ") Client(s)" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	cout << "| ";
	cout << left << setw(15) << "Account Number" << "| ";
	cout << left << setw(10) << "Pin Code" << "| ";
	cout << left << setw(25) << "Client Name" << "| ";
	cout << left << setw(12) << "Client Phone" << "| ";
	cout << left << setw(9) << "Client AccountBalance" << endl;
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
	for (sClient client : clients) {
		PrintClientRecordDataRow(client);
	}
	cout << "\n----------------------------------------------------------------------------------------------------------\n\n";
 
}
//============Add Client to the  List ==========================/ 
void AddClients() {
	char AddMore = 'y';

}

int main() {

}