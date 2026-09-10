export function date(): string{

    function Weekday(day_id: Date): string{
        const days = ["Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"];
        return days[day_id.getDate()]
    }

    return Weekday(new Date());
}