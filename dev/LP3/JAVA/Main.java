import exercises.*;

void main() {
    Start(List.of(
            new Hello(),
            new Collections(),
            new Input(),
            new Grading(),
            new Arena()
    ));
}


public static void Start(List<Exercise> exercises){
    for(Exercise exo : exercises){
        if(exo instanceof ISkippable) continue;

        exo.Start(true);
    }
}