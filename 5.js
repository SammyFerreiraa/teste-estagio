function inverterString(str) {
  let StringInvertida = '';
  for (let i = str.length - 1; i >= 0; i--) {
      StringInvertida += str[i];
  }
  return StringInvertida;
}

const texto = "Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código";
const stringReversa = inverterString(texto);
console.log(stringReversa);
