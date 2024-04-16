let count = 0;

document.getElementById("decrease"). onclick= function(){
  
  count = count - 1;
  
  document.getElementById("mylabel").innerHTML = count;
  
}

document.getElementById("reset"). onclick= function(){
  
  count = count = 0;
  
  document.getElementById("mylabel").innerHTML = count;
  
}

document.getElementById("increase"). onclick= function(){
  
  count = count + 1;
  
  document.getElementById("mylabel").innerHTML = count;
  
}
  
