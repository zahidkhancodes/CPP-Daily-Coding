/* 
#include <iostream>
using namespace std;

float Sub5Mark(){
    float Practical , Theory , Eng , Hin , Math , Phy , Chem ,  MarkSecured=0.0  ;
    for (int i = 1 ; i <= 5 ; i++){
        cout<<"Enter the mark for subject (total 5) in Theory and Practical .";
        cin >> Theory >> Practical ;
        MarkSecured = MarkSecured + Theory + Practical ; 
    }
    return MarkSecured;
}

float OptSub(){
    int IT , Elect , x ;
    float Practical , Theory , Bio , Zoology , Botany ;
    cout<< "Which sub did you choose?\nOpt 1: IT\nOpt 2: Electronics\nOpt 3: Biology\nChoose the Opt no."<<endl;
    cin>>x;
    if(x==1 || x==2){
        cout << "Enter Theory and Practical marks"<<endl;
        cin >> Theory >> Practical;
        return Theory + Practical;
    }
    else if(x=3){
        cout << "Enter your Zoology and Botany Theory mark"<<endl;
        cin >> Zoology >> Botany;
        cout << "Enter the Biology Practical mark"<<endl;
        cin >> Practical;
        return Zoology + Botany + Practical;
    }
    else{
        cout << "Failed in Optional"<<endl;
        return 1;
    }
}
int main() {
    float MarkSecured = 0.0 , TotalMark = 600;
    MarkSecured = Sub5Mark();
    MarkSecured += OptSub();
    cout<<"Total Mark: " << TotalMark << "MarkSecured: " << MarkSecured << "Percentage Of Mark: " << (MarkSecured+TotalMark)*100;
    
    return 0;
} 
*/

#include <iostream>
using namespace std;

float marks(){
    
    float ChemP , ChemT , PhyP , PhyT , Eng , Hin , Maths , Phy , Chem ,  MarkSecured=0.0 ;
    
    cout << "Enter your English Mark : " ;
    cin >> Eng ;
    cout << "Enter your Hindi Mark : " ;
    cin >> Hin ;
    cout << "Enter your Mathematics Mark : " ;
    cin >> Maths ;
    cout << "Enter your Physics Theory Mark Only : " ;
    cin >> PhyT ;
    cout << "Enter your Physics Practical Mark Only : " ;
    cin >> PhyP ;
    cout << "Enter your Chemistry Theory Mark Only : " ;
    cin >> ChemT ;
    cout << "Enter your Chemistry Practical Mark Only : " ;
    cin >> ChemP ;
    
    return Eng + Hin + Maths + PhyT + PhyT + ChemP + ChemT ;
    
}


float OptSub(){
    
    int IT , Elect , x ;
    float Bio ;
    float ITP , ITT , ElectT , ElectP , ZoolP , BotP , ZoolT , BotT ;
    cout<< "\nWhich sub did you choose?\nOpt 1: IT\nOpt 2: Electronics\nOpt 3: Biology\nChoose the Opt no."<<endl;
    cin>>x;
    if(x==1){
        cout << "Enter Theory and Practical marks of IT"<<endl;
        cin >> ITT >> ITP;
        return ITT + ITP;
    }
    else if(x==2){
        cout << "Enter Theory and Practical marks of Electronics"<<endl;
        cin >> ElectT >> ElectP;
        return ElectT + ElectP;
    }
    else if(x==3){
        cout << "Enter your Zoology Theory mark"<<endl;
        cin >> ZoolT;
        cout << "Enter your Botany Theory mark"<<endl;
        cin >> BotT;
        cout << "Enter the Zology Practical mark"<<endl;
        cin >> ZoolP;
        cout << "Enter the Botany Practical mark"<<endl;
        cin >> BotP;
        return ZoolT + BotT + ZoolP + BotP ;
    }
    else{
        cout << "Failed in Optional"<<endl;
        return 1;
    }
    
}

int main(){
    float mark_secured = 0.0 , total_mark = 600;
    cout << "Welcome to Exam CALCULATOR\n\n\n";
    mark_secured = marks();
    mark_secured += OptSub();
    cout<<"\n\nTotal Mark of the Student : " << total_mark << "\n\nMarkSecured by the Student : " << mark_secured << "\n\nPercentage of Mark secured by the Student : " << (mark_secured/total_mark)*100;
    
    return 0;
}
