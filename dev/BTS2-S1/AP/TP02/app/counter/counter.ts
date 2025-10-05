import { Component, output, signal } from '@angular/core';
import { Listing } from "../listing/listing";

@Component({
  selector: 'app-counter',
  standalone: true,
  templateUrl: './counter.html',
  styleUrls: ['./counter.css'],
  imports: [Listing]
})
export class Counter {
  count = signal(0);
  count_out = output<any>();

  increment(): void {
    this.count.update(c => c+1)
    this.emit()
  }

  set(e: any): void {
    let value : number = parseInt(e.data);
    if(!Number.isNaN(value)) this.count.set(e.data);
    this.emit()
  }

  emit(): void{
    this.count_out.emit(this.count);
  }
}
