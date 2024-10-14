# PLANEJAMENTO DO CÓDIGO
> Nesta documentação estará presente todos os tópicos necessários para o desenvolvimento do código final do TCC Hidroponia Automatizada

## LÓGICAS E FUNÇÕES
- **RTC**:
  - [ ] Controlar o horário de inicio e fim do periodo de rega;
  - [ ] Configurar horário na aba de configuração do dispostivo, no menu;
  - [ ] Lançar horários de operação no Cartão MICRO SD;
  - [ ] \(Opcional) Exibir bateria do RTC;

- **Micro SD**
  - [ ] Separar pastas:
    1. Dados Gerais
      > Armazenar as fichas técnicas de plantação
      > Armazenar as configurações feitas no dispositivo
    2. Minha Colheita
       > Criar uma pasta desse tipo para cada nova colheita
       > Pasta acessável pelo usuário
       > Nome da colheita e a ficha utilizada
       > Dados sobre o periodo de cultivo (horário de rega, ciclo, dia atual)
  - [ ] Acessar fichas técnicas para continuar o cultivo
  - [ ] \(Opcional) Vincular ao sistema supervisório para exibir dados e gerar gráficos sobre o cultivo

- **LCD Menu**
  - [ ] Ligar/Desligar menu/tela
  - [ ] Em inatividade com menu ligado, exibir horário atual
  - [ ] Configuração de Dispositivo
  - [ ] Configuração de Cultivo
  - [ ] Iniciar/Cancelar Cultivo
    1. Criar ficha
      - Nome Planta
      - Ciclo (15 d a 35d)
      - Periodos Rega (10~20 min on, 20~50 min off)
      - Limite pH
      - Limite Condutividade
    2. Usar ficha
      - Selecionar fichas criadas  
  - [ ] Meu Cultivo
    - Medição dos Sensores
    - Status do Ciclo
    - Status Sensores (pH, condutividade, temperatura água, temperatura e umidade do ar)

