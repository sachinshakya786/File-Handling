#include<iostream>
#include<fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fout1,fout2;
    fout1.open("S:/poco/file1.txt");
    fout2.open("S:/poco/file2.txt");
    if(!fout1 && !fout2)
    {
        cout<<"File not created"<<endl;
    }
    else
    {
        cout<<"File created successfully"<<endl;
        fout1<<"Sachin Shakya";
        fout2<<"Buddha";
    }
    return 0;
}
