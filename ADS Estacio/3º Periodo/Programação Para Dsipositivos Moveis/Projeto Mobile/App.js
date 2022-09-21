import React from 'react';
import { StatusBar, SafeAreaView, Text, View } from 'react-native';



import Cesta from './src/telas/Cesta';
import Texto from './src/componentes/Texto';


// importação de fontes externas

import {
  useFonts,
  Inter_900Black,
  Inter_700Bold,
} from '@expo-google-fonts/inter';

export default function App() {
  /* Uma variavel vai receber um objeto contendo o mapa de fontes
   * nele iremos dar um nome para duas fontes e em seguida iremos
   *
   * */
  let [fontsLoaded] = useFonts({
    fonteBlack: Inter_900Black,
    fontBold: Inter_700Bold,
  });

  if (!fontsLoaded) {
    return <Text> Fonte carregada com sucesso </Text>;
  }

  return (
    <SafeAreaView>
      <Cesta />
    </SafeAreaView>
  );
}
