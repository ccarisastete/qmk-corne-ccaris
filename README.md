# Keymap CCARIS para Corne Keyboard

Esta es una configuración personalizada para el teclado Corne (crkbd) que incluye características especiales de visualización OLED y animaciones.

## Características

### Capas

- **Base**: Capa principal para escritura
- **Num**: Capa numérica
- **Symb**: Capa de símbolos
- **Nav**: Capa de navegación
- **Adj**: Capa de ajustes
- **Game**: Modo de juego (activa el ladrido de [Luna](https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c))
- **Game2**: Capa secundaria de juego

### Pantallas OLED

El teclado cuenta con dos pantallas OLED con diferentes funcionalidades:

#### Pantalla Principal (Master)

- Indicador de capa actual
- Mascota virtual "[Luna](https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c)" que reacciona a tu escritura:
  - Se sienta cuando escribes lento
  - Camina a velocidad media
  - Corre cuando escribes rápido
  - Ladra en modo de juego
  - Se escabulle con ALT
  - Salta con la barra espaciadora

#### Pantalla Secundaria

- Efecto "Matrix Rain" animado
- Lluvia de caracteres al estilo Matrix (no se ve bien, va a ser modificado)

### Animaciones Especiales

- **[Luna](https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c)**: Mascota virtual con múltiples animaciones
  - Velocidad de caminata: < 10 WPM
  - Velocidad de carrera: > 40 WPM
  - Animaciones de salto y sigilo
  - Modo ladrido en capa de juego

## Timeout de Pantalla

Las pantallas OLED se apagarán automáticamente después de un período de inactividad para ahorrar energía.

## Personalización

Este keymap está diseñado para ser intuitivo y divertido, combinando funcionalidad con elementos visuales atractivos. Las animaciones y efectos visuales proporcionan retroalimentación útil sobre el estado del teclado y la velocidad de escritura.

## Créditos

- Basado en el firmware QMK
- Animaciones de [Luna](https://github.com/HellSingCoder/qmk_firmware/blob/master/keyboards/sofle/keymaps/helltm/keymap.c) por HellSingCoder
- Efecto Matrix Rain personalizado
