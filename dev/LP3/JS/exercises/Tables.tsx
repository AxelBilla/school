export function Tables(): string{
    function f1(Radius: number, x: number): number{
        return Math.sqrt(2*Radius*(Radius+x))
    }
    function f2(Radius: number): number[][]{
        const Xs: number[] = [Radius, Radius/2, 0, -Radius/2, -Radius]
        const Ys: number[] = Xs.map(value => f1(Radius, value))
        return [Xs, Ys];
    }

    // 160 = test value
    const res: number[][] = f2(160);
    return "["+res[0].toString()+"]"+"["+res[1].toString()+"]"
}