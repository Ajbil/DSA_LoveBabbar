// here we make a jaggered 2d array using dynamic memory alllocation

#include<iostream>
using namespace std;
int main(){

    int rows ;
    cout <<"enter the number off rows of 2d jaggeered array you want "  << endl;
    cin >> rows;

    int** arr =new int*[rows];  // made our 2d array by dymani memory allocation
    // now we need to make a 1d array to store the coolumn size in each row
    int* colarr =new int[rows];
// now we take from user input of how many colun ineach row he need 
for(int i=0;i<rows;i++){
    cout<< "Enter no of col in row"<< i<< ": ";
    cin >> colarr[i];
    arr[i] = new int [colarr[i]];
}

for(int i=0; i<rows; i++){

        for(int j=0; j< colarr[i]; j++){

            cout<<"Rows "<< i<<": Enter value"<< i*colarr[i]+j <<": ";
            cin>> arr[i][j];
        }
    }
cout<< "Showing all the Inputed data in a matrix form"<< endl;
    for(int i=0; i< rows ; i++){

        for(int j=0; j< colarr[i]; j++){
            cout<< arr[i][j]<< " ";

        }
        cout<< "\n";
    }
cout<< "Dellocating the array..."<< endl;
    for(int i=0; i<rows; i++){
       delete [] arr[i];

    }
    delete [] arr;
    cout<< "done!";



    return 0;
}