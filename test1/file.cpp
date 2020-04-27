     // writing on a text file
    #include <iostream>
    #include <fstream>
    using namespace std;

    int main () {
        ofstream os;
        os.open("os.txt", ios::app);
        if (os.is_open()) 
       {
            os << "This is a line." << endl;
            os << "This is another line." << endl;
            os.close();
            string s = "";
            cin >> s;
            cout << s << endl;
            cout << "write sucsess" << endl;
        }
        return 0;
    }
   //结果: 在os.txt中写入：
   //This is a line.
   //This is another line 