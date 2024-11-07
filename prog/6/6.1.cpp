#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

//list of English Words for Ex.5 (#1000 most commons).
const vector<string> englishDict = {"the","of","to","and","a","in","is","it","you","that","he","was","for","on","are","with","as","I","his","they","be","at","one","have","this","from","or","had","by","not","word","but","what","some","we","can","out","other","were","all","there","when","up","use","your","how","said","an","each","she","which","do","their","time","if","will","way","about","many","then","them","write","would","like","so","these","her","long","make","thing","see","him","two","has","look","more","day","could","go","come","did","number","sound","no","most","people","my","over","know","water","than","call","first","who","may","down","side","been","now","find","any","new","work","part","take","get","place","made","live","where","after","back","little","only","round","man","year","came","show","every","good","me","give","our","under","name","very","through","just","form","sentence","great","think","say","help","low","line","differ","turn","cause","much","mean","before","move","right","boy","old","too","same","tell","does","set","three","want","air","well","also","play","small","end","put","home","read","hand","port","large","spell","add","even","land","here","must","big","high","such","follow","act","why","ask","men","change","went","light","kind","off","need","house","picture","try","us","again","animal","point","mother","world","near","build","self","earth","father","head","stand","own","page","should","country","found","answer","school","grow","study","still","learn","plant","cover","food","sun","four","between","state","keep","eye","never","last","let","thought","city","tree","cross","farm","hard","start","might","story","saw","far","sea","draw","left","late","run","don't","while","press","close","night","real","life","few","north","open","seem","together","next","white","children","begin","got","walk","example","ease","paper","group","always","music","those","both","mark","often","letter","until","mile","river","car","feet","care","second","book","carry","took","science","eat","room","friend","began","idea","fish","mountain","stop","once","base","hear","horse","cut","sure","watch","color","face","wood","main","enough","plain","girl","usual","young","ready","above","ever","red","list","though","feel","talk","bird","soon","body","dog","family","direct","pose","leave","song","measure","door","product","black","short","numeral","class","wind","question","happen","complete","ship","area","half","rock","order","fire","south","problem","piece","told","knew","pass","since","top","whole","king","space","heard","best","hour","better","true","during","hundred","five","remember","step","early","hold","west","ground","interest","reach","fast","verb","sing","listen","six","table","travel","less","morning","ten","simple","several","vowel","toward","war","lay","against","pattern","slow","center","love","person","money","serve","appear","road","map","rain","rule","govern","pull","cold","notice","voice","unit","power","town","fine","certain","fly","fall","lead","cry","dark","machine","note","wait","plan","figure","star","box","noun","field","rest","correct","able","pound","done","beauty","drive","stood","contain","front","teach","week","final","gave","green","oh","quick","develop","ocean","warm","free","minute","strong","special","mind","behind","clear","tail","produce","fact","street","inch","multiply","nothing","course","stay","wheel","full","force","blue","object","decide","surface","deep","moon","island","foot","system","busy","test","record","boat","common","gold","possible","plane","stead","dry","wonder","laugh","thousand","ago","ran","check","game","shape","equate","hot","miss","brought","heat","snow","tire","bring","yes","distant","fill","east","paint","language","among","grand","ball","yet","wave","drop","heart","am","present","heavy","dance","engine","position","arm","wide","sail","material","size","vary","settle","speak","weight","general","ice","matter","circle","pair","include","divide","syllable","felt","perhaps","pick","sudden","count","square","reason","length","represent","art","subject","region","energy","hunt","probable","bed","brother","egg","ride","cell","believe","fraction","forest","sit","race","window","store","summer","train","sleep","prove","lone","leg","exercise","wall","catch","mount","wish","sky","board","joy","winter","sat","written","wild","instrument","kept","glass","grass","cow","job","edge","sign","visit","past","soft","fun","bright","gas","weather","month","million","bear","finish","happy","hope","flower","clothe","strange","gone","jump","baby","eight","village","meet","root","buy","raise","solve","metal","whether","push","seven","paragraph","third","shall","held","hair","describe","cook","floor","either","result","burn","hill","safe","cat","century","consider","type","law","bit","coast","copy","phrase","silent","tall","sand","soil","roll","temperature","finger","industry","value","fight","lie","beat","excite","natural","view","sense","ear","else","quite","broke","case","middle","kill","son","lake","moment","scale","loud","spring","observe","child","straight","consonant","nation","dictionary","milk","speed","method","organ","pay","age","section","dress","cloud","surprise","quiet","stone","tiny","climb","cool","design","poor","lot","experiment","bottom","key","iron","single","stick","flat","twenty","skin","smile","crease","hole","trade","melody","trip","office","receive","row","mouth","exact","symbol","die","least","trouble","shout","except","wrote","seed","tone","join","suggest","clean","break","lady","yard","rise","bad","blow","oil","blood","touch","grew","cent","mix","team","wire","cost","lost","brown","wear","garden","equal","sent","choose","fell","fit","flow","fair","bank","collect","save","control","decimal","gentle","woman","captain","practice","separate","difficult","doctor","please","protect","noon","whose","locate","ring","character","insect","caught","period","indicate","radio","spoke","atom","human","history","effect","electric","expect","crop","modern","element","hit","student","corner","party","supply","bone","rail","imagine","provide","agree","thus","capital","won't","chair","danger","fruit","rich","thick","soldier","process","operate","guess","necessary","sharp","wing","create","neighbor","wash","bat","rather","crowd","corn","compare","poem","string","bell","depend","meat","rub","tube","famous","dollar","stream","fear","sight","thin","triangle","planet","hurry","chief","colony","clock","mine","tie","enter","major","fresh","search","send","yellow","gun","allow","print","dead","spot","desert","suit","current","lift","rose","continue","block","chart","hat","sell","success","company","subtract","event","particular","deal","swim","term","opposite","wife","shoe","shoulder","spread","arrange","camp","invent","cotton","born","determine","quart","nine","truck","noise","level","chance","gather","shop","stretch","throw","shine","property","column","molecule","select","wrong","gray","repeat","require","broad","prepare","salt","nose","plural","anger","claim","continent","oxygen","sugar","death","pretty","skill","women","season","solution","magnet","silver","thank","branch","match","suffix","especially","fig","afraid","huge","sister","steel","discuss","forward","similar","guide","experience","score","apple","bought","led","pitch","coat","mass","card","band","rope","slip","win","dream","evening","condition","feed","tool","total","basic","smell","valley","nor","double","seat","arrive","master","track","parent","shore","division","sheet","substance","favor","connect","post","spend","chord","fat","glad","original","share","station","dad","bread","charge","proper","bar","offer","segment","slave","duck","instant","market","degree","populate","chick","dear","enemy","reply","drink","occur","support","speech","nature","range","steam","motion","path","liquid","log","meant","quotient","teeth","shell","neck"};




