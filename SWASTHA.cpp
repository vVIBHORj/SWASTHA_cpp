#include<fstream>
#include<iomanip>
#include<string>
#include<stdlib.h>
#include<stdio.h> 
#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
using namespace std;



class PedigreeAnalysis {
public:
    // Constructor
    PedigreeAnalysis() : diabetesScore(0) {}

    // Method to collect family history and calculate the diabetes score
    void performAnalysis() {
        // Ask the user for family history
        getFamilyHistory();

        // Calculate the diabetes score
        calculateDiabetesScore();

        // Display the result
        displayResult();
    } 	

private:
    // Attributes
    int diabetesScore;

    // Method to get family history input
    void getFamilyHistory() {
        cout << "Enter the number of parents with diabetes: ";
        int parentDiabetesCount;
        cin >> parentDiabetesCount;

        cout << "Enter the number of grandparents with diabetes: ";
        int grandparentDiabetesCount;
        cin >> grandparentDiabetesCount;

        // Assign scores based on family history
        diabetesScore = parentDiabetesCount * 2 + grandparentDiabetesCount;
    }

    // Method to calculate diabetes score
    void calculateDiabetesScore() {
        // You can customize the scoring system based on more detailed genetic information
        // Here, we are using a simple scoring system: 2 points for each affected parent and 1 point for each affected grandparent
    }

    // Method to display the result
    void displayResult() {
        cout << "Diabetes Score: " << diabetesScore << endl;

        // Determine the likelihood based on the score (you can customize this based on your scoring system)
        if (diabetesScore >= 4) {
            cout << "High likelihood of diabetes. Consult a healthcare professional." << endl;
        } else if (diabetesScore >= 2) {
            cout << "Moderate likelihood of diabetes. Monitor your health regularly." << endl;
        } else {
            cout << "Low likelihood of diabetes. Maintain a healthy lifestyle." << endl;
        }
    }
};

void suggestTabooTopics(const string& gender)
{
    cout << "=== Taboo Topics in Healthcare ===" << endl;

    if (gender == "male")
    {
        cout << "1. Masturbation" << endl;
        cout << "2. Erectile dysfunction" << endl;
        cout << "3. Prostate health" << endl;
        cout << "4. Testicular health" << endl;
    }
    else if (gender == "female")
    {
        cout << "1. Menstruation" << endl;
        cout << "2. Pregnancy" << endl;
        cout << "3. Contraception" << endl;
        cout << "4. Breast health" << endl;
    }
    else
    {
        cout << "Invalid gender specified." << endl;
        return;
    }

    cout << endl;
    cout << "Please remember that discussing these topics with a healthcare professional is important for your well-being." << endl;
}

void handleMasturbationQuestions()
{
    string response;
    cout << "Do you have any questions about masturbation? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Masturbation is a normal and healthy part of human sexuality. If you have specific concerns or questions, consider consulting with a healthcare professional for personalized advice." << endl;
    }
}

void handleErectileDysfunctionQuestions()
{
    string response;
    cout << "Do you have any questions about erectile dysfunction? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Erectile dysfunction is a common issue that can have various causes. If you have concerns or questions, it's advisable to consult with a healthcare professional for a thorough assessment." << endl;
    }
}
void handleProstateHealthQuestions()
{
    string response;
    cout << "Do you have any questions about prostate health? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Prostate health is important for men's well-being. If you have concerns or questions, it's advisable to consult with a healthcare professional for screenings and guidance on maintaining prostate health." << endl;
    }
}

void handleTesticularHealthQuestions()
{
    string response;
    cout << "Do you have any questions about testicular health? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Testicular health is crucial for men's reproductive health. If you have concerns or questions, it's essential to consult with a healthcare professional for testicular examinations and advice on self-care." << endl;
    }
}

void handleMenstruationQuestions()
{
    string response;
    cout << "Do you have any questions about menstruation? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Menstruation is a natural process in a woman's body. If you have specific concerns or questions, it's important to consult with a healthcare professional for personalized advice." << endl;
    }
}

void handlePregnancyQuestions()
{
    string response;
    cout << "Do you have any questions about pregnancy? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Pregnancy is a significant phase in a woman's life. If you have concerns or questions, it's advisable to consult with a healthcare professional for guidance and support." << endl;
    }
}

void handleContraceptionQuestions()
{
    string response;
    cout << "Do you have any questions about contraception? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Contraception methods are important for family planning. If you have questions or need guidance, it's recommended to consult with a healthcare professional to explore suitable options." << endl;
    }
}

void handleBreastHealthQuestions()
{
    string response;
    cout << "Do you have any questions about breast health? (yes/no): ";
    cin >> response;

    if (response == "yes")
    {
        cout << "Breast health is crucial for overall well-being. If you have concerns or questions, it's essential to consult with a healthcare professional for breast examinations and advice on self-care." << endl;
    }
}


// function to perform search on lal path labs
void perform_lalpathlabs_search(string medical_test) {
    stringstream url;
    url<<"https://www.lalpathlabs.com/pathology-test/"<<medical_test;

    string command = "start " + url.str();
    system(command.c_str());
}

// function to suggest the book for the user
void suggest_book(string medical_test) {
    cout << "We recommend the book 'Mastering the Pathology Labs: Volume 1, General Medicine and Oncology' by Pathology Associates of India." << endl;
}

// function to perform search on google
void perform_google_search(string search_query) {
    stringstream url;
    url << "https://www.google.com/search?q=" << search_query;

    string command = "start " + url.str();
    system(command.c_str());
}

// function to perform search on netmeds
void perform_netmeds_search(string medicine_name) {
    stringstream url;
    // url << "https://www.netmeds.com/search?q=" << medicine_name;
    url<<"https://www.netmeds.com/catalogsearch/result/"<<medicine_name<<"/all";

    string command = "start " + url.str();
    system(command.c_str());
}




struct Feedback {
    string patientName;
    string hospitalName;
    string doctorName;
    string feedbackText;
};

void leaveFeedback() {
    Feedback feedback;
    cout << "Patient Name: ";
    cin.ignore();
    getline(cin, feedback.patientName);
    cout << "Hospital Name: ";
    getline(cin, feedback.hospitalName);
    cout << "Doctor Name: ";
    getline(cin, feedback.doctorName);
    cout << "Feedback: ";
    getline(cin, feedback.feedbackText);

    ofstream outFile("feedback.txt", ios::app);
    if (outFile.is_open()) {
        outFile << "Patient: " << feedback.patientName << endl;
        outFile << "Hospital: " << feedback.hospitalName << endl;
        outFile << "Doctor: " << feedback.doctorName << endl;
        outFile << "Feedback: " << feedback.feedbackText << endl;
        outFile << "----------------------------------" << endl;
        outFile.close();
        cout << "Thank you for your feedback!" << endl;
    } else {
        cerr << "Error: Unable to save feedback." << endl;
    }
}

#include <iostream>
#include <vector>
#include <string>

struct Patient {
    string name;
    int age;
    string gender;
    string address;
    string diagnosis;
    string treatment;
    double height;
    double weight;
    string bloodType;
    string allergies;
};

