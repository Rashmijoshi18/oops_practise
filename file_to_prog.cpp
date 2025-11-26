#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream in("numbers.txt");
    ofstream out("program.cpp");

    int n, count = 0;

    out << "#include <iostream>";
    out << "using namespace std;";
    out << "int main()\n{\n";

    while (in >> n && count < 5)
    {
        out << "cout << " << n << " << endl;";
        count++;
    }

    out << "    return 0;\n";
    out << "}\n";

    return 0;
}
