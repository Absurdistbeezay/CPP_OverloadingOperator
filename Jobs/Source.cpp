
#include<iostream>
#include<string>
using namespace std;
class Job {
	friend ostream& operator<<(ostream&, Job&);
	friend istream& operator>>(istream&, Job&);
private:
	int idNum;
	int hours;
	double ratePerHour;
public:
	Job(int, int, double);
	int operator+(Job&);
	int operator-(Job&);
};

Job::Job(int id, int time, double rate) {
	idNum = id;
	hours = time;
	ratePerHour = rate;
}

ostream& operator<<(ostream& out, Job& a) {

	out<<endl << "ID Number: " << a.idNum << " | Worked Hours: " << a.hours 
		<< " | Rate per Hour: " << a.ratePerHour << endl;
	return out;
}

istream& operator>>(istream& in, Job& ab) {
	cout << endl; //clears buffer

	cout << "Enter id Num: ";
	in >> ab.idNum;
	cout << "Enter worked hours: ";
	in >> ab.hours;
	cout << "Enter rate per hour: ";
	in >> ab.ratePerHour;

	return in;
}
//out<<idNum<<
int Job::operator+(Job& total) {

	return hours + total.hours;

}
int Job::operator-(Job& diff) {

	return diff.hours = hours - diff.hours;
}

int main() {
	cout << "++++++++++++++++++++\nJOB INFORMATION APP\n++++++++++++++++++++\n";

	Job harry(0, 0, 0);
	cin >> harry;
	cout << harry;

	Job sally(0, 0, 0);
	cin >> sally;
	cout << sally;
	
	int totalHour = harry + sally;

	cout << "\n\n";
	cout << "*****************************************\n";
	cout << "* TOTAL WORKED HOURS: " ;
	cout << totalHour <<"\t\t*\n*\t\t\t\t\t*\n";

	int diff = harry - sally;
	cout << "* DIFFERENCE OF WORKED HOURS: ";
	
	cout << diff <<" \t*\n";
	cout << "*****************************************\n";
	

	system("pause");

	return 0;
}