// binary search tree based on binary serach where we know we have a sorted array so here in BST we have sorted tree
// such that the left subtree of BST will have always data lesss than root node data and right subtree always  more than root ->> node data
// and this property applies for all the nodes in the tree+

// ab jaise hame ek array mila inpput mai aur hame binary tree bananan hai ttoh logic is simple ki jo bhi data aaya use root node
// se compare karo afgar vo bada hai toh right subtree mai jayega auur agara vo chota hai toh left subtree mI JAYEGA

// in nBST we see it is based on binary serach so insertion ki time complwexity o(log n) hai

// question SEARCH IN BST ->  https://www.codingninjas.com/codestudio/problems/search-in-bst_1402878

// IMP POINTS TO REMEEBER

// WE SEEE THAT BST ka inorder traversal rpint karane pe we get a sorted list of data

// BST ke case mai jo smallest value hogi vo leftmost node pe hi hogii  see below written fun to find smallest value  function name is minValueFind

// simliarly max value will come at thr right most node   see below written fun to find largest  value  function name is maxValueFind

// HOMW WORK what is inorder predessor and in order successor of a BST and how to find them

//                                 DELETE A NODE IN BST  -> yeha bahaiya ne samjhaya tha aache se aagaya tha samjh dry run vala part dekh lena video ka agar bhool jaye toh

// deletion of bbst ka code imp hai direclty puch liya jata hai interview mai

// sabse pehle toh traverse karke us node tak ahucho jisko delete karni hai
// delete karne ke 4 case ho akte
// 1) us node ke zero child hai
// 2,3) us node ka 1 child ho ya toh lleft ya right child
// 4) us node ke 2 child ho  (yeah sabse complex hai te

// see below fucntion deletefromBST

#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *insertIntoBST(Node *root, int d)
{

    // base case jab hum pehle node laga rahe tab hame pehle root kko null rakh rakh hai (int main mai pehli line) tab ek nayi node create kar do
    if (root == NULL)
    {
        root = new Node(d);
        return root;
    }
    // ab next node ke liye dekho agar root se choti hai toh recursion call akrdo with left
    if (d < root->data)
    {
        root->left = insertIntoBST(root->left, d);
    }
    else
    {
        root->right = insertIntoBST(root->right, d);
    }

    return root;
}

void takeInput(Node *&root)
{ // pASS BY REFERNCE

    int data;
    cin >> data;

    // ab jab tak mai input mai -1 nahi dalata tab tak input leta rahunga
    while (data != -1)
    {
        root = insertIntoBST(root, data); // input toh leliya ab tree mai insert bhi akr do uske liye fun call kiya
        cin >> data;                      // next baar ke liye input le lo
    }
}

Node *minValueFind(Node *root)
{

    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node *maxValueFind(Node *root)
{

    Node *temp = root;
    while (temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node *deleteFromBST(Node *root, int val)
{ // gara samjh nki aaya toh 56:00 se bahiay ki video dekh lena IMP HAI YEAH CODE

    // base case when root is null retrun null
    if (root == NULL)
    {
        return root;
    }

    if (root->data == val)
    { // isme pura delete ka logc likha hai vahi 3 ccases

        // 0 child
        if (root->left == NULL && root->right == NULL)
        {
            delete (root);
            return NULL; // delete kar diya root ko toh ab uski jagah null laga diya
        }

        // 1 child -> 2 sub caeses

        // 1 )left child hai
        if (root->left != NULL && root->right == NULL)
        {
            // pehle store kara lo
            Node *temp = root->left;
            delete root;
            return temp; // jab hum root ko delete kar denege toh vaha toh null ho jayega but uske neeche not null part bacha hoga toh usko return kara diya isse
        }
        // 2 )right child hai

        if (root->left == NULL && root->right != NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        // 2 child

        if (root->left != NULL && root->right != NULL)
        {

            // yaha HUMM 2 OPTION HAI ya toh left se maximum value nikal lo aur use replace kardo jis node ko delete kar rahe usee
            //  ya right se minimumn value nikal lo aur use replace kardo jis node ko delete kar rahe usee
            //  i do 2nd option
            int mini = minValueFind(root->right)->data; //
            root->data = mini;
            // ab delete kar do root ke right se recursion call marke phir root ko return kar do
            root->right = deleteFromBST(root->right, mini); // yaha recursion sambhal lega
            return root;
        }
    }

    // recurion call

    else if (root->data > val)
    {
        root->left = deleteFromBST(root->left, val);
        return root;
    }

    else
    {
        root->right = deleteFromBST(root->right, val);
        return root;
    }
}

void levelOrderTraversal(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL); // sepperator ka kaam akrega

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }

        else
        {
            cout << front->data << " ";
            if (front->left)
            {
                q.push(front->left);
            }
            if (front->right)
            {
                q.push(front->right);
            }
        }
    }
}
int main()
{

    // test input for this code i took as   50 20 70 10 30 90 110 -1

    Node *root = NULL;

    cout << "Enter the data to create a BST" << endl;
    takeInput(root);

    /// ab hamre tree ko dekhne ke liye hame rtarverse karn ahoga so i call level order traversal
    cout << "printing the BST " << endl;
    ;
    levelOrderTraversal(root); // similarly we can use inorder pre ordr and post order etc traversal

    cout << " the minimum value of the BST is given by " << minValueFind(root)->data << endl;

    cout << " the maximum value of the BST is given by " << maxValueFind(root)->data << endl;

    root = deleteFromBST(root, 30); // yaha pe alaga alag input daal ke dekh sakta result

    cout << "printing after deletion code ran " << endl;

    cout << "printing the BST " << endl;
    ;
    levelOrderTraversal(root); // similarly we can use inorder pre ordr and post order etc traversal

    cout << " the minimum value of the BST is given by " << minValueFind(root)->data << endl;

    cout << " the maximum value of the BST is given by " << maxValueFind(root)->data << endl;
    return 0;
}
