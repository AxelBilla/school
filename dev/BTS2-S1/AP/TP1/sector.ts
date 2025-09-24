import {type Employee} from "./employee.js";

export type Sector = "Nord" | "Sud" | "Est" | "Ouest" | "Paris";

export default function setSector(employee: Employee, sector: Sector) : string
{
    return `{SECTOR} [${employee.nom}] => Assigned to "${sector}"`;
}