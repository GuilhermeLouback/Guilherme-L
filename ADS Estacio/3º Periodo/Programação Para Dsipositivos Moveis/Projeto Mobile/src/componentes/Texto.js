//Importação do React
import React from 'react';

//Importação dos componentes do React-native que serão utilizados;
import { Text, StyleSheet } from 'react-native';

/*Função que irá fazer as devidas alterações no corpo do texto
O react-native já disponibiliza os dados para os componentes filhoes
Basta passar o childrem como parametro {algo muito parecido com as props}*/
export default function Texto({ childrem }) {
  return <Text style={estilos.texto}> {childrem} </Text>;
}

const estilos = StyleSheet.create({
  texto: {
    fontFamily: 'MontserratRegular',
  },
});
