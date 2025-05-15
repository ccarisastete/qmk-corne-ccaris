# Keymap CCARIS para Corne Keyboard

Esta es una configuración personalizada para el teclado Corne (crkbd) que incluye características especiales de visualización OLED y animaciones.

## Características

### Capas

- **Base**: Capa principal para escritura en español latinoamericano
- **Num**: Capa numérica con distribución de teclado numérico
- **Symb**: Capa de símbolos y caracteres especiales
- **Nav**: Capa de navegación y control multimedia
- **Adj**: Capa de ajustes (RGB y reinicio)
- **Game**: Modo de juego optimizado con mascota Luna ladrando
- **Game2**: Capa secundaria de juego con acceso a teclas de función

### Pantallas OLED

El teclado cuenta con dos pantallas OLED con diferentes funcionalidades:

#### Pantalla Principal (Master)

- Indicador de capa actual
- Mascota virtual "Luna" que reacciona a tu escritura:
  - Se sienta cuando escribes lento (< 10 WPM)
  - Camina a velocidad media
  - Corre cuando escribes rápido (> 40 WPM)
  - Ladra en modo de juego
  - Se escabulle con ALT
  - Salta con la barra espaciadora

#### Pantalla Secundaria

- Efecto "Glitch" animado
- Distorsión visual dinámica con restauración automática

![Glitch Effect](./images/slave_art.png)

### RGB Matrix

- Control completo de iluminación RGB
- Ajustes de brillo, saturación y efectos
- Brillo máximo limitado a 150 para estabilidad
- Reacción a pulsaciones de teclas
- Desactivación en modo suspendido

## Timeout de Pantalla

Las pantallas OLED se apagarán automáticamente después de 60 segundos de inactividad para ahorrar energía.

## Personalización

Este keymap está diseñado para ser intuitivo y divertido, combinando funcionalidad con elementos visuales atractivos. Las animaciones y efectos visuales proporcionan retroalimentación útil sobre el estado del teclado y la velocidad de escritura.

## Créditos

- Basado en el firmware QMK
- Animaciones de [Luna](https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c) por HellSingCoder
- Efecto Glitch personalizado