void savePatientReport(vector<Patient>& patientDatabase) {
    Patient patient;

    cout << "Enter patient's name: ";
    cin.ignore();
    getline(cin, patient.name);

    cout << "Enter patient's age: ";
    cin >> patient.age;

    cout << "Enter patient's gender: ";
    cin.ignore();
    getline(cin, patient.gender);

    cout << "Enter patient's address: ";
    cin.ignore();
    getline(cin, patient.address);

    cout << "Enter diagnosis: ";
    cin.ignore();
    getline(cin, patient.diagnosis);

    cout << "Enter treatment: ";
    cin.ignore();
    getline(cin, patient.treatment);

    cout << "Enter patient's height (in cm): ";
    cin >> patient.height;

    cout << "Enter patient's weight (in kg): ";
    cin >> patient.weight;

    cout << "Enter patient's blood type: ";
    cin.ignore();
    getline(cin, patient.bloodType);

    cout << "Enter patient's allergies: ";
    cin.ignore();
    getline(cin, patient.allergies);

    patientDatabase.push_back(patient);
    cout << "Patient report saved successfully." << endl;
}

void displayPatientReports(const vector<Patient>& patientDatabase) {
    if (patientDatabase.empty()) {
        cout << "No patient reports to display." << endl;
    } else {
        cout << "Patient Reports:" << endl;
        for (const Patient& patient : patientDatabase) {
            cout << "Name: " << patient.name << endl;
            cout << "Age: " << patient.age << endl;
            cout << "Gender: " << patient.gender << endl;
            cout << "Address: " << patient.address << endl;
            cout << "Diagnosis: " << patient.diagnosis << endl;
            cout << "Treatment: " << patient.treatment << endl;
            cout << "Height (cm): " << patient.height << endl;
            cout << "Weight (kg): " << patient.weight << endl;
            cout << "Blood Type: " << patient.bloodType << endl;
            cout << "Allergies: " << patient.allergies << endl;
            cout << "------------------------" << endl;
        }
    }
}







int chooseMain();
void getDoctorDatabase();
void	getPatientDatabase();		
void getBedDatabase();
void	getPatientReport();

struct Hospital {
    string name;
    string state;
    string city;
    string localAddress;
    string pincode;
};
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Disease {
    string name;
    double temperature;
    int bloodPressure;
    int heartRate;
    int sugarLevel;
    vector<string> medicines;
    vector<string> precautions;
};
int t=98.6;
int bp=120;
int hr=70;
int sl=80;


vector<Disease> initializeDiseases() {
    vector<Disease> diseases;

    // Disease 1: Common Cold
    Disease cold;
    cold.name = "Common Cold";
    cold.temperature = 100; // high body temperature
    cold.bloodPressure = 120; // Normal blood pressure
    cold.heartRate = 70; // Normal heart rate
    cold.sugarLevel = 80; // Normal sugar level
    cold.medicines = { "Pain relievers", "Decongestants" };
    cold.precautions = { "Drink plenty of fluids", "Get plenty of rest" };
    diseases.push_back(cold);

    // Disease 2: Hypertension (High Blood Pressure)
    Disease hypertension;
    hypertension.name = "Hypertension";
    hypertension.temperature = 98.6; // Normal body temperature
    hypertension.bloodPressure = 140; // High blood pressure
    hypertension.heartRate = 70; // Normal heart rate
    hypertension.sugarLevel = 80; // Normal sugar level
    hypertension.medicines = { "Antihypertensive medications" };
    hypertension.precautions = { "Maintain a healthy diet", "Exercise regularly" };
    diseases.push_back(hypertension);

    Disease diabetes;
    diabetes.name = "Diabetes";
    diabetes.temperature = 98.6; // Normal body temperature
    diabetes.bloodPressure = 120; // Normal blood pressure
    diabetes.heartRate = 70; // Normal heart rate
    diabetes.sugarLevel = 200; // High sugar level
    diabetes.medicines = { "Insulin", "Oral medications" };
    diabetes.precautions = { "Monitor blood sugar levels regularly", "Follow a healthy diet" };
    diseases.push_back(diabetes);

    // Disease 4: Asthma
    Disease asthma;
    asthma.name = "Asthma";
    asthma.temperature = 98.6; // Normal body temperature
    asthma.bloodPressure = 120; // Normal blood pressure
    asthma.heartRate = 70; // Normal heart rate
    asthma.sugarLevel = 80; // Normal sugar level
    asthma.medicines = { "Bronchodilators", "Inhaled corticosteroids" };
    asthma.precautions = { "Avoid triggers like smoke and allergens", "Use inhalers as prescribed" };
    diseases.push_back(asthma);

    // Disease 5: Migraine
    Disease migraine;
    migraine.name = "Migraine";
    migraine.temperature = 98.6; // Normal body temperature
    migraine.bloodPressure = 120; // Normal blood pressure
    migraine.heartRate = 70; // Normal heart rate
    migraine.sugarLevel = 80; // Normal sugar level
    migraine.medicines = { "Pain relievers", "Triptans" };
    migraine.precautions = { "Identify triggers and avoid them", "Get enough sleep" };
    diseases.push_back(migraine);

    // Disease 6: Allergies
    Disease allergies;
    allergies.name = "Allergies";
    allergies.temperature = 98.6; // Normal body temperature
    allergies.bloodPressure = 120; // Normal blood pressure
    allergies.heartRate = 70; // Normal heart rate
    allergies.sugarLevel = 80; // Normal sugar level
    allergies.medicines = { "Antihistamines", "Nasal sprays" };
    allergies.precautions = { "Avoid allergens", "Keep the environment clean" };
    diseases.push_back(allergies);

    // Disease 7: Arthritis
    Disease arthritis;
    arthritis.name = "Arthritis";
    arthritis.temperature = 98.6; // Normal body temperature
    arthritis.bloodPressure = 120; // Normal blood pressure
    arthritis.heartRate = 70; // Normal heart rate
    arthritis.sugarLevel = 80; // Normal sugar level
    arthritis.medicines = { "Nonsteroidal anti-inflammatory drugs (NSAIDs)", "Corticosteroids" };
    arthritis.precautions = { "Exercise regularly", "Maintain a healthy weight" };
    diseases.push_back(arthritis);

    return diseases;
}

string predictDisease(const vector<Disease>& diseases, double temperature, int bloodPressure, int heartRate, int sugarLevel) {
    for (const auto& disease : diseases) {
        if (temperature != disease.temperature ||
            bloodPressure != disease.bloodPressure ||
            heartRate != disease.heartRate ||
            sugarLevel != disease.sugarLevel) {
            continue;
        }

        return disease.name;
    }

    return "Unknown";
}

void displayMedicines(const vector<string>& medicines) {
    cout << "Medicines: ";
    for (const auto& medicine : medicines) {
        cout << medicine << ", ";
    }
    cout << endl;
}

