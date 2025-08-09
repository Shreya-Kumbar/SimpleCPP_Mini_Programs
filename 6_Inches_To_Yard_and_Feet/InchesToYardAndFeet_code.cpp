#include<simplecpp>

//funtion to convert inches to yards, feet and remaining inches.

void inchesToOtherDimensions(double n){

    int yards, feet;
    double inches;

    if (n<0)
        cout<<endl<<"Please enter a positive number."<<endl;

    else if (n>0 && n<1){
        yards = 0;
        feet = 0;
        inches = n;

        cout<<yards<<" yards,"<<feet<<" feet,"<<inches<<" inches."<<endl;
    }

    else{
        int inches_per_foot = 12;     // cuz 1 foot=12 inches.
        int inches_per_yard = 36;     // 1 yard=3 feet.

        yards = n / inches_per_yard;
        feet = (int(n) % inches_per_yard) / inches_per_foot;
        inches = n - (yards*inches_per_yard) - (feet*inches_per_foot);

        cout<<yards<<" yards,"<<feet<<" feet,"<<inches<<" inches."<<endl;
    }
}
main_program{
//Write your code here

    double n;
    cout<<"Enter the number of inches to convert it to yards, feet and remaining inches: ";
    cin>>n;

    inchesToOtherDimensions(n);
}
