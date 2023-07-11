#include <iostream>
using namespace std;


void printTheDiamond(int r, int c, int s)
{
    for (int i = 0; i < r; i++)
    {
        cout<< "yeah code ab row " << i+1 << " ka diamond print kar raha"<<endl;
        //cout<< " we are in for loop where i is " << i << endl;
        cout<< " we are in for loop on line 7" <<endl<<endl;
        int row = 1;
        
        while (row <= s)
        {
            cout<< " we are in while loop on line 13" <<endl<<endl;
            //cout<< "here value of row is " << row  <<endl;
            for (int j = 0; j < c; j++)
            {
                cout<< " we are in for loop on line 19" <<endl<<endl;
                //cout<< " we are in for loop where j is " << j << endl;
                int col = 1;
                while (col <= s - row)
                {
                    cout<< " we are in while loop on line 24" <<endl<<endl;
                    //cout<< "here value of col is " << col  <<endl;
                    cout << "e";
                    col++;
                }

                cout << "/";
                col++;
                while (col <= s)
                {
                    cout<< " we are in while loop on line 34" <<endl<<endl;
                    //cout<< "here value of col is " << col  <<endl;
                    cout << "o";
                    col++;
                }

                col = 1;
                while (col < row)
                {
                    cout<< " we are in while loop on line 41" <<endl<<endl;
                    cout << "o";
                    col++;
                }

                cout << "\\";
                col++;
                while (col <= s)
                {
                    cout<< " we are in while loop on line 51" <<endl<<endl;
                    cout << "e";
                    col++;
                }
            }

            row++;
            cout << endl;
        }
cout<<"current diamond ka upper half print ho chcuka hai ab lower half ke liye neeche vala code hai"<<endl; 
        row = 1;
        while (row <= s)
        {
            cout<< " we are in while loop on line 64" <<endl<<endl;
            for (int j = 0; j < c; j++)
            {
                cout<< " we are in for loop on line 66" <<endl<<endl;
                int col = 1;
                while (col < row)
                {
                    cout<< " we are in while loop on line 70" <<endl<<endl;
                    cout << "e";
                    col++;
                }
                cout << "\\";
                col++;
                while (col <= s)
                {
                    cout<< " we are in while loop on line79" <<endl<<endl;
                    cout << "o";
                    col++;
                }
                col = 1;
                while (col <= s - row)
                {
                    cout<< " we are in while loop on line 85" <<endl<<endl;
                    cout << "o";
                    col++;
                }
                cout << "/";
                col++;
                while (col <= s)
                {
                    cout<< " we are in while loop on line 93" <<endl<<endl;
                    cout << "e";
                    col++;
                }
            }
            row++;
            cout << endl;
        }
    }
}

int main(){
    printTheDiamond(4,4,1);
    return 0;
}