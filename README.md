# Biblioteca Serial Debug para Arduino Due
[![platform badge](https://img.shields.io/badge/platform-Arduino-orange.svg)](https://github.com/arduino)
[![GitHub](https://img.shields.io/github/license/mashape/apistatus.svg)](https://github.com/SciCoBot/led_debug/blob/main/LICENSE)

## Contents

- [Sobre](#sobre)
- [Comandos Básicos](#comandos-básicos)
- [Como Utilizar](#como-utilizar)
- [Possíveis Atualizações](#possíveis-atualizações)
- [Anotações de Desenvolvimento](#anotações-de-desenvolvimento)


## Sobre

Está biblioteca tem como objetivo fornecer funções e macros para debug utilizando um LED. A princípio as implementações realizadas constam apenas com a lógica de depuração para a biblitoeca [micro-ros-arduino](https://github.com/micro-ROS/micro_ros_arduino).

Para a criação desta bibliote baseou-se em [library tutorial](https://www.arduino.cc/en/Hacking/libraryTutorial) e [API style guide](https://www.arduino.cc/en/Reference/APIStyleGuide).

## Comandos Básicos

### Macros:

- **DEBUG_ERROR_MICR0_ROS:** verifica o retorno de uma função. Caso aconteça um erro a execução padrão é parada e o LED começa a piscar.
- **DEBUG_WARNING_MICR0_ROS:** verifica o retorno de uma função. Caso aconteça um erro nada acontece.

### Funções:
- **errorLoop:** implementação que faz o led piscar.

## Como Utilizar

- Baixe.

- Adicione a partir da IDE arduino: Sketch -> Include Library -> Add .ZIP Library... -> selecione o arquivo baixado na etapa anterior.

- Teste o exemplo.

Obseervação: A biblioteca pode inutilizada caso a definição de MICR0_ROS_DEBUG seja retirada, evitando sobrecarga de memória para quando o uso não é necessário.

## Possíveis Atualizações

- Implementar logica para DEBUG_WARNING_MICR0_ROS.

## Anotações de Desenvolvimento

- Avaliar piscar o LED mais rápido ou mais devagar dependendo do erro ocorrido;
- Avaliar uso de vários LEDs, um para cada tipo de erro.