void displayPrecautions(const vector<string>& precautions) {
    cout << "Precautions: ";
    for (const auto& precaution : precautions) {
        cout << precaution << ", ";
    }
    cout << endl;
}



vector<Hospital> readHospitalData(const string& filename) {
    ifstream file(filename);
    vector<Hospital> hospitals;
    string line;

    getline(file, line);

    while (getline(file, line)) {
        stringstream ss(line);
        string field;
        Hospital hospital;

        getline(ss, field, ',');

        getline(ss, hospital.name, ',');
        getline(ss, hospital.state, ',');
        getline(ss, hospital.city, ',');
        getline(ss, hospital.localAddress, ',');
        getline(ss, hospital.pincode, ',');

        hospitals.push_back(hospital);
    }

    return hospitals;
}

string findHospital(const vector<Hospital>& hospitals, const string& city, const string& localAddress) {
    for (const auto& hospital : hospitals) {
        if (hospital.city == city && hospital.localAddress == localAddress) {
            return hospital.name;
        }
    }

    return "Hospital not found.";
}



//the password class
class password{
	
	public:
	string pass;
	void getPassword(){
    cout<<"\nChoose a password for your system:"<<endl;
    cin>>pass;
    }
    
	int verifyPassword()
	{
	string x;
	cout<<"\nEnter the password:"<<endl;
	cin>>x;
	if (x==pass)
	return 1;
	else 
	return 0;	 	
   }
    
    void passwordProtect(){
    	int veri=verifyPassword();
	
		 if(veri==1){
		 	cout<<"\nAccess Granted!"<<endl;
		 }
		 else 
		 {
		cout<<right<<setw(40)<<setfill(' ')<<"\nAccess Denied!\n\nSystem will shut down\n\nPlease come back again."<<endl;
		 exit(0);
		 }
	}
};

//the doctor class
class doctor{
	public:
	string d_fname,d_lname;
	int d_ID, d_age,experience,d_totalno;
	string qual,d_city;
	string getSpec();
   	friend void addDoc();
   	friend void editDoc(doctor &docobj);
   	friend void displayDoc();
   	friend void deleteDoc();
   	friend void dispDatabase();
   	friend void numberofDocs();
   	friend void getDoctorDatabase();
};
 string doctor::getSpec(){
 	string sp;
	cout<<"1.GENERAL_MEDICINE"<<endl;
	cout<<"2.NEUROLOGY"<<endl;
	cout<<"3.ONCOLOGY"<<endl;
	cout<<"4.HAEMATOLOGY"<<endl;
	cout<<"5.GASTROENTEROLOGY"<<endl;
	cout<<"6.GYNAECOLOGY "<<endl;
	int s;
	cin>>s;
	switch(s){
		
		case 1:{
			sp= "GENERAL_MEDICINE";
			break;
		}
		case 2:{
			sp="NEUROLOGY";
			break;
		}
		case 3:{
		    sp="ONCOLOGY";
			break;
		}
		case 4:{
			sp= "HAEMATOLOGY";
			break;
		}
		case 5:{
			sp= "GASTROENTEROLOGY";
			break;
		}
		case 6:{
			sp= "GYNAECOLOGY ";
			break;
		}
		default:{
			cout<<"\nCome on!Enter a valid option."<<endl;
			
		}
	
	}
		return sp;
	
}
//the addDoc function
void addDoc(){
	 doctor d;
	 cout<<"Fill up the following details"<<endl;
	 cout<<"ID:"<<endl;
	 cin>>d.d_ID;
   		cout<<"First Name:"<<endl;
   		cin>>d.d_fname;
   		cout<<"Last Name:"<<endl;
   		cin>>d.d_lname;
   		cout<<"Age:"<<endl;
   		cin>>d.d_age;
   		cout<<"Choose Qualification among the following:\n1.MBBS\n2.MD"<<endl;
   		int q;
   		cin>>q;
   		if(q==1)
   			d.qual="MBBS";
		else d.qual="MD";
		cout<<"Choose Specialization among the following:"<<endl;
		string spec=d.getSpec();
		cout<<"Experience (in Years):"<<endl;
		cin>>d.experience;
		cout<<"City:"<<endl;
		cin>>d.d_city;
		system("cls");
		
		
		fstream fileObj;   
		fileObj.open("doctor.txt",ios::app );
      //ID,firstname,lastname,age,qualification,specialization,experience,city

        fileObj.seekp (0, ios::end);
		fileObj<<d.d_ID<<endl<<d.d_fname<<endl<<d.d_lname<<endl<<d.d_age<<endl<<d.qual<<endl<<spec<<endl<<d.experience<<endl<<d.d_city<<endl;
		fileObj.close();
	
	//after completion
	cout<<"\n\t\tNew Doctor profile created successfully!"<<endl<<endl<<endl;
	cout<<"\n\n\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getDoctorDatabase();
	}
	  
	else
	  exit(0);
 //backtoDoctorMenu
		 
	}
	
//the editDoc function
void editDoc(doctor &docobj){
	string x;
	cout<<"\nEnter the ID of the Doctor whose profile you want to Edit:"<<endl;
	cin>>x;									 //ID,firstname,lastname,age,qualification,specialization,experience,city
	fstream fileObj("doctor.txt");
	fileObj.seekg(0);
	
	int age,exp,count=0;
	string ID,fname,lname,ci,qua,spe;
	while(fileObj>>ID>>fname>>lname>>age>>qua>>spe>>exp>>ci)
	{
		if(ID==x){
		cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
		count++;
		break;
		}
	}
	
	fileObj.close();
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	
							//datatransfer begins
	fstream file("doctor.txt");
	file.seekg (0, ios::beg);
	file.seekg(0);
	string line;
    ofstream tempObj;
	tempObj.open("copy.txt");
    tempObj.seekp(0);
  int skip = 0;
  int age1,exp1;
	string fname1,lname1,ci1,qua1,spe1;
	file.seekg(0);file.seekg(0,ios::cur); //setting the pointer to beginning of file
//		
//	 if (tempObj.is_open())
// 		 cout << "File successfully open";
//	else
//    	cout << "Error opening file";

	while(file>>line>>fname1>>lname1>>age1>>qua1>>spe1>>exp1>>ci1)
	{
		if(line!=x){
			tempObj<<line<<endl<<fname1<<endl<<lname1<<endl<<age1<<endl<<qua1<<endl<<spe1<<endl<<exp1<<endl<<ci1<<endl;
		}			
	}

  file.close();
  tempObj.close();
  remove("doctor.txt");
  int result;
  char oldname[] ="copy.txt";
  char newname[] ="doctor.txt";
  result= rename( oldname , newname );
								//datatransfer ends
	int edit;
	cout<<"Enter number corresponding to the Field you want to Edit:"<<endl;
	cin>>edit;
	cout<<endl;
	switch(edit)							//ID,firstname,lastname,age,qualification,specialization,experience,city
	{
		case 1:{
			cout<<"ID"<<endl;
			cin>>ID;
			break;
		}
		case 2:{
			cout<<"First Name:"<<endl;
			cin>>fname;
			
			break;
		}
		case 3:{
			cout<<"Last Name:"<<endl;
			cin>>lname;
			
			break;
		}
		case 4:{cout<<"Age:"<<endl;
			cin>>age;
			break;
		}
		case 5:{
			cout<<"Choose Qualification among the following:\n1.MBBS\n2.MD"<<endl;
   		int q;
   		cin>>q;
   		if(q=1){
		   	qua="MBBS";
		   }
   		
		else {
			qua="MD";
		}
			
		break;
		}
		case 6:{
			system("cls");
			spe=docobj.getSpec();
			break;
		}
		case 7:{cout<<"Experience:"<<endl;
			cin>>exp;
			break;
		}
		case 8:{cout<<"City:"<<endl;
			cin>>ci;
			break;
		}
		default:{
		cout<<"Invalid Input!"<<endl;
		exit(0);
		}
	}

	system("cls");
	cout<<right<<setw(50)<<setfill(' ')<<"--Updated Profile--"<<endl<<endl;
	cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
	
	//updated datatransfer
	fstream newObj;	
	newObj.open("doctor.txt", ios::app);
	 newObj.seekp (0, ios::end);
	 newObj<<ID<<endl<<fname<<endl<<lname<<endl<<age<<endl<<qua<<endl<<spe<<endl<<exp<<endl<<ci<<endl;
	 newObj.close();
	 
	 //after completion
	cout<<"\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getDoctorDatabase();
	}
	  
	else
	  exit(0);

	
}
	

