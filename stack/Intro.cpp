// dsa love bhaiya series video no 59 and lec no 54
// stack follows LIFO order  remember by taking exmaple of plates stack on marriage ceremony
// operation are pop peek push isempty() fun etc..
// in stl we initialize stack is stack <int> s;


/*                     THIS IS STACK USING STL BUT INTERVIEWER CAN ASK IMPLEMENT STACK OPERATIONS
#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack < int> s;
    
    s.push(2);
    s.push(3);

    s.pop();// top ka elment hat jayega hat hjayega
    cout << "printing the top element " << s.top() <<endl;

    if(s.empty()){
        cout << "stack is empty"<<endl;
    }
    else{
        cout <<"staclk is not empty" <<endl;
    }

    cout << "size of stack is " <<s.size() <<endl;

    return 0;
}
*/

//SO THIS MEANS MAKE A CLASS NAMES STACK AND WRITE CODE FOR PUSH, POP PEEK ETC OPERATIONs
#include<iostream>
using namespace std;

class Stack{
    //we can implement stcak using two ways 1 uisng arrays and 2 using linked list 
    //array implementtaion -> 
    // push operation -> i do this using index so i initiilaze top by -1 and then incrememnt and insert 
    // push opertaion mai sabse pehle check karega space hai ya nahe 
    //pop operation mai check if stack is empyty or not if mepty tell stack underflow 
    // if top = -1 ho gaya then wee say stack is empty 
    // peek ke liye arr[top] ko retturn karna hai 

    public: // we will need a array its size and  atop variable to implemennt stack
    int *arr;
    int top;
    int size;

    //constructor 
    Stack(int size){
        this -> size =size;
        arr = new int[size]; //arr cretae kar diya size ka 
        top = -1; // initilaze
    }

    //ab mujhe function slikhne hai 

    void push(int element){
        // first check if space is available
        //so if size - top > 1 then i have place in my stak 
        if(size - top > 1){
            top++;
            arr[top] = element;
        }else{
            cout << "stacck overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "stack undeflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0 && top <size)
            return arr[top];
        else{
            cout << "stack is empty" <<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }


};


int main()
{
    Stack st(5);   // made a stack st with size 5

    st.push(22);
    st.push(56);
    st.push(96);

    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;
    st.pop();
    cout << st.peek() <<endl;

    return 0;
}

//solved this ques -> https://bit.ly/3gr4wW8


// STACK IMPLEMENTTAION USING LINKED LIST 

