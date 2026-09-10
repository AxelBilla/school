import {Lambda} from "./exercises/Lambda"
import {Tables} from "./exercises/Tables"
import {Logic} from "./exercises/Logic"
import {Loop} from "./exercises/Loop"
import {date} from "./exercises/Date"

export function Exercises() {
    let exercises : string[] = [
        date(),
        Loop(),
        Logic(),
        Tables(),
        Lambda(),
    ]

    // Single Exo //
    // return [Test()]
    return exercises;
}