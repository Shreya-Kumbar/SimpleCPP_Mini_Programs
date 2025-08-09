#include<simplecpp>

main_program{
//Write your code here

    int m, n;
    cout<<"Enter two integers to find their GCD and LCM: "<<endl;
    cin>>m>>n;

    while (m<=0 || n<=0){     // make sure the entered integers are positive
        cout<<"Please enter positive integers only: "<<endl;
        cin>>m>>n;
    }

    int A=m, B=n;             // store initials for output

    while(m%n!=0){
        int nextm=n;       // GCD part
        int nextn=m%n;
        m=nextm;
        n=nextn;
    }

    int LCM;
    LCM=(A*B)/n;         // as n is the GCD now

    cout<<"GCD: "<<n<<endl<<"LCM: "<<LCM<<endl;
}
