#include <iostream>
#include <cstring>
using namespace std;

int main()
{
char english[100];
cout <<"Enter the English text: \n";
cin.getline(english, 100, '\n');
int lenoftext;
lenoftext = strlen (english);
cout << "Morse code translation:\n";
 
for (int i = 0; i<lenoftext; i++)
{
	if (english[i] == 'A' || english[i] == 'a')
		cout << ".-" << " ";
	else if (english[i] == 'B' || english[i] == 'b')
		cout << "-..." << " ";
	else if (english[i] == 'C' || english[i] == 'c')
		cout << "-.-." << " ";
	else if (english[i] == 'D' || english[i] == 'd')
		cout << "-.." << " ";
	else if (english[i] == 'E' || english[i] == 'e')
		cout << "." << " ";
	else if (english[i] == 'F' || english[i] == 'f')
		cout << "..-." << " ";
	else if (english[i] == 'G' || english[i] == 'g')
		cout << "--." << " ";
	else if (english[i] == 'H' || english[i] == 'h')
		cout << "...." << " ";
	else if (english[i] == 'I' || english[i] == 'i')
		cout << ".." << " ";
	else if (english[i] == 'J' || english[i] == 'j')
		cout << ".---" << " ";
	else if (english[i] == 'K' || english[i] == 'k')
		cout << "-.-" << " ";
	else if (english[i] == 'L' || english[i] == 'l')
		cout << ".-.." << " ";
	else if (english[i] == 'M' || english[i] == 'm')
		cout << "--" << " ";
	else if (english[i] == 'N' || english[i] == 'n')
		cout << "-." << " ";
	else if (english[i] == 'O' || english[i] == 'o')
		cout << "---" << " ";
	else if (english[i] == 'P' || english[i] == 'p')
		cout << ".--." << " ";
	else if (english[i] == 'Q' || english[i] == 'q')
		cout << "--.-" << " ";
	else if (english[i] == 'R' || english[i] == 'r')
		cout << ".-." << " ";
	else if (english[i] == 'S' || english[i] == 's')
		cout << "..." ;
	else if (english[i] == 'T' || english[i] == 't')
		cout << "-" << " ";
	else if (english[i] == 'U' || english[i] == 'u')
		cout << "..-" << " ";
	else if (english[i] == 'V' || english[i] == 'v')
		cout << "...-" << " ";
	else if (english[i] == 'W' || english[i] == 'w')
		cout << ".--" << " ";
	else if (english[i] == 'X' || english[i] == 'x')
		cout << "-..-" << " ";
	else if (english[i] == 'Y' || english[i] == 'y')
		cout << "-.--" << " ";
	else if (english[i] == 'Z' || english[i] == 'z')
		cout << "--.." << " ";
	else if (english[i] == ' ')
	  cout<< "   ";
	else
	{
		 cout<<"You didn't enter a character in English" ; 
	}
}
cout <<endl;
}

