#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("S:/poco/file.txt");
    if(!fin)
    {
        cout<<"File not found"<<endl;
    }
    else
    {
        string line;
        while (!fin.eof())
        {
            getline(fin,line);
            cout<<line<<" "<<endl;
        }
        
    }
    fin.close();
    return 0;
}
