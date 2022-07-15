#include <iostream>
using namespace std;

string arr_name[20];
string arr_class[20];
string arr_id[20];

int total = 0;

void add_student(){

    if (total == 0) {
        int num;
        cout << "Enter number of Students you want to add: ";
        cin >> num;

        total = (total + num);
        for (int i = 0; i < num; i++) {
            cout << "Enter Data of Student number " << i + 1 << endl << endl;

            cout << "Enter Name: ";
            cin >> arr_name[i];
            cout << "Enter class: ";
            cin >> arr_class[i];
            cout << "Enter Id: ";
            cin >> arr_id[i];


        }
        cout<<"New Total: "<<total<<endl;
    }
    else
    {
        int new_num;
        cout << "Enter number of Students you want to add: ";
        cin >> new_num;
        int rotate;

        rotate = total;
        total = (total + new_num);

        for (int i = rotate; i < total; i++) {

            cout << "Enter Data of Student number " << rotate + 1 << endl;

            cout << "Enter Name: ";
            cin >> arr_name[i];
            cout << "Enter class: ";
            cin >> arr_class[i];
            cout << "Enter Id: ";
            cin >> arr_id[i];

            rotate++;
        }
        cout<<"New Total: "<<total<<endl;
    }

}

void edit_student(){

    string stud;
    cout << "Enter Student ID you want to Edit: ";
    cin >> stud;

    for (int i = 0; i < total; i++) {

        if (arr_id[i] == stud) {
            cout << "Previous Name of Student: " << arr_name[i] << endl;
            cout << "Previous Class of Student: " << arr_class[i] << endl;
            cout << "Previous ID of Student: " << arr_id[i] << endl;

            arr_id[i] = '0';
            arr_class[i] = '0';
            arr_name[i] = '0';

            cout << "new Name of Student: ";
            cin>>arr_name[i];
            cout << "new Class of Student: ";
            cin>>arr_class[i];
            cout << "new ID of Student: ";
            cin>>arr_id[i];

            cout << "Edited Name of Student: " << arr_name[i] << endl;
            cout << "Edited Class of Student: " << arr_class[i] << endl;
            cout << "Edited ID of Student: " << arr_id[i] << endl;
            cout<<endl<<endl;
        }
    }
}

void remove_student(){
    string stud;
    cout<<"Enter Student ID you want to remove: ";
    cin>>stud;

    for (int i = 0; i < total; i++) {

        if (arr_id[i] == stud) {
            cout << "Previous Name of Student: " << arr_name[i] << endl;
            cout << "Previous Class of Student: " << arr_class[i] << endl;
            cout << "Previous Name of Student: " << arr_id[i] << endl;

            arr_id[i] = '0';
            arr_class[i] = '0';
            arr_name[i] = '0';

        }
    }
}




void search_student(){
    string stud;
    cout << "Enter Student ID you want to search: ";
    cin >> stud;

    for (int i = 0; i < total; i++) {

        if (arr_id[i] == stud) {
            cout << "Name of Student: " << arr_name[i] << endl;
            cout << "Class of Student: " << arr_class[i] << endl;
            cout << "ID of Student: " << arr_id[i] << endl;
        }
    }
}

void view_list(){
    cout<<"Total Number of Students: "<<total<<endl;

    for (int i = 0; i < total; i++) {
        cout<<"Student Number "<<i+1<<endl;

        cout<<"Name of Student: "<<arr_name[i]<<endl;
        cout<<"ID of Student: "<<arr_id[i]<<endl;
        cout<<"Class of Student: "<<arr_class[i]<<endl<<endl;
    }
}

int main(){

    cout<<"**********  Welcome to STUDENT MANAGEMENT SYSTEM  **********"<<endl<<endl;

    int option;

    do {
        cout << "Press 1 to 'Add Student' " << endl;
        cout << "Press 2 to 'Edit Data' " << endl;
        cout << "Press 3 to 'Remove Student' " << endl;
        cout << "Press 4 to 'Search Student' " << endl;
        cout << "Press 5 to 'View the List Of Student' " <<endl;
        cout << "0. Exit " << endl;
        cin >> option;


        switch (option) {
            case 1:
                add_student();
                break;
            case 2:
                edit_student();
                break;
            case 3:
                remove_student();
                break;
            case 4:
                search_student();
                break;
            case 5:
                view_list();
                break;
            default:
                cout << "Invalid Value!" << endl;
                break;
        }
    } while (option != 0);
}
