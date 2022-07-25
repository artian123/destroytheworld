#include<iostream>
#include<sstream>

using namespace std;

int main(){
    string str;
    double cmimi;
    
    cout<<"ft cmimin: ";
    getline(cin, str);
    stringstream(str) >> cmimi;

cout<<cmimi<<endl;

    system("pause");
    return 0;
}
