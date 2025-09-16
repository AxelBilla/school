using System;
using System.Collections.Generic;
using System.Linq;

public class TP01
{
    public static void Main()
    {
        Console.WriteLine("[ACCOUNT COUNTS]: "+Account.GetCount());

        Account unsafe_account = new Account("name_1", "surname_1", "username_1");
        Console.WriteLine("[ACCOUNT COUNTS]: "+Account.GetCount());

        Account_Secure safe_account = new Account_Secure("name_2", "surname_2", "username_2", "akc1");
        Console.WriteLine("[ACCOUNT COUNTS]: "+Account.GetCount());

        Account ttt = new Account();
        Console.WriteLine("[ACCOUNT COUNTS]: "+Account.GetCount());

        Console.WriteLine("\n\n{STRING}\n");
        Console.WriteLine("(UNSAFE_ACCOUNT): "+unsafe_account.ToString());
        Console.WriteLine(" (SAFE_ACCOUNT): "+safe_account.ToString());
        Console.WriteLine("     (TTT): "+ttt.ToString());

        Console.WriteLine("\n\n{XML}\n");
        Console.WriteLine("(UNSAFE_ACCOUNT)\n"+unsafe_account.ToXML());
        Console.WriteLine(" (SAFE_ACCOUNT)\n"+safe_account.ToXML());
        Console.WriteLine("     (TTT)\n"+ttt.ToXML());




        School turgot = new("Turgot");
        turgot.addStudent(unsafe_account);
        turgot.addStudent(safe_account);
        turgot.addStudent(ttt);

        Console.WriteLine(turgot.ToXML());

    }
}

public class Account  {

    private static int account_count = 0;
    public static int GetCount(){
        return Account.account_count;
    }

    protected string name;
    protected string surname;
    protected string username;

    public Account(){
        Account.account_count++;
    }
    public Account(string name, string surname, string username){
        this.name = name;
        this.surname = surname;
        this.username = username;
        Account.account_count++;
    }

    // GOTTA MANUALLY CREATE THIS AS A STRING CUZ I CAN'T USE VS AND IT'S HORRIBLE ON THIS SCHOOL'S COMPUTER
    public string ToXML(int tab=0){
        string class_name = this.GetType().Name;
        return
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+class_name+">\n"+
            this.GetXMLContent(tab+1)+
            String.Concat(Enumerable.Repeat("  ", tab))+"</"+class_name+">\n";
    }

    // GOTTA MANUALLY CREATE THIS AS A STRING CUZ I CAN'T USE VS AND IT'S HORRIBLE ON THIS SCHOOL'S COMPUTER
    protected virtual string GetXMLContent(int tab=0){ 
        return
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+nameof(this.name)+">"+this.name+"</"+nameof(this.name)+">\n"+
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+nameof(this.surname)+">"+this.surname+"</"+nameof(this.surname)+">\n"+
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+nameof(this.username)+">"+this.username+"</"+nameof(this.username)+">\n";
    }

    public virtual string ToString(){
        return this.name+"; "+this.surname+"; "+this.username;
    }

    public string getName(){
        return this.name;
    }
    public string getSurname(){
        return this.surname;
    }
    public string getUsername(){
        return this.username;
    }
}

public class Account_Secure : Account {

    private string password;

    public Account_Secure(string name, string surname, string username, string password) : base(name, surname, username){
        this.password = password;
    }

    public override string ToString(){
        return base.ToString()+"; "+this.password;
    }

    // GOTTA MANUALLY CREATE THIS AS A STRING CUZ I CAN'T USE VS AND IT'S HORRIBLE ON THIS SCHOOL'S COMPUTER
    protected override string GetXMLContent(int tab=0){
        return base.GetXMLContent(tab)+
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+nameof(this.password)+">"+this.password+"</"+nameof(this.password)+">\n";
    }
}


public class School {

    private string name;
    private List<Account> studentAccounts;

    public School(string name){
        this.name = name;
        this.studentAccounts = new List<Account>();
    }
    public School(){
        this.studentAccounts = new List<Account>();
    }
    
    // Unsafe Accounts
    public void addStudent(string name, string surname, string username){
        Account newStudent = new(name, surname, username);
        studentAccounts.Add(newStudent);
    }
    public void addStudent(Account account){
        studentAccounts.Add(account);
    }

    // Safe Accounts
    public void addStudent(string name, string surname, string username, string password){
        Account_Secure newStudent = new(name, surname, username, password);
        studentAccounts.Add(newStudent);
    }
    public void addStudent(Account_Secure account){
        studentAccounts.Add(account);
    }



    public void removeStudent(string name, string surname, bool isOnce = true){
        foreach (var student in studentAccounts)
        {
            if(student.getName() == name && student.getSurname()==surname) studentAccounts.Remove(student);
            if(isOnce) break;
        }
    }

    public void removeStudent(string username, bool isOnce = true){
        foreach (var student in studentAccounts)
        {
            if(student.getUsername()==username) studentAccounts.Remove(student);
            if(isOnce) break;
        }
    }

    // GOTTA MANUALLY CREATE THIS AS A STRING CUZ I CAN'T USE VS AND IT'S HORRIBLE ON THIS SCHOOL'S COMPUTER
    public string ToXML(int tab=0){

        string class_name = this.GetType().Name;
        string students_XML = "";
        foreach(var student in studentAccounts)
        {
            students_XML+=student.ToXML(tab+1);
        }

        return
            String.Concat(Enumerable.Repeat("  ", tab))+"<"+class_name+(this.name!=null ? "='"+this.name+"'" : null)+">\n"+
                students_XML +
            String.Concat(Enumerable.Repeat("  ", tab))+"</"+class_name+">\n";
    }
}