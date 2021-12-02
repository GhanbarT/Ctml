#include <iostream>
#include <string>
#include <fstream>
using namespace std;

// copy writed by Ghanbar Timar
void clrscr()
{
	system("CLS");
}

class Ctml
{
	ofstream output;
public:
	Ctml();
	~Ctml();
	void H1(string, string, string);
	void H2(string, string, string);
	void H3(string, string, string);
	void H4(string, string, string);
	void H5(string, string, string);
	void H6(string, string, string);
	void Title(string);
	void Paragraph(string, string, string);
	void hr();
	void br();
};
Ctml::Ctml()
{
	output.open("D:\WebPage.html");
	output << "<!DOCTYPE html>" << endl << "<html>" << endl;
}
Ctml::~Ctml()
{
	output << "</body>" << endl << "</html>" << endl;
	output.close();
}

void Ctml::H1(string t, string c, string s)
{
	output << "<h1 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h1>" << endl;
}
void Ctml::H2(string t, string c, string s)
{
	output << "<h2 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h2>" << endl;
}
void Ctml::H3(string t, string c, string s)
{
	output << "<h3 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h3>" << endl;
}
void Ctml::H4(string t, string c, string s)
{
	output << "<h4 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h4>" << endl;
}
void Ctml::H5(string t, string c, string s)
{
	output << "<h5 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h5>" << endl;
}
void Ctml::H6(string t, string c, string s)
{
	output << "<h6 style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</h6>";
}
void Ctml::Title(string t)
{
	output << "<head>" << endl << "<title>" << t << "</title>" << "</head>" << endl << "<body>" << endl;
}
void Ctml::Paragraph(string t, string c, string s)
{
	output << "<p style=\" color:" << c << ";font-size:" << s << "px\">" << t << "</p>" << endl;
}
void Ctml::hr()
{
	output << "<hr/>" << endl;
}
void Ctml::br()
{
	output << "<br/>" << endl;
}


int main()
{
	Ctml obj;
	string text = "", color, size;
	int control = 1;
	while (control)
	{
		clrscr();
		cout << "(1)Header \n(2)Paragraph \n(3)Title \n(4)hr \n(5)br \n(0)Exit" << endl;
		cin >> control;
		switch (control)
		{
		case 1:
			clrscr();
			cout << "(1)h1\n(2)h2\n(3)h3\n(4)h4\n(5)h5\n(6)h6" << endl;
			cin >> control;
			switch (control)
			{
			case 1:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H1(text, color, size);
				break;

			case 2:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H2(text, color, size);
				break;

			case 3:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H3(text, color, size);
				break;

			case 4:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H4(text, color, size);
				break;

			case 5:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H5(text, color, size);
				break;

			case 6:
				clrscr();
				cout << "text:\t"; cin.ignore(); getline(cin, text);
				cout << "color:\t"; cin >> color;
				cout << "size:\t"; cin >> size;
				obj.H6(text, color, size);
				break;

			default:
				break;
			}
			break;

		case 2:
			clrscr();
			cout << "text:\t"; cin.ignore(); getline(cin, text);
			cout << "color:\t"; cin >> color;
			cout << "size:\t"; cin >> size;
			obj.Paragraph(text, color, size);
			break;

		case 3:
			clrscr();
			cout << "text:\t"; cin.ignore(); getline(cin, text);
			obj.Title(text);
			break;

		case 4:
			obj.hr();
			break;

		case 5:
			obj.br();
			break;

		default:
			break;
		}
	}
	return 0;
}