//the displayDoc function
void displayDoc()
{
int x;
cout<<"\n\nEnter the ID of the Doctor whose profile you want to display:"<<endl;
cin>>x;									 //ID,firstname,lastname,age,qualification,specialization,experience,city
	ifstream file;file.open("doctor.txt",ios::out|ios::in);
	file.seekg(0);
		
	int ID,age,exp,count=0;
	string fname,lname,ci,qua,spe;
	
//	 if (file.is_open())
// 		 cout << "File successfully open";
//	else
//    cout << "Error opening file";
  
	while(file >> ID >> fname >> lname >>age >>qua >> spe >>exp >> ci)   //!fileObj.eof()
	{
	
		if(ID==x)
		{
		cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
		count++;
		}
	}
	file.close();
	if (count==0)
			cout<<"\nNo matching records found!"<<endl;
			
	cout<<"\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getDoctorDatabase();
	}
	  
	else
	  exit(0);

}

			
//the deleteDoc function
void deleteDoc(){	string x;
	cout<<"\nEnter the ID of the Doctor whose profile you want to Delete:"<<endl;
	cin>>x;									 //ID,firstname,lastname,age,qualification,specialization,experience,city
	fstream fileObj("doctor.txt");
	fileObj.seekg(0);
	
	int age,exp,count=0;
	string ID,fname,lname,ci,qua,spe;
	while(fileObj>>ID>>fname>>lname>>age>>qua>>spe>>exp>>ci)
	{
		if(ID==x){
		cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
		count++;
		break;
		}
	}
	
	fileObj.close();
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	cout<<"Are you sure you want to delete this profile?\n1.YES\n2.NO"<<endl;
	int n;cin>>n;
	if(n==1){
	fstream file("doctor.txt");
	file.seekg (0, ios::beg);
	file.seekg(0);
	string line;
    ofstream tempObj;
	tempObj.open("copy.txt");
    tempObj.seekp(0);
  int skip = 0;
  int age1,exp1;
	string fname1,lname1,ci1,qua1,spe1;
	file.seekg(0);file.seekg(0,ios::cur); //setting the pointer to beginning of file
		
	while(file>>line>>fname1>>lname1>>age1>>qua1>>spe1>>exp1>>ci1)
	{
		if(line!=x){
			tempObj<<line<<endl<<fname1<<endl<<lname1<<endl<<age1<<endl<<qua1<<endl<<spe1<<endl<<exp1<<endl<<ci1<<endl;
		}			
	}

  file.close();
  tempObj.close();
  remove("doctor.txt");
  int result;
  char oldname[] ="copy.txt";
  char newname[] ="doctor.txt";
  result= rename( oldname , newname );
  system("cls");
  cout<<"\n\t\tFile successfully deleted"<<endl;
  
}
	cout<<"\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getDoctorDatabase();
	}
	  
	else
	  exit(0);
}


//the dispDatabase function
void dispDatabase(){
	fstream fileObj("doctor.txt");
	fileObj.seekg(0);
	cout<<right<<setw(70)<<setfill(' ')<<"DOCTOR DATABASE"<<endl<<endl;
	int age,exp,count=0;
	string ID,fname,lname,ci,qua,spe;
	while(fileObj>>ID>>fname>>lname>>age>>qua>>spe>>exp>>ci)
	{	count++;
		cout<<right<<setw(50)<<setfill(' ')<<"Doctor Profile:"<<count<<endl;
		cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
	}
	
	if(count==0)
	{cout<<"\nNo matching records found!"<<endl;
 	 exit(0);
	}
	
	cout<<"\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1)
	{
	  system("cls");
	  getDoctorDatabase();
	} 
	else
	  exit(0);
}


//the numberofDocs function
void numberofDocs(){
	fstream fileObj("doctor.txt");
	fileObj.seekg(0);
	int age,exp,count=0;
	string ID,fname,lname,ci,qua,spe;
	while(fileObj>>ID>>fname>>lname>>age>>qua>>spe>>exp>>ci)
	{	count++;
	}
	cout<<"\n\n\tThe no. of doctors in the hospital="<<count<<endl<<endl;
	
	cout<<"\n\nEnter 1 to return to Doctor Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1)
	{
	  system("cls");
	  getDoctorDatabase();
	} 
	else
	  exit(0);
} 


//the patient class
class patient{
	public:
	string fname,lname,occupation,p_city,dis,addDate,relDate;
	int p_age,p_ID;
	long double phnumber,bill;
	string getDept();
	friend void getDoctor();
	friend void addPat();
	friend void editPat(patient &pat);
	friend void displayPat();
	friend void deletePat();
	friend void dispPatDatabase();
	friend void numberofPats();
   	friend void getPatientDatabase();
					
};
string patient::getDept(){
	string sp;
	cout<<"1.GENERAL_MEDICINE"<<endl;
	cout<<"2.NEUROLOGY"<<endl;
	cout<<"3.ONCOLOGY"<<endl;
	cout<<"4.HAEMATOLOGY"<<endl;
	cout<<"5.GASTROENTEROLOGY"<<endl;
	cout<<"6.GYNAECOLOGY "<<endl<<endl;
	int s;
	cin>>s;
	switch(s){
		
		case 1:{
			sp= "GENERAL_MEDICINE";
			break;
		}
		case 2:{
			sp="NEUROLOGY";
			break;
		}
		case 3:{
		    sp="ONCOLOGY";
			break;
		}
		case 4:{
			sp= "HAEMATOLOGY";
			break;
		}
		case 5:{
			sp= "GASTROENTEROLOGY";
			break;
		}
		case 6:{
			sp= "GYNAECOLOGY ";
			break;
		}
		default:{
			cout<<"\nCome on!Enter a valid option."<<endl;
			
		}
	
	}
		return sp;
}

