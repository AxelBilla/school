import {type IPeople} from "./people.js"
import {type Sector} from "./sector.js"

export interface IVisitor extends IPeople{
    sector: Sector,
    companyCar?: boolean
}

export function saveVisitor(doctor_name: string, product_name: string): string
{
    return `{VISIT} [Dr. ${doctor_name}] => (${product_name})`;
}

export function createVisitor(id: string, name: string, email: string, sector: Sector): IVisitor{
    let new_visitor: IVisitor = {
        id: id,
        name: name,
        email: email,
        sector: sector
    }
    return new_visitor;
}

export function createVisitorWithCar(id: string, name: string, email: string, sector: Sector, hasCar: boolean): IVisitor{
    let new_visitor: IVisitor = {
        id: id,
        name: name,
        email: email,
        sector: sector,
        companyCar: hasCar
    }
    return new_visitor;
}