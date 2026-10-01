<h1>Detector de Temperatura e Umidade - Aplicados ao alerta dos riscos do calor extremo.</h1>
<p>Projeto que visa monitorar e detectar perigos relacionados aos riscos do calor extremo.
  Nesse primeiro prototipo iremos usar uma placa controladora ESP32 por conta de seus modulos bluetooth e WIFI embutidos
junto com uma tela OLED onde as informações e as condições irão aparecer, como por exeplo: Temperatura, Umidade, Nivel de risco e etc.
Usaremos um detector de temperatura GY-BM280 e um Detector de umidade AHT10.
  </p>
  <img width="1366" height="641" alt="Image" src="https://github.com/user-attachments/assets/54962b82-6cd3-44f4-8d60-9d8dcbb02dcc" />

  <p>Optamos por utilizar o Esp32 principalmente porque queriamos implementar um aplicativo mobile, onde o usuário iria
  acompanhar em tempo real a temperatura registrada pelo medidor naquele local, com dashboards interativos e responsivos
  onde poderá futuramente ser feito um registro dos historicos de altas temperaturas naquela região para ser feito um estudo
  posterior sobre os riscos das altas temperaturas.</p>
  <h2>Qual o Objetivo Principal?</h2>
  <p>O objetivo principal do projeto é registrar e monitorar altas temperaturas e poder fazer um levantamento das necessidades
  em relação aos riscos da exposição ao calor extremo, de acordo com a W.H.O (World Health Organization) número de pessoas expostas ao 
    calor extremo está crescendo exponencialmente devido às mudanças climáticas em todas as regiões do mundo. A mortalidade relacionada 
    ao calor entre pessoas com mais de 65 anos aumentou cerca de 85% entre os períodos de 2000–2004 e 2017–2021. </p>
    <h2>Como Seriam Feitas Essas Medidas?</h2>
    <p>Alertar as pessoas dos riscos a exposição ao calor é o nosso foco principal, então o nosso sistema contará com condições de 
    alerta e recomendações para que as pessoas possam se cuidar ao sair de casa para ir ao trabalho ou ao supermercado por exemplo.
    As condições seriam;</p>
    <p>Menor que 30° = Temperatura normal, "Se mantenha hidratado(a).".</p>
    <p>Entre 35° - 39° = Alta temperatura, "Não saia sem sombrinha, passe protetor solar, e tome bastante água.".</p>
    <p>Acima de 40° = Calor Extremo, "Tome Muita agua, passe protetor solar e use roupas anti raios UV para se proteger.".</p>
    <p>De acordo com a Agencia Brasil, "Acima de 35°C com alta umidade, o corpo humano simplesmente não consegue funcionar como deveria",
    Ai entramos com outro fator, o nivel de umidade, que afeta diretamente como as condições de risco iriam ser representadas, além
      da representação da temperatura, também iremos colocar a porcentagem de umidade e fazer uma relação de medida entre a temperatura
      e a umidade utilizando a Fórmula de Johnson (1980):</p>
      <p align="center">
      <strong>ITU = T<sub>bs</sub> + 0,36 × T<sub>po</sub> + 41,2</strong>
      </p>
      <p>
      Onde <strong>T<sub>bs</sub></strong> é a temperatura de bulbo seco e <strong>T<sub>po</sub></strong> é temperatura de ponto de orvalho.
      </p>
      
      
      

    
  
