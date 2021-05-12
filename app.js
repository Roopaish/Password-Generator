
const lengthEl = document.getElementById("length");
lengthEl.value = 6;
const generatorEL = document.getElementById("generator");
const generatorCopyEL = document.getElementById("generatorcopy");
const passwordEl = document.getElementById("password-text");
const copyEl = document.getElementById("copy");


const numbers = '0123456789';
const smallLetter = "abcdefghijklmnopqrstuvwxyz";
const capitalLetter = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
const symbols = '`~!@#$%^&*()_+=-[]{};:",./?';

generatorEL.addEventListener('click',generatePassword)
generatorCopyEL.addEventListener('click',()=>{
  generatePassword();
  copyPassword(); 
})
copyEl.addEventListener('click',copyPassword);

function generatePassword(){
  Number(lengthEl.value) > 6? lengthEl.value = Number(lengthEl.value) : lengthEl.value = 6;

  let len = Number(lengthEl.value);
  let password = "";

  for(let i = 0; i < len; i++){
    password += generateCharacters();
  }
  console.log(password)
  passwordEl.innerText = password;
  copyEl.innerText = 'Copy';
}

function generateCharacters(){
  let p = [];

  if(document.getElementById("number").checked){
    p.push(numbers[Math.floor(Math.random()*numbers.length)])
  }

  if(document.getElementById("smallLetters").checked){
    p.push(smallLetter[Math.floor(Math.random()*smallLetter.length)])
  }
 
  if(document.getElementById("capitalLetter").checked){
    p.push(capitalLetter[Math.floor(Math.random()*capitalLetter.length)])
  }

  if(document.getElementById("symbols").checked){
    p.push(symbols[Math.floor(Math.random()*symbols.length)])
  }

  if(p.length===0) return "";

  return p[Math.floor(Math.random()*p.length)]
}

function copyPassword(){
  var password = passwordEl;//works only for input and textarea field

  password.select();//selects the texts 

  document.execCommand("copy");//copy command executes

  copyEl.innerText = 'Copied';
}