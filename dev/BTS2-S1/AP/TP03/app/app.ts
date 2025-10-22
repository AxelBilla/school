import { Component, signal } from '@angular/core';
import {RouterModule} from '@angular/router';
import {Home} from './home/home.js';
import { Medecins } from './medecins/medecins.js';

@Component({
  selector: 'app-root',
  imports: [Home, Medecins, RouterModule],
  templateUrl: './app.html',
  styleUrl: './app.css'
})
export class App {
  protected readonly title = signal('tp03');
}
