import { Component, WritableSignal, input, signal} from '@angular/core';
import { DomSanitizer, SafeUrl } from "@angular/platform-browser";

@Component({
  selector: 'app-child',
  imports: [],
  templateUrl: './child.html',
  styleUrl: './child.css'
})

export class Child {
  img = input.required<string>();
  getImg(){
    return this.img();
  }
}
