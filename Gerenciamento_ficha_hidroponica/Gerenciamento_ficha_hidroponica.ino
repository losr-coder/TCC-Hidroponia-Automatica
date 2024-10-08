#define tamMaxChar 50
#define idMax      10

int id, *ptr;

struct plantDataFile {
  char  nome[tamMaxChar];   // Nome da plantação
  char  nome_f[tamMaxChar]; // Nome da plantação para verificação
  int   ciclo;              // Duração do periodo de cultivo
  int   periodo;            // Sequência semanal para rega
  int   horarioRega;        // Horário de rega
  int   intervaloRega[2];   // Duração da rega
  int   qntdPlantas;        // Para calcular volume
};

struct plantDataFile ficha[idMax];


// copiar estrutura do projeto: Gerenciamento de Usuário