 1. Write a program to find the sum of all elements in an array.

#include <iostream>
using namespace std;
int main(){
    int n,s;
    cin>>n;
    int arr[n];
    for (int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for (int i=1;i<=n;i++){
        s=s+arr[i];
    }
    for (int i=1;i<=n;i++){
        cout<<arr[i];
    }
    cout<<"sum of all elements of array is :"<<s;
    
    
}

2.Write a program to find the maximum element in an array.


#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int big=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>big){
            big=arr[i];
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the greastest element is:"<<big;
    
    
}

3.Write a program to find the minimum element in an array.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int smallest=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]<smallest){
            smallest=arr[i];
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the greastest element is:"<<smallest;
    
    
}

4.Write a program to count the number of even and odd elements in an array.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n],e=0,o=0;
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            e=e+1;
           
        }
        else{
            o=o+1;
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"no of even no is  :"<<e<<endl;
    cout<<"no of odd no is  :"<<o;
    
}

5 Write a program to print the elements of an array in reverse order.

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
    for (int j=n-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
    
   
    
    
    
}

6.Write a program to search for an element in an array.

#include <iostream>
using namespace std;
int main(){
    int n ,search,c=0;
    cin>>n;
    int arr[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cin>>search;
    cout<<"the element to be search is :"<<search<<endl;
    cout<<"your array list is "<<endl;
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
     
    for (int i=0;i<n;i++)
    {
       if (arr[i]==search){
           c=c+1;
       } 
       
    cout<<endl;   
    }
    if (c >=1){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }
    
   
    
    
    
}

 7. Write a program to copy all elements from one array to another.

 #include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    int wow[n];
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for (int i=0;i<n;i++){
        wow[i]=arr[i];
    }
    
    
    for (int i=0;i<n;i++){
        cout<<wow[i]<<" ";
    }
    
     
    
    
} 

8. Write a program to find the frequency of each element in the array.
#include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    
    
    
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        
    }
    int freq[max+1]={0};
    for (int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    
    
    for (int i=0;i<(max+1);i++){
        cout<<i<<"--> "<<freq[i]<<endl;
    }
    
     
    
    
}

9.-Write a program to check whether a character is a vowel or a consonant.

#include <bits/stdc++.h>

using namespace std;

int main() {
    char p;
    cin >> p;
    if (p == 'a' || p == 'e' || p == 'i' || p == 'o' || p == 'u'||p == 'A' || p == 'E' || p == 'I' || p == 'O' || p == 'U') {
        cout << "vowel";
    }
    else if ((p >= 'a' && p <= 'z')||(p >= 'A' && p <= 'Z')) {
        cout << "consonant";
    }
    else {
        cout << "invalid";
    }

}

10.-Write a program to print the multiplication table of a given number up to 10.

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cout<<"enter the no for table generation"<<endl;
    cin>>t;
    for (int i=1;i<=10;i++)
    {
        cout<<t<<"X "<<i<<"="<<i*t<<endl;
    }
	

}
 11.Write a program to count the number of digits in a given number.

 #include <bits/stdc++.h>
using namespace std;

int main() {
	int t,c=0;
	cin>>t;
	int n=t;
	while(n>0){
	    n=n/10;
	    c=c+1;
	}
	cout<<"the no of digits in no "<<t<<"is"<<c;
}


12.Write a program to reverse a given integer.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,rev=0;
	
	cin>>t;
	int n=t;
	while(t>0){
	    rev=(rev*10)+(t%10);
	    t=t/10;
	}
	cout<<"the reverse of the no  "<<n<<"is"<<rev;
}

13. Write a program to find the sum of digits of a number.
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,s=0,k=0;
	
	cin>>t;
	int n=t;
	while(t>0){
	    k=t%10;
	    s=s+k;
	    t=t/10;
	    
	}
	cout<<"the sum of digits of no   "<<n<<"is"<<endl<<s;
}
14.Write a program to calculate the factorial of a number.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,s=1;
	cin>>t;
	
	for (int i=1;i<=t;i++)
	{
	    s=s*i;
	}
	cout<<"the factorial of no. "<<t<<" is "<<s;
}

15.Write a program to check whether the number is Palindrome or
not.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,rev=0;
	cin>>t;
	int n=t;
	while(t>0){
	    rev=(rev*10)+(t%10);
	    t=t/10;
	}
	if (n==rev){
	    cout<<"palindrome";
	}
	else{
	    cout<<"not palindrome";
	}
}

16.Write a program to print the first N terms of the Fibonacci series.


#include <bits/stdc++.h>
using namespace std;

int main() {
	cout<<"enter the no for fibonacci series. ";
    int n;
    cin>>n;
    cout<<n<<endl;
    cout<<"the fibonaciee sries is :"<<endl;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=3;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
}
17. Write a program to check whether the number is Armstrong
number or not.

#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    int n, c = 0, s = 0;
    float k;
    cin >> n;
    
    int t= n;
    int p=n;
    
    while (n > 0) {
        c = c + 1;
        n = n / 10;

    
    }
    cout<<c<<endl;
    while (t > 0) {
        k = t % 10;
        s = s + pow(k,c);
        t = t / 10;
    }
    cout<<s<<endl;
    if (p == s) {
        cout << "armstrong";
    }
    else {
        cout << "not armstrong";
    }

}

-----------------------------------------------------------------------
Pattern printing programs:

1. Write a program to print a right triangle pattern of stars using
loops.

#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}

2.Write a program to print an inverted right triangle pattern of stars.

#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    for (int i =4; i >=0; i--) {
        for (int j = 1; j <=i; j++) {
            cout << "*" << " ";
        }
        cout << endl;
    }

}

3.Write a program to print a half pyramid pattern using numbers.
#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    for (int i=1;i<=5;i++){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   

}

4.WAP to print an inverted number pyramid pattern.

#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    for (int i=5;i>=1;i--){
        for (int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
   

}

5.WAP to print Floyd’s triangle using consecutive numbers.

#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    int num=1;
    for (int i=1;i<=4;i++){
        for (int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
   

}

6.Write a program to print a square of stars using nested loops.
#include <bits/stdc++.h>

#include <cmath>

using namespace std;

int main() {
    
    for (int i=1;i<=3;i++){
        for (int j=1;j<=3;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
   

}

