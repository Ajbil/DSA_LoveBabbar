/*here we see that when we studiesd about changing value of a varable like simply int n=5 we declare in main function and
then we changge its value in any function where we caaled it then we print it in that function then the new value will
be printed but then we go back to main and print it then i gget 5 only as here a copy of the element is created in that function
and main function ka variable n is not affected .
but here in case of aarray we see that value of arr[0] got changed in main funcion also as here reason is we are passing the
base address to that function by passing its name as parameter to calling function and not the array
so changes made at address will reflect everywhere in that functiion also and in main function also*/

#include<iostream>
using namespace std;
void printarray(int a[], int n){

    //here let's change value of arr[0] from 1 to 100
    cout<<"printing inside the function"<<endl;
    a[0]=100;
    for(int i=0;i<n;i++){
        cout<< a[i] << " ";
    }
    cout<<endl;
    cout<<"printing inside the main function"<<endl;

}
int main()
{
    int arr[5] ={1,2,3,4,5};

    printarray(arr,5);

    //printign insdie the main function
    for(int i=0;i<5;i++){
        cout<< arr[i] << " ";
    }
    return 0;
}

/*we see we get the followiing output
printing inside the function
100 2 3 4 5
printing inside the main function
100 2 3 4 5 */
