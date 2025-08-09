#include<simplecpp>

main_program{
//Write your code here

    int count=0, n;
    cout<<"Enter a number to find Pythagorean triples: "<<endl;
    cin>>n;

    for (int x=1; x<=n; x++)
        for (int y=1; y<=n; y++)
            for (int z=1; z<=n; z++){
                if (x*x+y*y==z*z && x<y && y<z){
                    count++;
                    cout<<"x="<<x<<" y="<<y<<" z="<<z<<endl;
                }
            }
    cout<<endl<<"Total Pythagorean triples count: "<<count<<"."<<endl;
}
