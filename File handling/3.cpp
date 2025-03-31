#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(int argc, char const *argv[])
{
    ofstream fout1,fout2;
    fout1.open("S:/poco/file1.txt",ios::app);
    fout2.open("S:/poco/file2.txt");
    if(!fout1 && !fout2)
    {
        cout<<"File not Created";
    }
    else
    {
        cout<<"File Created successfully";
    fout1<<" hey sachin again welcome";
    fout2<<"Lord Buddha the Great";
    }

    return 0;
}