void getDoctor(){
	patient p;
	string dept;
	cout<<"\nEnter the kind of specialization you are looking for:"<<endl<<endl;
	dept=p.getDept();
	fstream fileObj("doctor.txt");
	fileObj.seekg(0);
	cout<<"The doctors available with  "<<dept<<" specialization are:"<<endl<<endl;
	int age,exp,count=0;
	string ID,fname,lname,ci,qua,spe;
	while(fileObj>>ID>>fname>>lname>>age>>qua>>spe>>exp>>ci)
	{
		if(spe==dept){
		cout<<"\n\n1.ID:"<<ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age:"<<age<<endl<<"5.Qualification:"<<qua<<endl<<"6.Specialization:"<<spe<<endl<<"7.Experience:"<<exp<<endl<<"8.City:"<<ci<<endl<<endl;
		count++;
		}
	}
	
	fileObj.close();
	if(count==0){
		cout<<"\nNo doctors with this specialization found!"<<endl;
		exit(0);
	}
	else
		cout<<"No of doctors with "<<dept<<" specialization:"<<count<<endl;
		
	cout<<"\n\n\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();	 //backtoPatientMenu
	}
	  
	else
	  exit(0); 
}

double predictSugarDisease(bool fatherHasDiabetes, bool grandfatherHasDiabetes) {
    if (fatherHasDiabetes || grandfatherHasDiabetes) {
        // If either father or grandfather has diabetes, there's a higher chance of inheriting it
        return 0.8; // 80% probability (adjust as needed)
    } else {
        // If neither father nor grandfather has diabetes, lower chance of inheriting it
        return 0.2; // 20% probability (adjust as needed)
    }
}


//the addPat function
void addPat(){
	patient p;										//ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,spec
	    cout<<"Fill up the following details"<<endl;
	    cout<<"ID:"<<endl;
	    cin>>p.p_ID;
   		cout<<"First Name:"<<endl;
   		cin>>p.fname;
   		cout<<"Last Name:"<<endl;
   		cin>>p.lname;
   		cout<<"Age:"<<endl;
   		cin>>p.p_age;
		cout<<"Phone No.:"<<endl;
   		cin>>p.phnumber;
   		cout<<"Occupation:"<<endl;
		cin>>p.occupation;
		cout<<"City:"<<endl;
		cin>>p.p_city;
   		cout<<"Disease/Symptoms:"<<endl;
   		cin>>p.dis;
   		cout<<"Admission date  (DD/MM/YYYY):"<<endl;
   		cin>>p.addDate;
   		cout<<"Release date  (DD/MM/YYYY):"<<endl;
   		cin>>p.relDate;	
   		cout<<"Total Bill generated:"<<endl;
   		cin>>p.bill;
		cout<<"Kind of Specialization required:"<<endl;
		string dept=p.getDept();
		system("cls");
		
		
		fstream patObj;   
		patObj.open("patient.txt",ios::app );
      //ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,dept

        patObj.seekp (0, ios::end);
		patObj<<p.p_ID<<endl<<p.fname<<endl<<p.lname<<endl<<p.p_age<<endl<<p.phnumber<<endl<<p.occupation<<endl<<p.p_city<<endl<<p.dis<<endl<<p.addDate<<endl<<p.relDate<<endl<<p.bill<<endl<<dept<<endl;
		patObj.close();
	
	cout<<"\n\t\tNew Patient profile created successfully!"<<endl<<endl<<endl;
	cout<<"\n\n\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();	 //backtoPatientMenu
	}
	  
	else
	  exit(0); 
}

void editPat(patient &pat){
	int x;
	cout<<"\nEnter the ID of the Patient whose profile you want to Edit:"<<endl;
	cin>>x;									 
	fstream patObj("patient.txt");
	patObj.seekg(0);
													//ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,dept
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(patObj>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{
		if(p_ID==x){
		cout<<"1.ID:"<<p_ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age"<<p_age<<endl<<"5.Phone No.:"<<phnumber<<endl<<"6.Occupation:"<<occupation<<endl<<"7.City:"<<p_city<<endl<<"8.Disease/Symptoms:"<<dis<<endl<<"9.Admission date(DD/MM/YYYY):"<<addDate<<endl<<"10.Release date(DD/MM/YYYY):"<<relDate<<endl<<"11.Total Bill generated:"<<bill<<endl<<"12.Kind of Specialization required:"<<dept<<endl;
		count++;
		break;
		}
	}
	
	patObj.close();
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	
							//datatransfer begins
	fstream file("patient.txt");
	file.seekg (0, ios::beg);
	file.seekg(0);
	int line;
    ofstream tempObj;
	tempObj.open("copy2.txt");
    tempObj.seekp(0);
  	int skip = 0;
  	string fname1,lname1,occupation1,p_city1,dis1,addDate1,relDate1,dept1;
	int p_age1;
	long double phnumber1,bill1;
	file.seekg(0);file.seekg(0,ios::cur); //setting the pointer to beginning of file
		

	while(file>>line>>fname1>>lname1>>p_age1>>phnumber1>>occupation1>>p_city1>>dis1>>addDate1>>relDate1>>bill1>>dept1)
	{
		if(line!=x){
			tempObj<<line<<endl<<fname1<<endl<<lname1<<endl<<p_age1<<endl<<phnumber1<<endl<<occupation1<<endl<<p_city1<<endl<<dis1<<endl<<addDate1<<endl<<relDate1<<endl<<bill1<<endl<<dept1<<endl;
		}			
	}

  file.close();
  tempObj.close();
  remove("patient.txt");
  int result;
  char oldname[] ="copy2.txt";
  char newname[] ="patient.txt";
  result= rename( oldname , newname );
								//datatransfer ends
	int edit;
	cout<<"\nEnter number corresponding to the Field you want to Edit:"<<endl<<endl;
	cin>>edit;										//ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,spec
	switch(edit)						
	{
		case 1:{
			cout<<"ID"<<endl;
			cin>>p_ID;
			break;
		}
		case 2:{
			cout<<"First Name:"<<endl;
			cin>>fname;
			
			break;
		}
		case 3:{
			cout<<"Last Name:"<<endl;
			cin>>lname;
			
			break;
		}
		case 4:{cout<<"Age:"<<endl;
			cin>>p_age;
			break;
		}
		case 5:{
			cout<<"Phone No.:"<<endl;
   			cin>>phnumber;
			break;
		}
		case 6:{
			cout<<"Occupation:"<<endl;
			cin>>occupation;
			break;
		}
		case 7:{
			cout<<"City:"<<endl;
			cin>>p_city;
			break;
		}
		
		case 8:{
			cout<<"Disease/Symptoms:"<<endl;
			cin>>dis;
			break;
		}
		case 9:{
			cout<<"Admission date  (DD/MM/YYYY):"<<endl;
			cin>>addDate;
			break;
		}
		case 10:
		{
		cout<<"Release date  (DD/MM/YYYY):"<<endl;
		cin>>relDate;
		}
		case 11:{
			cout<<"Total Bill generated:"<<endl;
			cin>>bill;
			break;
		}
		case 12:{
			cout<<"Kind of Specialization required:"<<endl;
			dept=pat.getDept();
			break;
		}
		default:{
			cout<<"\nCome on!Enter a valid option."<<endl;
			break;
		}
	}

	system("cls");
	cout<<right<<setw(50)<<setfill(' ')<<"--Updated Profile--"<<endl<<endl;
	cout<<"1.ID:"<<p_ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age"<<p_age<<endl<<"5.Phone No.:"<<phnumber<<endl<<"6.Occupation:"<<occupation<<endl<<"7.City:"<<p_city<<endl<<"8.Disease/Symptoms:"<<dis<<endl<<"9.Admission date(DD/MM/YYYY):"<<addDate<<endl<<"10.Release date(DD/MM/YYYY):"<<relDate<<endl<<"11.Total Bill generated:"<<bill<<endl<<"12.Kind of Specialization required:"<<dept<<endl;
	
	//updated datatransfer
	fstream newObj;	
	newObj.open("patient.txt", ios::app);
	 newObj.seekp (0, ios::end);
	 newObj<<p_ID<<endl<<fname<<endl<<lname<<endl<<p_age<<endl<<phnumber<<endl<<occupation<<endl<<p_city<<endl<<dis<<endl<<addDate<<endl<<relDate<<endl<<bill<<endl<<dept<<endl;
	 newObj.close();
	 
	 //after completion
	cout<<"\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();
	}
	  
	else
	  exit(0);

}


