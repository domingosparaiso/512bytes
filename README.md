# 512bytes
Concurso Software de 512 bytes

O concurso aconteceu em 2002, 9º lugar com o programa "Game".

As regras eram simples, faça uma proposta informando como funciona a sua solução e codifique o programa usando, no máximo, 512 bytes de fonte. Escrevi os programas em C, haviam opções como C++, Pascal e Java. Sabendo qual era o compilador (Borland Turbo C) e o ambiente onde seriam executados os programas (MS-DOS) então foi partir para o planejamento.

Game: O programa funciona de forma parecida com o jogo Tron onde dois jogadores controlam a direção de dois veículos que se movem deixando rastros por onde passam. As regras são simples, os veículos não param nem variam de velocidade, as curvas são sempre em 90° e perde quem tocar em algum rastro ou nas paredes (tela inteira em modo texto, 80x25).
Os jogadores eram representados por carinhas (uma escura e outra clara) os rastros possuiam dois tons diferentes, após uma colisão apenas o vencedor continuava na tela.
O maior desafio foi reutilizar ao extremo tudo que fosse possível permitindo dois controles simultâneos.

Hanoi: Problema clássico de torres de Hanói, a primeira versão usava recursividade, retirei a recursão no intúito de usar menos código, mas não adiantou. O programa resolve o problema de forma visual mostrando cada passo. Para iniciar o usuário indica quantos discos serão usados entre 3 e 9.

Banner: Funcionamento rudimentarmente similar ao programa homônimo que imprimia textos rotacionados em 90º usando letras grandes formadas por caracteres simples como "#", "X" ou "@", geralmente se usava para fazer faixas (banners) em impressoras matriciais com formulário contínuo. O truque aqui foi obter o endereço do mapa dos caracteres na placa de vídeo e usar como matriz. O programa permitia a troca do caracter de preenchimento e o tamanho das células que substituíam cada pixel do caracter.