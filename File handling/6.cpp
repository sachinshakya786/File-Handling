#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    fstream f;
    f.open("S:/poco/file.txt");
    if(!f)
    {cout<<"File not found";}
    else
    {
        f.seekg(4,ios_base::beg);
        while (!f.eof())
        {
        string line;
        getline(f,line);
        cout<<line<<" "<<endl;
        }
    }
    f.close();
    return 0;
}