//the displayPat function
void displayPat(){
	int x;
	cout<<"\nEnter the ID of the Patient whose profile you want to Display:"<<endl;
	cin>>x;									 
	fstream patObj("patient.txt");
	patObj.seekg(0);
													//ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,dept
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(patObj>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{
		if(p_ID==x){
		cout<<"1.ID:"<<p_ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age"<<p_age<<endl<<"5.Phone No.:"<<phnumber<<endl<<"6.Occupation:"<<occupation<<endl<<"7.City:"<<p_city<<endl<<"8.Disease/Symptoms:"<<dis<<endl<<"9.Admission date(DD/MM/YYYY):"<<addDate<<endl<<"10.Release date(DD/MM/YYYY):"<<relDate<<endl<<"11.Total Bill generated:"<<bill<<endl<<"12.Kind of Specialization required:"<<dept<<endl;
		count++;
		break;
		}
	}
	
	patObj.close();
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	
cout<<"\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();
	}
	  
	else
	  exit(0);	
}
	
		
//the deletePat function
void deletePat()
{
int x;
	cout<<"\nEnter the ID of the Patient whose profile you want to Delete:"<<endl;
	cin>>x;									 
	fstream patObj("patient.txt");
	patObj.seekg(0);
													//ID,firstname,lastname,age,phnumber,occupation,city,disease,Adate,Rdate,bill,dept
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(patObj>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{
		if(p_ID==x){
		cout<<"1.ID:"<<p_ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age"<<p_age<<endl<<"5.Phone No.:"<<phnumber<<endl<<"6.Occupation:"<<occupation<<endl<<"7.City:"<<p_city<<endl<<"8.Disease/Symptoms:"<<dis<<endl<<"9.Admission date(DD/MM/YYYY):"<<addDate<<endl<<"10.Release date(DD/MM/YYYY):"<<relDate<<endl<<"11.Total Bill generated:"<<bill<<endl<<"12.Kind of Specialization required:"<<dept<<endl;
		count++;
		break;
		}
	}
	
	patObj.close();
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	cout<<"Are you sure you want to delete this profile?\n1.YES\n2.NO"<<endl;
	int n;cin>>n;
	if(n==1)
	{
	fstream file("patient.txt");
	file.seekg (0, ios::beg);
	file.seekg(0);
	int line;
    ofstream tempObj;
	tempObj.open("copy2.txt");
    tempObj.seekp(0);
  	int skip = 0;
  	string fname1,lname1,occupation1,p_city1,dis1,addDate1,relDate1,dept1;
	int p_age1;
	long double phnumber1,bill1;
	file.seekg(0);file.seekg(0,ios::cur); //setting the pointer to beginning of file
		
//	 if (tempObj.is_open())
// 		 cout << "File successfully open";
//	else
//    	cout << "Error opening file";
	while(file>>line>>fname1>>lname1>>p_age1>>phnumber1>>occupation1>>p_city1>>dis1>>addDate1>>relDate1>>bill1>>dept1)
	{
		if(line!=x){
			tempObj<<line<<endl<<fname1<<endl<<lname1<<endl<<p_age1<<endl<<phnumber1<<endl<<occupation1<<endl<<p_city1<<endl<<dis1<<endl<<addDate1<<endl<<relDate1<<endl<<bill1<<endl<<dept1<<endl;
		}			
	}

  file.close();
  tempObj.close();
  remove("patient.txt");
  int result;
  char oldname[] ="copy2.txt";
  char newname[] ="patient.txt";
  result= rename( oldname , newname );
  system("cls");
  cout<<"\n\t\tFile successfully deleted"<<endl;
}

cout<<"\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();
	}
	  
	else
	  exit(0);
}

//the dispPatDatabase function
void dispPatDatabase(){
	fstream Obj("patient.txt");
	Obj.seekg(0);
	cout<<right<<setw(70)<<setfill(' ')<<"PATIENT DATABASE"<<endl<<endl;
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(Obj>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{   count++;
		cout<<right<<setw(50)<<setfill(' ')<<"Patient Profile:"<<count<<endl;
		cout<<"1.ID:"<<p_ID<<endl<<"2.First Name:"<<fname<<endl<<"3.Last Name:"<<lname<<endl<<"4.Age"<<p_age<<endl<<"5.Phone No.:"<<phnumber<<endl<<"6.Occupation:"<<occupation<<endl<<"7.City:"<<p_city<<endl<<"8.Disease/Symptoms:"<<dis<<endl<<"9.Admission date(DD/MM/YYYY):"<<addDate<<endl<<"10.Release date(DD/MM/YYYY):"<<relDate<<endl<<"11.Total Bill generated:"<<bill<<endl<<"12.Kind of Specialization required:"<<dept<<endl<<endl;
		
		}
		
	Obj.close();
	
	if(count==0){
		cout<<"\nNo matching records found!"<<endl;
		exit(0);
	}
	
cout<<"\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();
	}
	  
	else
	  exit(0);	
	
}

//the numberofPats function
void numberofPats(){
	fstream Obj("patient.txt");
	Obj.seekg(0);
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(Obj>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{  
	 count++;		
	}
		
	Obj.close();
	cout<<"\n\n\tThe number of patients in the hospital="<<count<<endl;
	
cout<<"\n\nEnter 1 to return to Patient Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getPatientDatabase();
	}
	  
	else
	  exit(0);	
	
}


 
class bed{
	public:
	int total=1000;
	friend void getStatus();
};

