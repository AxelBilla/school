package exercises;

import java.util.*;

public class Grading extends Exercise implements ISkippable{
    protected Object Definition() {
        SetDefault();
        Grade();
        return null;
    }

    Map<String, List<Double>> grades = new HashMap<>();

    private void Grade(){
        do{
            String choice = Input("\n[A]: Show | [B]: Grade | [C]: New | [D]: Remove | [X]: Quit = ");
            switch (choice){
                case "A":
                    String scope = Input("[A]: Student | [B]: ALL = ");

                    switch (scope){
                        case "A":
                            Show(Input("STUDENT= "));
                            break;
                        case "B":
                            Show();
                            break;
                    }

                    break;
                case "B":
                    Add(Input("STUDENT= "), InputDouble("GRADE= "));
                    break;
                case "C":
                    Add(Input("STUDENT= "));
                    break;
                case "D":
                    Remove(Input("STUDENT= "));
                    break;
                case "X":
                    return;
                default:
                    System.out.println("INVALID INPUT");
                    break;
            }
        } while(true);
    }

    private boolean IsGradeValid(Double grade){
        return (grade>=0f && grade <= 20f);
    }
    private boolean IsStudentValid(String student){
        return this.grades.containsKey(student.toUpperCase());
    }
    private List<Double> Get(String student){
        return this.grades.get(student.toUpperCase());
    }

    private void Add(String student, Double grade){
        if(!IsGradeValid(grade)) {
            System.out.println("INVALID GRADE");
            return;
        }

        if(this.IsStudentValid(student)) this.Get(student).add(grade);
        else System.out.println("UNKNOWN STUDENT");
    }
    private void Add(String student){
        if(this.IsStudentValid(student)){
            System.out.println("STUDENT ALREADY EXISTS");
            return;
        }

        this.grades.put(student.toUpperCase(), new ArrayList<>());
    }
    private void Remove(String student){
        if(!this.IsStudentValid(student)){
            System.out.println("UNKNOWN STUDENT");
            return;
        }

        this.grades.remove(student);
    }

    private Double Average(List<Double> grades){
        Double total = 0d;
        for(Double grade : grades) total+=grade;
        return total/grades.size();
    }

    private void Show(String student){
        if(!IsStudentValid(student)) {
            System.out.println("UNKNOWN STUDENT");
            return;
        }

        List<Double> student_grades = this.Get(student);
        String msg = student
                + ":\n TOTAL= "+ student_grades.size()
                + "\n AVG= "+ ((student_grades.size() == 0) ? "N/A" : this.Average(student_grades))
                + "\n GRADES= "+ student_grades;

        System.out.println(msg);
    }

    private void Show(){
        Map<String, Double> avg_grades = new HashMap<>();

        double total_avg = 0;
        int valid_student_count = 0;
        for(String student : this.grades.keySet()){
            List<Double> student_grades = this.Get(student);
            if(student_grades.size() <= 0) continue;

            Double avg = this.Average(student_grades);
            avg_grades.put(student, avg);

            total_avg+=avg;
            valid_student_count++;
        }

        List<Map.Entry<String, Double>> ranking = new ArrayList<>(avg_grades.entrySet());
        ranking.sort(Map.Entry.comparingByValue());

        String ranks = "";

        int count = valid_student_count;
        for(Map.Entry<String, Double> e : ranking){
            ranks = "\n#"+ (count--) + " - "+ e.getKey() + " - " + e.getValue() + "/20" + ranks;
        }

        String msg = "ALL: "
                + "\n AVG: "+total_avg/valid_student_count
                + "\n BEST: "+ranking.get(valid_student_count-1).getValue()
                + "\n WORST: "+ranking.get(0).getValue()
                + "\n RANKING: "+ranks;

        System.out.println(msg);
    }

    private void SetDefault(){
        this.Add("John");
        this.Add("John", 2d);
        this.Add("Jane");
        this.Add("Jane", 15d);
        this.Add("Ryan");
        this.Add("Ryan", 6d);
        this.Add("Marie");
        this.Add("Marie", 20d);
    }

    private Double InputDouble(String message){
        while(true) {
            try {
                System.out.print(message);
                return new Scanner(System.in).nextDouble();
            } catch (Exception e) {}
        }
    }
    private String Input(String message){
        while(true) {
            try {
                System.out.print(message);
                return new Scanner(System.in).next().toUpperCase();
            } catch (Exception e) {}
        }
    }

}