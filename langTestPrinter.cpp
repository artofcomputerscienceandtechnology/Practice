/*
Project: 
File:
Summary:

Notes:
	Print vocab lists to file
	functions: printFullList, printEng, printJP(int startIndex, int  endIndex)
*/
#include <iostream>
#include <vector> 
#include <fstream>
#include <algorithm>
using namespace std; 

/*
Blank vocab array sets of 10
	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}, 
   	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}, 
	  {"", ""}    //
*/

vector<vector<string>> sarr {
	  { "One", "ichi "}, 
	  { "Two", "ni "}, 
	  { "Three", "san "}, 
	  { "Four", "shi "}, 
	  { "Five", "go "}, 
	  { "Six", "roku "}, 
	  { "Seven", "sen "}, 
	  { "Eight", "hachi "}, 
	  { "Nine", "x "}, 
	  { "Ten", "jyuu "},
	  {"sun", "taiyou"}, 
	  {"year", "toshi"}, 
	  {"thunder", "kaminari"}, 
	  {"egg", "tomago"}, 
	  {"tiger", "tora"}, 
   	  {"to smell", "niou"}, 
	  {"money", "okane"}, 
	  {"PM, afternoon", "gogo"}, 
	  {"husband", "otto"}, 
	  {"to add", "tasu"},
	  {"star", "hoshi"}, 
	  {"school bag", "kaban"}, 
	  {"to fly", "tobu"}, 
	  {"morning", "asa"}, 
	  {"high, expensive", "takai"}, 
   	  {"sad", "kanashii"}, 
	  {"heart", "shinzou"}, 
	  {"spring", "haru"}, 
	  {"village", "mura"}, 
	  {"street", "toori"},
	  {"physics", "butsuri"}, 
	  {"valley", "tani"}, 
	  {"broom", "houki"}, 
	  {"older brother", "ani"}, 
	  {"sun, day", "nichi, hi"}, 
   	  {"watermellon", "suika"}, 
	  {"train", "densha"}, 
	  {"to give", "ageru"}, 
	  {"map", "chizu"}, 
	  {"chair", "isu"},
	  {"cheap", "yashui"}, 
	  {"world", "sekai"}, 
	  {"autmun", "aki"}, 
	  {"silence", "chinmoku"}, 
	  {"you (plural)", "anatatachi"}, 
   	  {"earthquake", "jishin"}, 
	  {"to attack", "osou"}, 
	  {"river", "kawa"}, 
	  {"fish", "sakana"}, 
	  {"flower", "hana"},
	  {"paper", "kami"}, 
	  {"hair", "kami"}, 
	  {"cloud", "kumo"}, 
	  {"to sleep", "neru"}, 
	  {"mushroom", "kinoko"}, 
   	  {"shit, damn", "kuso"}, 
	  {"moon, month", "getzu, tsuki"}, 
	  {"triangle", "sankaku"}, 
	  {"tree", "ki"}, 
	  {"pillow", "makura"},
	  {"tasty, delicious", "oishi"}, 
	  {"hand", "te"}, 
	  {"house", "ie"}, 
	  {"body", "karada"}, 
	  {"ant", "ari"}, 
   	  {"college", "daigaku"}, 
	  {"breath", "iki"}, 
	  {"air", "kuuki"}, 
	  {"phone", "denwa"}, 
	  {"face", "kao"},
	  {"you (singular)", "anata"}, 
	  {"dog", "inu"}, 
	  {"train station", "eki"}, 
	  {"to bake, to grill", "yaku"}, 
	  {"crane", "tsuru"}, 
   	  {"strong", "tsuyoi"}, 
	  {"mouth", "kuchi"}, 
	  {"ear", "mimi"}, 
	  {"foot, leg", "ashi"}, 
	  {"ocean waves", "harou"},
	  {"to speak", "hanasu"}, 
	  {"box", "hako"}, 
	  {"song", "uta"}, 
	  {"loan", "kashikin"}, 
	  {"to be blinded, to get dizzy", "kuramu"}, 
   	  {"to arrive", "tsuku"}, 
	  {"to know", "shiru"}, 
	  {"glass", "gurasu"}, 
	  {"wide", "hiroi"}, 
	  {"to see", "miru"},
	  {"we", "watashitachi"}, 
	  {"desk", "tsukue"}, 
	  {"hometown", "shusshin"}, 
	  {"family", "kazoku"}, 
	  {"pond", "ike"}, 
   	  {"home, house", "uchi, le"}, 
	  {"rain", "ame"}, 
	  {"week", "shuu"}, 
	  {"where", "doko"}, 
	  {"window", "mado"},
	  {"here", "koko"}, 
	  {"clothes", "fuku"}, 
	  {"next", "tsugi"}, 
	  {"big", "ookii"}, 
	  {"subway", "chikatetsu"}, 
   	  {"which (3+)", "dore"}, 
	  {"boring, dull", "tsumaranai"}, 
	  {"weapon", "buki"}, 
	  {"death", "shi"},	 
	  {"to want", "hoshii"}
	} ;
	
void testVocab()
{
	/*
	for each word:
		display eng/jp word
		get input for opposite vocab word
		if correct, clear words, inc score counter, show next word
		continue until incorrect
	*/	
	for (int i = 0; i < sarr.size(); i++) {
   		cout << "\n" << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++){		
            if (j == 1)		
            	cout << sarr[i][0] << " ";
				//get input/answer
				//compare answer to correct word
					
    	}
    	//clear console, print score, display next word
    	cout << "    \n";
    }	
}	

ofstream myfile;
void printAllVocab()
{
    myfile.open ("vocabTestAll.txt");
    for (int i = 0; i < sarr.size(); i++) {
   		myfile << "\n" << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++){		
            myfile << sarr[i][j] << " ";
            if (j == 0)
            	myfile << "  -  ";
    	}
    }
    myfile.close();
}

void printEngVocab()
{
    myfile.open ("vocabTestJP.txt");
    for (int i = 0; i < sarr.size(); i++) {
   		myfile << "\n" << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++){		
            if (j == 1)		
            	myfile << sarr[i][0] << " ";
        	else
        		myfile << " __________    ";	
    	}
    	myfile << "    \n";
    }
    myfile.close();
}

void printJPVocab()
{
    myfile.open ("vocabTestEng.txt");
    for (int i = 0; i < sarr.size(); i++) {
   		myfile << "\n" << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++){		
            if (j == 1)		
            	myfile << sarr[i][1] << " ";
        	else
        		myfile << " __________    ";
    	}
    	myfile << "    \n";
    }
    myfile.close();
}

int main()
{	
	int  i, j;
	ofstream myfile;
    myfile.open ("vocabTestJP.txt");
    for (int i = 0; i < 40; i++)
        myfile << i << ". " << sarr[i][0] << "\t " << sarr[i][1] << "\n";
    myfile.close();
	
    sort(sarr.begin(), sarr.end());
  
    cout << "Sorted: \n";
    for (int i = 0; i < sarr.size(); i++) {
   		cout << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++)
            cout << sarr[i][j] << " "; cout << endl;
    }
    
    //ofstream myfile;
    myfile.open ("vocabTestJP.txt");
    for (int i = 0; i < sarr.size(); i++) {
   		myfile << "\n" << i << ". ";
        for (int j = 0; j < sarr[i].size(); j++){		
            myfile << sarr[i][j] << " ";
            if (j == 0)
            	myfile << "    ";
    	}
    }
    myfile.close();
 	
	printAllVocab();	
	printEngVocab();
	printJPVocab();

	testVocab();
    return 0;
}
