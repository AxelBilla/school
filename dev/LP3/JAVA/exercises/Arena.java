package exercises;

public class Arena extends Exercise implements ISkippable{
    protected Object Definition() {
        Warrior w = new Warrior("W", 100, 5, 5);
        Mage m = new Mage("M", 100, 5, 100);
        Archer a = new Archer("A", 100, 5);
        Thief t = new Thief("T", 100, 5);

        Fight(w,m,a,t);
        return null;
    }
    private static void Fight(Character... characters){
        for(Character a : characters){
            for(Character b : characters){
                if(a==b) continue;

                Announce(a.name +" VS "+b.name);
                Announce(Fight(a, b).name+" HAS WON!");
            }
        }
    }
    private static Character Fight(Character a, Character b){
        Status(a, b);
        for(int i = 1; i<=50; i++){
            a.Attack(b);
            Status(a, b);
            if(!a.IsAlive() || !b.IsAlive()) break;

            b.Attack(a);
            Status(a, b);
            if(!a.IsAlive() || !b.IsAlive()) break;
        }

        if(!a.IsAlive()) return a;
        else return b;
    }

    private static void Status(Character... characters){
        for(Character c : characters) Announce(c);
        Announce("");
    }
    public static void Announce(Object msg){
        System.out.println(msg);
    }

}


abstract class Character {
    protected String name;
    private int health;
    private int max_health;
    protected int strength;

    public Character(String name, int max_health, int strength) {
        this.name = name;
        this.max_health = max_health;
        this.health = max_health;
        this.strength = strength;
    }

    public boolean IsAlive(){
        return this.health>0;
    }

    protected void Damage(int damage){
        int new_health = Math.max(this.health-GetDamageFromAttack(damage), 0);

        this.health = new_health;
        OnDamaged(damage);
    }
    protected void Heal(int health){
        if(!this.IsAlive()) {
            Arena.Announce(this.name+" IS DEAD, THEY CANNOT BE HEALED.");
            return;
        }

        int new_health = Math.min(max_health, this.health + health);
        this.health = new_health;
    }
    protected void Attack(Character target){
        if(!this.IsAlive()) {
            Arena.Announce(this.name+" IS DEAD, THEY CANNOT ATTACK.");
            return;
        }
        if(!target.IsAlive()){
            Arena.Announce(target.name+" IS DEAD, THEY CANNOT BE ATTACKED.");
            return;
        }

        OnAttack(target);
        target.Damage(GetAttackStrength());
    }

    protected int GetAttackStrength(){
        return this.strength+AttackModifier();
    }
    protected int AttackModifier(){return 0;}
    protected void OnAttack(Character target){
        Arena.Announce(this.name+" attacks "+target.name);
    }

    protected int GetDamageFromAttack(int damage){
        return Math.max(damage-DamageModifier(), 0);
    }
    protected int DamageModifier(){return 0;}
    protected void OnDamaged(int damage){}


    @Override
    public String toString() {
        return this.name+" - "+this.Information()+" - ("+this.getClass().getSimpleName()+")"+((!IsAlive()) ? " [DEAD]" : "");
    }
    protected String Information(){ return "HP "+this.health+"/"+this.max_health+" STR "+this.strength;}
}

class Warrior extends Character{
    private int armor;

    public Warrior(String name, int max_health, int strength, int armor) {
        super(name, max_health, strength);
        this.armor = armor;
    }
    @Override
    protected String Information() {
        return super.Information()+" ARMOR "+this.armor;
    }


    @Override
    protected int DamageModifier() {
        return this.armor;
    }

    @Override
    protected void OnDamaged(int damage) {
        Arena.Announce(this.name+" blocks with their amror : "+damage+" -> "+Math.max(damage-DamageModifier(), 0));
    }
}

class Mage extends Character{
    private int mana;
    private int max_mana;
    public static final int SPELL_COST = 20;

    public Mage(String name, int max_health, int strength, int max_mana) {
        super(name, max_health, strength);
        this.max_mana = max_mana;
        this.mana = max_mana;
    }

    @Override
    protected String Information() {
        return super.Information()+" MANA "+this.mana+"/"+this.max_mana;
    }

    @Override
    protected int AttackModifier() {
        return (CanCast()) ? this.strength : 0;
    }
    @Override
    protected void OnAttack(Character target) {
        if(CanCast()) {
            this.mana -= SPELL_COST;
            Arena.Announce(this.name+" casts FIREBALL on "+target.name+": "+this.GetAttackStrength()+" damage ("+SPELL_COST+")");
        } else Arena.Announce(this.name+" attacks "+target.name+" with a stick due to their lack of mana");

    }

    private boolean CanCast(){
        return (mana>=SPELL_COST);
    }

}

class Archer extends Character{
    private int shots = 0;

    public Archer(String name, int max_health, int strength) {
        super(name, max_health, strength);
    }
    @Override
    protected String Information() {
        return super.Information()+" SHOTS "+this.shots;
    }

    @Override
    protected int AttackModifier() {
        return (IsCritical()) ? this.strength : 0;
    }
    @Override
    protected void OnAttack(Character target) {
        this.shots++;
        if(IsCritical()){
            Arena.Announce(this.name+" shoots a critical shot at "+target.name+": "+this.strength*2+" damage");
        } else Arena.Announce(this.name+" shoots at "+target.name);
    }

    private boolean IsCritical(){
        return (this.shots % 3 == 0);
    }
}

class Thief extends Character{

    public Thief(String name, int max_health, int strength) {
        super(name, max_health, strength);
    }

    @Override
    protected void OnAttack(Character target) {
        this.Heal(this.GetAttackStrength()/2);
        Arena.Announce(this.name+" stole "+target.name+"'s lifeforce");
    }
}