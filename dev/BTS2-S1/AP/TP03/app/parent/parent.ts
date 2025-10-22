import { Component, signal } from '@angular/core';
import {Child} from '../child/child';

@Component({
  selector: 'app-parent',
  imports: [Child],
  templateUrl: './parent.html',
  styleUrl: './parent.css'
})

export class Parent {
  url = ("https://img.notionusercontent.com/s3/prod-files-secure%2F9deb87a0-361e-81a1-8203-00037de65dfd%2F21f33ef1-d96d-463f-abe4-8db9c6756bd7%2FAngular_full_color_logo.svg.png/size/?exp=1759908377&sig=oSsl8AjbAR39A2X_cRZiLnVoyCT7gMMbN2SFD68z80E&id=27db87a0-361e-8052-9f6e-d4c70a04ecd7&table=block");
  getUrl(){
    return this.url;
  }
}
