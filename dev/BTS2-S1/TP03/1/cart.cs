public class Cart
{
    private float _totalAmount;

    public void setTotal(float amount){
        this._totalAmount = amount;
    }

    public float reduction() { return this._totalAmount*0.1f; }
    public int reduction2() { return (int)( (this._totalAmount/60)*3f ); }
    public float reduction3() {
        if(_totalAmount>100) return this._totalAmount*0.05f;
        if(_totalAmount>=50) return this._totalAmount*0.02f;
        return 0;
        }

}