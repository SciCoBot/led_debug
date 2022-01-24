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

Nota: inspirada em exemplos fornecidos por [micro-ros-arduino](https://github.com/micro-ROS/micro_ros_arduino).

## Comandos Básicos
### Definições
- LED_DEBUG_PIN: define o pino de saída para o LED, por default é 13

### Macros:

- **DEBUG_ERROR_MICR0_ROS(funct):** utilizado para verificar errros criticos na biblioteca micro-ROS. Para isso, verifica o retorno de uma função. No caso em que acontece um erro a execução padrão é parada e o LED começa a piscar.
- **DEBUG_WARNING_MICR0_ROS(funct):** utilizado para verificar errros não crítico. Para isso verifica o retorno de uma função. Neste caso, caso aconteça um erro não crítico nada acontece. 

### Funções:
- **errorLoop():** implementação que faz o led piscar, por default piscará o LED do pino 13 a cada um segundo.

## Como Utilizar

- Baixe.

- Adicione a partir da IDE arduino: Sketch -> Include Library -> Add .ZIP Library... -> selecione o arquivo baixado na etapa anterior.

- Teste o exemplo.

Obseervação: A biblioteca pode inutilizada caso  MICR0_ROS_DEBUG seja definida com valor diferente de 1, evitando sobrecarga de memória para quando o uso não é necessário.

## Possíveis Atualizações

- Implementar lógica complementar para DEBUG_WARNING_MICR0_ROS.

## Anotações de Desenvolvimento

- Avaliar piscar o LED mais rápido ou mais devagar dependendo do erro ocorrido;
- Avaliar uso de vários LEDs, um para cada tipo de erro.
