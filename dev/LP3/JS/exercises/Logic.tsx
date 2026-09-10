export function Logic(): string{
    function substract(x: number | null) : number {
        return (x) ? x-2 : NaN;
    }
    function display(): string{
        const start: number = substract(tab[0]);
        const end: number = substract(tab[tab.length-1])

        // REMOVED CUZ ANNOYING AF
        // alert(start);
        // alert(end);
        
        return "start: "+start+"; end: "+end;
    }

    
    const tab: number[] = [-2, 1, 4];
    let intended_error: number = substract(null);

    return ((Number.isNaN(intended_error) || intended_error<0)?"Nombre négatif!":intended_error)+" | "+display();
}