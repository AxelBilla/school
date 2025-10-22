import { ComponentFixture, TestBed } from '@angular/core/testing';

import { Medecins } from './medecins';

describe('Medecins', () => {
  let component: Medecins;
  let fixture: ComponentFixture<Medecins>;

  beforeEach(async () => {
    await TestBed.configureTestingModule({
      imports: [Medecins]
    })
    .compileComponents();

    fixture = TestBed.createComponent(Medecins);
    component = fixture.componentInstance;
    fixture.detectChanges();
  });

  it('should create', () => {
    expect(component).toBeTruthy();
  });
});
