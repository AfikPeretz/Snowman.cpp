#include <stdexcept>
#include <vector>
#include <iostream>
using namespace std;

namespace ariel{

const int one = 1;
const int two = 2;    
const int three = 3;
const int four = 4;
const int five = 5;
const int six = 6;
const int seven = 7;
const int eight = 8;


const vector<string> hat = {"_===_",
                            " ___ \n.....",
                            "   _ \n  /_\\",
                            " ___ \n(_*_)"};

const vector<string> noses = {",",
                              ".",
                              "_",
                              " "};

const vector<string> eyes = {".",
                             "o",
                             "O",
                             "-"};

const vector<string> LArms = {"<",
                              "\\",
                              "/",
                              ""};

const vector<string> RArms = {">",
                              "/",
                              "\\",
                              ""};

const vector<string> torsos = {":",
                               "] [",
                               "> <",
                               "   "};
const vector<string> body = {":",
                             "\" \"",
                             "___",""};

string createHead(char head){
        int index = (head-'0')-1;
        return hat[index]+'\n';
}

string makeNose(char nose){
        int noseIndex = (nose -'0')-1;
        return noses[noseIndex];
}

string makeFace(char nose, char l_Eye,char r_Eye){
        return "("+eyes[(l_Eye-'0')-1]+makeNose(nose)+eyes[(r_Eye-'0')-1]+")"+'\n';
}

string insertTorso(char t){
        int torso_i = (t-'0')-1;
        string tor = torsos[torso_i];
        string space = " ";
        if(tor == ":" || tor.empty()){
                 return "("+space+tor+space+")"+'\n';
        }
       
        return "("+tor+")"+'\n';

}
string insertBase(char num){
        int base_i = (num-'0')-1;
        string bb = body[base_i];
        string space = " ";
        if (bb == ":"){
                return "("+space+bb+space+")";
        }
        if(bb.empty()){
                return "("+space+bb+space+space+")";
        }
       
        return "("+bb+")";
       
}

string snowman(int num){
    string number = to_string(num);
    string error= "Invalid code ";

    //check that it positive number
        if (num < 0) {
            throw out_of_range("the number must be positive!");
        }
     //check the length of the input - should be eight numbers
    if(number.length() < eight || number.length() > eight){
      throw  invalid_argument(error + "'" + to_string(num) + "'");
    }

    //check that all the eight numbers between 1-4
    for (int i = 0 ; i< number.length() ; i++){
        int a = number[i]-'0';
        if(a <1 || a > 4){
          throw  invalid_argument(error + "'" + to_string(num) + "'");
        }
    }
    string head = createHead(number[0]);
    string eyesAndNose = makeFace(number[one],number[two],number[three]);
    string torso = insertTorso(number[six]);
    string base = insertBase(number[seven]);

    //check left up arm:
    if (number[four] == '2'){
      eyesAndNose = LArms[(number[four]-'0')-1] + eyesAndNose;
    }
    //check right up arm:
    if (number[five] == '2'){
      eyesAndNose.erase(eyesAndNose.size() - 1);
      eyesAndNose += RArms[(number[five]-'0')-1] + '\n';
    }
    //check torso down left arm:
    if (number[four] == '3' || number[four] == '1' || number[four] == '4'){
      torso = LArms[(number[four]-'0')-1] + torso;
    }
    //check torso down right arm:
    if (number[five] == '3' || number[five] == '1' || number[five] == '4'){
      torso.erase(torso.size() - 1);
      torso += RArms[(number[five]-'0')-1]+'\n';
    }
    return head+eyesAndNose+torso+base;
  }


}

