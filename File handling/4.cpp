#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fout1;
    fout1.open("S:/poco/file.txt",ios::app);
    if(!fout1)
    {
        cout<<"File created successfully"<<endl;
    }
    else
    {
        string line;
        while (fout1)
        {
            cout<<"Enter your Data :: press -1 for end"<<endl;
            getline(cin,line);
            if(line=="-1")
            break;
            fout1<<line;
            fout1<<"\n";
        }
    }
    return 0;
}
