export function Lambda(): string{
    const f1 = (x:number): number =>x+5;
    const f2 = (x:number, y:number): number  => {return x+y};
    const f0 = (): number => {
        let response: string | null = "5" // Replaced to not be annoying //prompt("number: ")
        let value: number = response ? +response+2 : 0
        return value;
    }  

    return "f1 (2)= "+f1(2)+"; f2 (2, 5)= "+f2(2,5)+"; f0= "+f0();
}