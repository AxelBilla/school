import { Component } from 
'@angular/core';
import { RouterLink } from '@angular/router';

@Component({
  selector: 'app-medecins',
  imports: [RouterLink],
  templateUrl: './medecins.html',
  styleUrl: './medecins.css'
})
export class Medecins {

}

export interface Doctor{
  id: number;
  firstName: string;
  lastName: string;
  speciality: string;
  address: string;
  phone: string;
  email: string;
}