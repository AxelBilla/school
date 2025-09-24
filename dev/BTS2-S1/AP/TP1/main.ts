import { saveVisitor, createVisitor, createVisitorWithCar } from "./visiteur.js";
import { default as sendNotif} from "./intranet.js";
import { type Employee } from "./employee.js";
import { default as setSect } from "./sector.js"

let new_visit = saveVisitor("Hakim Richelieu", "DOLIPRANE");
sendNotif(`Nouveau visiteur!\n${new_visit}`);

let empOne: Employee = {
    id: "1",
    nom: "Alex Rover",
    service: "DSI"
}

console.log(setSect(empOne, "Nord"));

console.log("{VISIT_ADD}: "+JSON.stringify(createVisitor("2", "John Kelcy", "john@kelcy-org.net", "Paris")));
console.log("{VISIT_ADD (CAR)}: "+JSON.stringify(createVisitorWithCar("2", "John Kelcy", "john@kelcy-org.net", "Paris", true)));
