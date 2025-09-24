// VARs
const BATIMENT: string = "Bonjour GSB !";
let salle: string = "Réunion RDC";

console.log(salle);

for(let i: number = 0; i<5; i++){
  salle+=stuff();
  console.log(salle);
}


// FUN STUFF
while(true){
  console.log(stuff());

}

function getRandom(): number
{
  return Math.floor(Math.random()*10);
}
function stuff(): string
{
  let stuffed_string: string = "";
  const assets: Array<string> = ["()","{}","[]","##","%%"];
  const seed: number = getRandom()*(100);

  for(let i: number = 0; i<seed; i++){
    let asset_num: number = getRandom();
    if(asset_num!=0 && asset_num<assets.length) stuffed_string+=assets[Math.floor(asset_num)]; 
    else stuffed_string+=assets[0];
    if(asset_num%5==0) stuffed_string+="\n";
  }

  return stuffed_string;
}