//|-------------------------------------------------------------------------|//
//|                                                                         |//
//|                               Functions                                 |//
//|                                                                         |//
//|-------------------------------------------------------------------------|//

string tinnyTurner(string word){ // Utilities //   Allows me to easily turn "WORD" & "wOrD" into "word".
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	return word;
}

bool exitCheck(string word, string exitWord){ // Utilities //   Allows me to says whether the user has inputed the exit word and tell the main function.
	word=tinnyTurner(word);
	if (word==exitWord){
		cout << "\n\nSuccessfully Exited.\n\n";
		return true;
	} else { return false;}
}

void displayIntList (vector<int> list) { // Utilities //   Allows me to display the content of a list.
	for(int i=0; i<list.size();i++) {
		if(i==list.size()-1) {
			cout << list[i];
			break;
		}
		cout << list[i] << ",";
	}
}

vector<int> randomFillList() { // Utilities //   Fills a list with random strings.
	vector<int> emptyList{};
	int listSize;
	cout << "How many numbers should this list hold?: ";
	cin >> listSize;
	for (int i=0; i<listSize;i++) {
		emptyList.push_back(rand()%100);
	};	
	return emptyList;
}

vector<int> fillNumberList() { // Ex.1 //   Fills a list based on the length specified by the user & the content they want in a given entry. 
	vector<int> emptyList{};
	int listSize;
	int replyInt;
	cout << "How many numbers should this list hold?: ";
	cin >> listSize;
	for (int i=0; i<listSize;i++) {
		cout << "What number would you like to add?: ";
		cin >> replyInt;
		emptyList.push_back(replyInt);
	};	
	return emptyList;
}

bool orderChecker(vector<int> list) { // Ex.1 //   Checks to see if a list of number follows each other by increments of 1 (i.e, "1,2,3"=GOOD, "1,2,4"=BAD ).
	for(int i=0; i<list.size();i++) {
		if(list[i]!=list[0] && list[i]!=list[i-1]+1) {
			return false;
		}
	}
	return true;
}

void bubbleSorter(vector<int> &list) { // Ex.1 //   Bubble Sorting Alg.
	int runningCount=0;
	bool runningState=true;
	int currentRun;
	while (runningState) {
		runningState=false;
		runningCount++;
		for(currentRun=0; currentRun<list.size()-runningCount;currentRun++) {
			if (list[currentRun]>list[currentRun+1]) {
				runningState=true;
				int temp = list[currentRun];
				list[currentRun]= list[currentRun+1];
				list[currentRun+1]=temp;
			}
		}
	}
}

void insertSorter(vector<int> &list) { // Ex.1  //   Insertion Sorting Alg.
	int i, j;
	int placeholderInt;
	for(i=1; i<list.size();++i) {
		placeholderInt = list[i];
		j=i-1;
		while (j >= 0 && list[j] > placeholderInt) {
			list[j+1]=list[j];
			j=j-1;
		}
		list[j+1]=placeholderInt;
	}
}

void rev_bubbleSorter(vector<int> &list) { // Ex.2 //   Reverse Bubble Sorting Alg.
	int i, j, temp;
	int n=list.size();
	for (i=n; i!=0;--i)
        {
            for (j=n; j>(n-i); j--)
            {
                if (list[j]>list[j-1])
                {
                    temp = list[j];
                    list[j] = list[j-1];
                    list[j-1] = temp;
                }
            }
        }
}

