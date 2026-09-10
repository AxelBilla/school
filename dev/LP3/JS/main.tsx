'use client'
import { useState } from 'react';
import { Exercises } from './exercises_loader'

export function Main() {

  const [results, setResults] = useState(["Waiting..."]);

  function LoadExercise(){
    setResults(Exercises())
  }

  return (
    <div onClick={LoadExercise}>
      {results.map((res, index) => <p key={index}>{res}</p>)}
    </div>
  );
}