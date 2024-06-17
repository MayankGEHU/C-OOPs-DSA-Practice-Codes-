#include<iostream>
using namespace std;
class patient {
    public:
    string pnt_name;
    int age;
    char sex;

    void input_details(){
        cout<<"Enter the patient name:"<<endl;
        cin>>pnt_name;
        cout<<"Enter the age of the patient:"<<endl;
        cin>>age;
        cout<<"Enetr the sex of the patient:"<<endl;
        cin>>sex;
    }
};

class IPD{
    public:
    int ward_no,bed_no;
    void put_details(){
        cout<<"Enter the ward number:"<<endl;
        cin>>ward_no;
        cout<<"Enter the bed number:"<<endl;
        cin>>bed_no;
    }
};

class IPD_patient:public patient,public IPD{
    public:
    int days;
    float charge_per_day=0.0;
    void calc(){
        cout<<"Enter th number of days the patient was admitted:"<<endl;
        cin>>days;
        cout<<"Enter the charge applied per day :"<<endl;
        cin>>charge_per_day;
        charge_per_day=(charge_per_day)*days;

        cout<<"The total amount is : Rs "<<charge_per_day<<endl;
    }
};

int main(){
    IPD_patient obj;
    obj.input_details();
    obj.put_details();
    obj.calc();
}

/*

Class patient banao(pnt_name, age ,sex) and class IPD banao(ward_no,bed_no,
Charge_per_day) phir class IPD_Patiemt banao jisme dono classes ko Inheritance karna hai aur usme attributes 
bana hai ki Patient kitne din rha hospital main Aur phir amount batana hai
Eg charge per day 5000 hai 
Aur vo 5 din hospital mein rha 
To total amount 5000X5 =250000 show hona chahiye  Poora bill

*/