//the getStatus function
 void getStatus()
 {	bed b;
  cout<<"\n\tTotal Number of Beds in the hospital:"<<b.total<<endl;
  fstream file("patient.txt");
  	file.seekg(0);
	string fname,lname,occupation,p_city,dis,addDate,relDate,dept;
	int p_age,p_ID,count=0;
	long double phnumber,bill;
	while(file>>p_ID>>fname>>lname>>p_age>>phnumber>>occupation>>p_city>>dis>>addDate>>relDate>>bill>>dept)
	{  
	 count++;		
	}
		
	file.close();
	cout<<"\n\tThe number of Occupied Beds="<<count<<endl;
	cout<<"\n\tThe number of Empty Beds="<<b.total-count<<endl;
	
	cout<<"\n\nEnter 1 to return to Bed Database\nEnter 2 to Exit."<<endl;
	int c;
	cin>>c;
	if(c==1){
	  system("cls");
	  getBedDatabase();
	}
	  
	else
	  exit(0);	
	
 }
 
  
 
//-----------------MAIN FXN STARTS-------------------//


int main(){
    cout<<"";
    const string filename = "HospitalsInIndia.csv";
    vector<Hospital> hospitals = readHospitalData(filename);

    string city, localAddress;
    cout << "Enter the city: ";
    getline(cin, city);
    cout << "Enter the local address: ";
    getline(cin, localAddress);

    string hospitalName = findHospital(hospitals, city, localAddress);
    cout << "Hospital Name: " << hospitalName << endl;

    string name;
    string date;
    string time;

    cout << "Enter the date of appointment: ";
    cin >> date;

    cout << "Enter the time of appointment: ";
    cin >> time;

    cout << "Enter the preferred doctor name: ";
    cin >> name;


    ofstream appointmentFile("appointment.txt", ios::app); // Open the file in append mode
    if (appointmentFile.is_open()) {
        appointmentFile << "Date: " << date << ", Time: " << time << ", Name: " << name << "\n";
        appointmentFile.close();
        cout << "Appointment information saved to 'appointment.txt'." << endl;
    } else {
        cout << "Failed to open the file for saving appointment information." << endl;
    }





	password A;
	A.getPassword();
	
	
    system("cls");
		
	cout<<endl;
	cout<<endl<<endl;
	cout<<right<<setw(60)<<setfill(' ')<<"------------------------------------------------"<<endl;
	
	cout<<right<<setw(40)<<setfill(' ')<<"1. Main Menu for the MANAGEMENT"<<endl;
    cout<<right<<setw(40)<<setfill(' ')<<"2. Predict the disease"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"3. General Reports upload"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"4. Inherited Disease"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"5. Get your Meds"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"6. Medical Test"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"7. Awareness / Taboo topics"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"8. Psych Quiz"<<endl;
	cout<<right<<setw(40)<<setfill(' ')<<"9. Feedback"<<endl;
    cout<<right<<setw(35)<<setfill(' ')<<"10.Exit"<<endl;
	cout<<right<<setw(60)<<setfill(' ')<<"------------------------------------------------"<<endl<<endl;
	cout<<"Enter your choice:"<<endl<<endl;
	
	while (true)
{
		
	
	
	int choice1;
	cin>>choice1;
	
	if (choice1==1){
		 system("cls");
		 int var=chooseMain();
		 system("cls");

		 	switch(var){
			case 1:{
				A.passwordProtect();
				system("cls");
				getDoctorDatabase();
				break;
			}
			
			case 2:{
			    A.passwordProtect();
				system("cls");
				getPatientDatabase();
				break;
				
			}
				
			case 3:{
			    A.passwordProtect();
				system("cls");
				getBedDatabase();
				break;
			}
					 
			case 4:
				{
				return 0;
				break;
				}
			default:
				cout<<"\nCome on!Enter a valid option."<<endl;
		}
		
	}

    if(choice1==2){
        cout<<"Predict Your Disease bY filling the basic information"<<endl;
		vector<Disease> diseases = initializeDiseases();

    double temperature;
    int bloodPressure;
    int heartRate;
    int sugarLevel;

    cout << "Enter your body temperature: ";
    cin >> temperature;

    cout << "Enter your blood pressure: ";
    cin >> bloodPressure;

    cout << "Enter your heart rate: ";
    cin >> heartRate;

    cout << "Enter your sugar level: ";
    cin >> sugarLevel;

    string predictedDisease = predictDisease(diseases, temperature, bloodPressure, heartRate, sugarLevel);

    if (predictedDisease != "Unknown") {
        cout << "Predicted Disease: " << predictedDisease << endl;

        // Find the disease in the diseases vector
        auto it = find_if(diseases.begin(), diseases.end(), [&](const Disease& disease) {
            return disease.name == predictedDisease;
        });

        if (it != diseases.end()) {
            displayMedicines(it->medicines);
            displayPrecautions(it->precautions);
        }
    } else {
        cout << "Unknown disease. Please consult a doctor." << endl;
    }

    return 0;

	if(choice1==4){

		 PedigreeAnalysis analysis;
    	analysis.performAnalysis();
	}
		
        
    }
    if(choice1==3){
        cout<<"General Reports upload"<<endl;
		vector<Patient> patientDatabase;

    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Save Patient Report" << endl;
        cout << "2. Display Patient Reports" << endl;
        cout << "3. Exit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                savePatientReport(patientDatabase);
                break;
            case 2:
                displayPatientReports(patientDatabase);
                break;
            case 3:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;

        
    }
     if(choice1==4){
        cout<<"Inherited Disease"<<endl;
		cout << "Welcome to the Sugar Disease Inheritance Prediction Program!" << endl;

    // Get user input
    char fatherResponse, grandfatherResponse;
    cout << "Does your father have sugar disease? (y/n): ";
    cin >> fatherResponse;
    cout << "Does your grandfather have sugar disease? (y/n): ";
    cin >> grandfatherResponse;

    // Convert user input to boolean
    bool fatherHasDiabetes = (fatherResponse == 'y' || fatherResponse == 'Y');
    bool grandfatherHasDiabetes = (grandfatherResponse == 'y' || grandfatherResponse == 'Y');

    // Predict sugar disease inheritance
    double inheritanceProbability = predictSugarDisease(fatherHasDiabetes, grandfatherHasDiabetes);

    // Display prediction
    cout << "The predicted chances of inheriting sugar disease are: " << (inheritanceProbability * 100) << "%" << endl;

    return 0;

        
    }

	if(choice1==7){
		string gender;

    cout << "Welcome to the Healthcare Taboo Topics Program!" << endl;
    cout << "Please enter your gender (male/female): ";
    cin >> gender;

    suggestTabooTopics(gender);

    // Handle additional questions related to specific topics
    if (gender == "male")
    {
        handleMasturbationQuestions();
        handleErectileDysfunctionQuestions();
        handleProstateHealthQuestions();
        handleTesticularHealthQuestions();
    }
    else if (gender == "female")
    {
    handleMenstruationQuestions();
    handlePregnancyQuestions();
    handleContraceptionQuestions();
    handleBreastHealthQuestions();
    }

	}


	if(choice1==8){
		cout<<"Welcome to mental Health Questionare"<<endl;
		int totalScore = 0;
    int answer;

    // Question 1
    cout << "1. Do you often feel overwhelming sadness or emptiness? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 2
    cout << "2. Have you experienced a loss or trauma that continues to affect you? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 3
    cout << "3. Are you finding it difficult to enjoy activities you once liked? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 4
    cout << "4. Do you frequently feel anxious or worried without a specific cause? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 5
    cout << "5. Have you noticed changes in your sleep patterns, such as insomnia or oversleeping? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 6
    cout << "6. Do you struggle with maintaining focus or making decisions? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 7
    cout << "7. Have you had thoughts of self-harm or suicide? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 8
    cout << "8. Isolating yourself from friends and family more than usual? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 9
    cout << "9. Do you experience extreme mood swings that affect your daily life? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Question 10
    cout << "10. Are you having trouble coping with stress and everyday challenges? (1 for Yes, 0 for No): ";
    cin >> answer;
    totalScore += answer;

    // Analyzing the results
    cout << "\nAnalyzing your responses...\n";

    if (totalScore >= 5) {
        cout << "Based on your responses, it is recommended to consult with a mental health professional. Contact No:- 999999999 \n";
    } 
	else {
        cout << "Based on your responses, it seems you may not need to see a mental health professional. However, if you have concerns, it's always a good idea to consult with a professional Contact No:- 999999999.\n";
    }

    // Quote related to mental health
    cout << "\nRemember: 'Your mental health is a priority. Your happiness is essential. Your self-care is a necessity.'\n";

	}
	if(choice1==6){
		string medical_test;

    cout << "Enter the name of the medical test you want to conduct: ";
    cin >> medical_test;

    cout << "Searching for medical test details on Lal Path Labs...\n";
    perform_lalpathlabs_search(medical_test);

    cout << "Suggesting the book for the user...\n";
    suggest_book(medical_test);



		cout<<endl;
	}

	if(choice1==5){
		cout<<endl;
		string medicine_name;

    cout << "Enter the name of the medicine you are looking for: ";
    cin >> medicine_name;

    cout << "Searching for medicine details on Google...\n";
    perform_google_search(medicine_name);

    cout << "Searching for medicine on Netmeds...\n";
    perform_netmeds_search(medicine_name);

		cout<<endl;
	}




	if(choice1==9){
		cout<<"Feed your Feedback"<<endl;
		int choice;
    do {
        cout << "Patient Review and Feedback System" << endl;
        cout << "1. Leave Feedback" << endl;
        cout << "2. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                leaveFeedback();
                break;
            case 2:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 2);


		cout<<endl;
	}




	
	else
	 cout<<"\nCome on!Enter a valid option."<<endl;
	

	
}
}
//the chooseMain function
int chooseMain(){
	// while (true)
	// {
		
	
	
	
	int choice2;
	cout<<right<<setw(40)<<setfill(' ')<<"\nMAIN MENU"<<endl<<endl<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;
	cout<<"			"<<"1.Enter Into Doctors' Database"<<endl;
	cout<<"			"<<"2.Enter Into Patients' Database"<<endl;
	cout<<"			"<<"3.Check for Hospital Bed Availability"<<endl;
	cout<<"			"<<"4.Exit"<<endl<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;
	
	cout<<"\nEnter the number corresponding to your choice:"<<endl;
	cin>>choice2;
	return choice2;
	
}
// }