void rev_insertSorter(vector<int> &list) { // Ex.2  //   Reverse Insertion Sorting Alg.
	int i, j;
	int placeholderInt;
	for(i=1; i<list.size();++i) {
		placeholderInt = list[i];
		j=i-1;
		while (j >= 0 && list[j-1] < placeholderInt) {
			list[j+1]=list[j];
			j=j-1;
		}
		list[j+1]=placeholderInt;
	}
}

vector<int> reverseList(vector<int> list) { // Ex.3 //   Reverse a list's content from "A->B->C" to "C->B->A".
	list = vector<int>(list.rbegin(), list.rend());	
	return list;
}

vector<int> indexPopper(vector<int> list) { // Ex.4 //   Removes a given index from a list.
	int i;
	cout << "Which item would you like to remove from this list?: #";
	cin >> i;
	list.erase(list.begin()+(i-1));
	return list;
}

bool wordFinder(string word){ // Ex.5 //   Looks for a given word inside a dictionnary of common words.
	word=tinnyTurner(word);
	for(int i=0; i<englishDict.size(); i++) {
		if(word==englishDict[i]) {
			return true;
		}
	}
	return false;
}





//|-------------------------------------------------------------------------|//
//|                                                                         |//
//|  Place the below "exercises" into main to access each one individually. |//
//|                                                                         |//
//|    I usually make one solution for each, but couldn't since we don't    |//
//|    have admin privileges at school and Visual Studio isn't installed    |//
//|                                                                         |//
//|-------------------------------------------------------------------------|//

void exercise1(){ //Bubble Sorting + Follow/not.
	cout << "\n";
	vector<int> listNumber=fillNumberList();
	cout << "\n[Original List]: ";
	displayIntList(listNumber);
	cout << "\n[Sorted List]: ";
	bubbleSorter(listNumber);
	displayIntList(listNumber);

	if (!orderChecker(listNumber)) {
		cout << "\n<!> These numbers do not follow each others. <!>\n\n";
	} else {
		cout << "\n<§> These numbers follow each others. <§>\n\n";
	}
}

void exercise2(){ //Reverse Bubble & Insert Sorting.
	cout << "\n";
	const vector<int> listNumberOrigin=randomFillList();
	
	cout << "\n[Bubble]:";
	vector<int> listNumber1=listNumberOrigin;
	cout << "\n[Original List]: ";
	displayIntList(listNumber1);
	bubbleSorter(listNumber1);
	cout << "\n[Sorted List]: ";
	displayIntList(listNumber1);
	cout << "\n[Reverse Sorted List]: ";
	listNumber1=listNumberOrigin;
	rev_bubbleSorter(listNumber1);
	displayIntList(listNumber1);


	cout << "\n\n[Insert]:";
	vector<int> listNumber2=listNumberOrigin;
	cout << "\n[Original List]: ";
	displayIntList(listNumber2);
	insertSorter(listNumber2);
	cout << "\n[Sorted List]: ";
	displayIntList(listNumber2);
	cout << "\n[Reverse Sorted List]: ";
	listNumber2=listNumberOrigin;
	rev_insertSorter(listNumber2);
	displayIntList(listNumber2);
	cout << "\n\n";
}

void exercise3(){ //Reverse List.
	cout << "\n";
	vector<int> listNumber=randomFillList();
	cout << "\n[Original List]: ";
	displayIntList(listNumber);
	cout << "\n[Reversed List]: ";
	listNumber=reverseList(listNumber);
	displayIntList(listNumber);
	cout << "\n\n";
}

void exercise4(){ // Remove index.
	cout << "\n";
	vector<int> listNumber=randomFillList();
	cout << "\n[Original List]: {";
	displayIntList(listNumber);
	cout <<"}\n\n";
	listNumber=indexPopper(listNumber);
	cout << "\n[Popped List]: {";
	displayIntList(listNumber);
	cout << "}\n\n";
}

void exercise5(){ // Find word in list.
	string targetWord;
	while (true) {
		cout << "\n\n[TYPE X TO EXIT]";
		cout << "\nWhich word would you like to look for?: ";
		cin >> targetWord;
		if (!exitCheck(targetWord, "x")) {
			if(wordFinder(targetWord)){
				cout << "\n\n\nThe word \"" << targetWord << "\" seems pretty popular!\n\n";
				continue;
			} else {
				cout << "\n\n\nDoesn't seem like a very popular word...\n\n";
				continue;
			}
		}
		break;
	}
}




//|-------------------------------------------------------------------------|//
//|                                                                         |//
//|                              Main Function                              |//
//|                                                                         |//
//|-------------------------------------------------------------------------|//

int main()
{
	int reply;
	while (true) {
		cout << "Which exercise would you like to use? (1->5): ";
		cin >> reply;
		switch (reply) {
			case 1:
				exercise1();
				continue;

			case 2:
				exercise2();
				continue;

			case 3:
				exercise3();
				continue;

			case 4:
				exercise4();
				continue;

			case 5:
				exercise5();
				continue;
		}
	}
	return 0;
}