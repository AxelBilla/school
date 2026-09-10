export function Loop(): string{

    function wrap(text: string, wrapper: string): string{
        return wrapper+text+wrapper;
    }

    let input: string | null;
    do {
        input = "\"removed_cuz_annoying" //prompt("message: ");
    } while (!input || !input.includes("\""))

    return wrap(input, "\"");
}