//the getDoctorDatabase function
void getDoctorDatabase(){
	int choice_doc;
	cout<<"\n                         " <<"WELCOME TO DOCTOR'S DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Add New Doctor's Information"<<endl;
	cout<<"			"<<"2.Edit a Doctor's Information"<<endl;
	cout<<"			"<<"3.Display a Doctor's Information"<<endl;
	cout<<"			"<<"4.Delete a Doctor's Information"<<endl;
	cout<<"			"<<"5.Display Entire Doctor Database"<<endl;
	cout<<"			"<<"6.Total Number of Doctors"<<endl;
	cout<<"			"<<"7.Exit"<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;
	
	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_doc;
	system("cls");
	switch(choice_doc){
		case 1:{
//addDoc()
		    addDoc();
			break;
		}
		case 2:{
//editDoc()  
			doctor k;
			editDoc(k);
			break;
		}
		case 3:{
//displayDoc()
			displayDoc();
			break;
		}
		case 4:{
//deleteDoc()
			deleteDoc();
			break;
		}
		case 5:{
//dispDatabase()
			dispDatabase();
			break;
		}
		case 6:{
//numberOfDocs()
			numberofDocs();
			break;
		}

		case 7:{
//exit	
			exit(0);
			break;
		}
			
	}
}



//the getPatientDatabase function
void	getPatientDatabase(){
	int choice_pat;
	cout<<"\n                         "<<"WELCOME TO PATIENT'S DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Add New Patient's Information"<<endl;
	cout<<"			"<<"2.Edit a Patient's Information"<<endl;
	cout<<"			"<<"3.Display a Patient's Information"<<endl;
	cout<<"			"<<"4.Delete a Patient's Information"<<endl;
	cout<<"			"<<"5.Display Entire Patient Database"<<endl;
	cout<<"			"<<"6.Total Number of Patients"<<endl;
	cout<<"			"<<"7.Check for doctor availability"<<endl;
	cout<<"			"<<"8.Exit"<<endl;
	cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;
	
	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_pat;
	system("cls");
	switch(choice_pat){
		case 1:{
//addPat()
		    addPat();
			break;
		}
		case 2:{
//editPat()  
			patient p;
			editPat(p);
			break;
		}
		case 3:{
//displayPat()
			displayPat();
			break;
		}
		case 4:{
//deletePat()
			deletePat();
			break;
		}
		case 5:{
//dispPatDatabase()
			dispPatDatabase();
			break;
		}
		case 6:{
//numberOfPats()
			numberofPats();
			break;
		}
		case 7:{
//getDoctor	  
			getDoctor();
			break;
		}
		

		case 8:{
//exit	
			exit(0);
			break;
		}
			
	}
}

//the getBedDatabase function
void getBedDatabase(){
int choice_bed;
	cout<<"\n                         "<<"WELCOME TO BED DATABASE"<<endl<<endl;
	cout<<"			"<<"1.Check Bed Status"<<endl;	
	cout<<"			"<<"2.Exit"<<endl<<endl;	
		cout<<right<<setw(80)<<setfill('-')<<"----------"<<endl;
	
	cout<<right<<setw(60)<<setfill(' ')<<"\nEnter the number corresponding to your choice:"<<endl<<endl;
	cin>>choice_bed;
	system("cls");
	switch(choice_bed)
	{
		case 1:{
//getStatus()
		    getStatus();
			break;
		}
		case 2:{
//exit	
			exit(0);
			break;
		}
	}
}