package exercises;

public abstract class Exercise {
    protected abstract Object Definition();

    public Object Start(){
        return Start(false);
    }
    public Object Start(Boolean include_label){
        if(include_label) Label();
        return Definition();
    }

    protected void Label(String id){
        String label = "\n("+this.getClass().getSimpleName()+")" + ((id==null) ? "" : "["+id+"]") + ":";
        System.out.println(label);
    }
    protected void Label(){
        Label(null);
    }

}
