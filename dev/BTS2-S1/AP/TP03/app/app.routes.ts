import { Routes } from '@angular/router';
import {Home} from './home/home.js';
import { Medecins } from './medecins/medecins.js';
import { Parent } from './parent/parent.js';

export const routes: Routes = [
    {path: '', component: Home},
    {path: 'medecins', component: Medecins},
    {path: 'p', component: Parent},
    { path: '**', redirectTo: '' }
];
