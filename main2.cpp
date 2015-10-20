#include <iostream>
#include <fstream>

using namespace std;

int main()
{

        int sum = 0, in_var;
        fstream in;
	in.open ("test_file", ios::in);
	if (in.fail ())
	{
		cerr << "Couldn't open file" << endl;
		return 1;
	}

        while (!in.eof ())
        {
                in >> in_var;
                sum += in_var;
                cout << "Output: " << in_var << endl;
        }

        cout << "Sum: " << sum << endl;

	return 0;
}
