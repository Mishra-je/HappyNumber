// #include <iostream>
// using namespace std;
// #include <unordered_set>

// int NextNumber(int n)
// {
//     int nextNum = 0;
//     while (n != 0)
//     {
//         int num = n % 10;
//         nextNum += num * num;
//         n = n / 10;
//     }
//     return nextNum;
// }
// int main()
// {

//     int n;
//     cout << "Enter a Happy number : " << endl;
//     cin >> n;
    
//     unordered_set<int> set;
//     if(set.find(n) != set.end()){
//         cout<<"Not a Happy number";
//     }
    
//     while (n != 1 && !set.count(n))
//     {
        
//         set.insert(n);
//         n = NextNumber(n);
    
//     }
//      cout<<"Happy Number";
   
// }
/************************************************************** */

//Second way 


// CPP program to check if a number
// is happy number
// #include <bits/stdc++.h>
// using namespace std;

// // Returns sum of squares of digits
// // of a number n. For example for n = 12
// // it returns 1 + 4 = 5
// int sumDigitSquare(int n)
// {
//     int sq = 0;
//     while (n!=0) {
//         int digit = n % 10;
//         sq += digit * digit;
//         n = n / 10;
//     }
//     return sq;
// }

// Returns true if n is Happy number
// else returns false.
// bool isHappy(int n)
// {
//     // A set to store numbers during
//     // repeated square sum process
//     set<int> s;
//     s.insert(n);

//     // Keep replacing n with sum of
//     // squares of digits until we either
//     // reach 1 or we endup in a cycle
//     while (1) {

//         // Number is Happy if we reach 1
//         if (n == 1)
//             return true;

//         // Replace n with sum of squares
//         // of digits
//         n = sumDigitSquare(n);

//         // If n is already visited, a cycle
//         // is formed, means not Happy
//         if (s.find(n) != s.end())
//             return false;

//         // Mark n as visited
//         s.insert(n);
//     }

//     return false;
// }

// // Driver code
// int main()
// {
//     int n;
//     cout<<"Enter a number to check happy or not!";
//     cin>>n;
//     if (isHappy(n))
//         cout << "Yes, It is a happy number" << endl;
//     else
//         cout << "Not a happy nuber" << endl;
//     return 0;
// }


#include<iostream>
using namespace std;

int nextNum(int n){

    int num =0;
    while(n!=0)
    {
        int number=n%10;
        num+= number*number;
        n=n/10;
    }
    return num;
    
}

bool HappyNum(int n){


    while (n!=1 && n!=4)
    {
        n=nextNum(n);
    }
        if(n==1){
           cout<<" Happy number !";
        }else if(n==4){
            cout<<"not a Happy number!";
        }

    
    
}

int main(){
    int n;
    cout<<"Enter a number";
    cin>>n;
    HappyNum(n);
    return 0; 
}