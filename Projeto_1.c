#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Bitcoin:​
// Cobra uma taxa de 2% na compra de bitcoin​
// Cobra uma taxa de 3% na venda de bitcoin​

// Ethereum:​
// Cobra uma taxa de 1% na compra de ethereum​
// Cobra uma taxa de 2% na venda de ethereum​

// Ripple:​
// Cobra uma taxa de 1% na compra de ripple​
// Cobra uma taxa de 1% na venda de ripple



// 1.Efetuar login​ usando CPF e senha: o menu principal deve aparecer apenas se estas informações estiverem corretas

// 2.Consultar saldo de reais, bitcoin, ethereum e ripple da carteira de investimentos​: exibir dados do usuário e os saldos 

// 3.Consultar extrato de operações da carteira de investimentos​: salvar em arquivo texto os dados do usuário e todas as informações de transações (data, valores e taxas)

// 4.Depositar reais na carteira de investimento​: usuário deve informar apenas os valores

// 5.Sacar reais da carteira de investimento​: usuário deve informar o valor do saque e a senha deve ser validada antes de realizar o saque

// 6.Comprar criptomoedas: usuário deve informar valor da compra e senha para validação. caso os dados estiverem corretos e a compra for possível, exibir as informações da compra (incluindo a taxa cobrada) e pedir a confirmação do usuário

// 7.Vender criptomoedas: caso os dados estiverem corretos, exibir as informações da venda (incluindo a taxa cobrada) e pedir a confirmação do usuário

int Login(){
    int resposta, cpf, senha;
        printf("CPF:");
        scanf("%d",&cpf);
        printf("SENHA: ");
        scanf("%d",&senha);
    return 0;
}

int Novo_usuario(){
    int resposta, cpf, senha, novo_cpf, nova_senha;

    printf("Bem_Vindes ao Login!\n");
    printf("1. Novo Usuario ou 2. Login\n");
    printf("Digite: ");
    printf(" ");
    scanf("%d",&resposta);

    if (resposta == 1){
        printf("           OLÁ NOVO USUÁRIO           \n");
        
        // FILE *fptr;
        // char ch;
        // fptr = fopen("Novo_Usuario.txt", "w"); INICIEI O ARUIVO DO USUARIO

        printf("Digite seu CPF: ");
        scanf("%d", &novo_cpf);
        printf("Digite sua SENHA: ");
        scanf("%d", &nova_senha);

        printf("Agora faça o Login!\n");
        Login();

    }

    if(resposta == 2){
        Login();
    }
    return 0;

}
float Deposito(){
    float valor_dep;
    printf("^^^^^^^^^^^^^^^^^^Deposito^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Qual seria o valor de deposito: ");
    scanf("%f", &valor_dep);
    return valor_dep;

}


float Saque(float valor_Total){
    float valor_saq_pre, valor_saq, dinh;
    int senha_conf;
    dinh = Saldo(valor_Total);
    printf("^^^^^^^^^^^^^^^^^^Saque^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Qual seria o valor de deposito: ");
    scanf("%f", &valor_saq_pre);
    printf("Confirme a senha: ");
    scanf("%d", &senha_conf);
    //colocar a comparação da senha inserida com a do arquivo
//      while (1){
//      if (senha_conf != senha_do_arquivo){
//          printf("Senha incorreta!\n");
//          printf("Digite novamente: ");
//          scanf("%d", &senha_conf);
//      }else{if(dinh >= valor_saq_pre){
//          valor_saq = valor_saq_pre;
//          return valor_saq;
//          break;
//          }else{
//             printf("Saldo Insuficiente!");
//             prinft("Tente Novamente.");
//             break;
//         }

//      }
//  }
}
int Console(){
    printf("````````````````````````````````````````````````````````````````````````````````````````````\n");
    printf("Console de Opções: \n");
    printf("1.Efetuar Login\n");
    printf("2.Consultar Saldo\n");
    printf("3.Consultar extrato\n");
    printf("4.Deposito\n");
    printf("5.Sacar\n");
    printf("6.Comprar Criptomoedas\n");
    printf("7.Vender Criptomoedas\n");
    printf("8.Atualizar\n");
    printf("9.Sair\n");
    printf("````````````````````````````````````````````````````````````````````````````````````````````\n");
}

int Extrato(){

}
float ComprarC(valor_Total){
    float valorCompra, taxa, totalPago, saldo_reais, saldo_bitcoin, saldo_ethereum, saldo_ripple, dinh; // valores da compra e das taxas
    int moedaEscolhida; // moeda selecionada
    dinh = Saldo(valor_Total);

    printf("^^^^^^^^^^^^^^^^^^Compra de Cripitomoedas^^^^^^^^^^^^^^^^^^^^^^\n");
    // pede qual moeda
    printf("Selecione a moeda para compra: \n");
    printf("1. Bitcoin\n2. Ethereum\n3. Ripple\n");
    printf("Digite o número: ");
    scanf("%d", &moedaEscolhida);
    printf("Valor a gastar: ");
    scanf("%f", &valorCompra);

    // processa a compra com base na moeda escolhida
    switch (moedaEscolhida) {
        case 1: // bit
            taxa = valorCompra * 0.02; // taxa de 2%
            totalPago = valorCompra + taxa; // total a pagar
            if (totalPago <= dinh) { // cerifica saldo
                saldo_reais += totalPago; // atualiza saldo
                saldo_bitcoin += valorCompra; // adiciona bitcoin
                printf("Comprado %.2f Bitcoin! Taxa: %.2f\n", valorCompra, taxa);
                return saldo_reais, saldo_bitcoin;
            } else {
                printf("Saldo insuficiente.\n");
            }
            break;

        case 2: // ethereum
            taxa = valorCompra * 0.01; // Taxa de 1%
            totalPago = valorCompra + taxa;
            if (totalPago <= dinh) {
                saldo_reais += totalPago;
                saldo_ethereum += valorCompra; // adiciona etherem
                printf("Comprado %.2f Ethereum! Taxa: %.2f\n", valorCompra, taxa);
                return saldo_reais, saldo_ethereum;
            } else {
                printf("Saldo insuficiente.\n");
            }
            break;

        case 3: // ripple
            taxa = valorCompra * 0.01; // taxa de 1%
            totalPago = valorCompra + taxa;
            if (totalPago <= dinh) {
                saldo_reais += totalPago;
                saldo_ripple += valorCompra; // adiciona ripple
                printf("Comprado %.2f Ripple! Taxa: %.2f\n", valorCompra, taxa);
                return saldo_reais, saldo_ripple;
            } else {
                printf("Saldo insuficiente.\n");
            }
            break;

        default: // opcao invalida
            printf("Opção não reconhecida.\n");
            break;
    }

    return  saldo_reais, saldo_ripple, saldo_ethereum, saldo_bitcoin;
}


int VenderC(){

}

int Atualizar(){
    float bitcoin =331732.09;
    float ripple =3.03;
    float etherum = 13215.12;
    int max = 5;
    int min = -5;
    int variacao = max - min;// o limite desses numeros
    int numero_aleatorio = rand();//gerando numeros aleatorios

    // adicionando a variação para o valor da moeda
    float cotacao1 =  (bitcoin * (numero_aleatorio % variacao))/10; 
    float coatcao2 = (etherum * (numero_aleatorio % variacao))/10;
    float cotacao3 = (ripple * (numero_aleatorio % variacao))/10; //reavaliar a conta

    printf("^^^^^^^^^^^^^^^Cotação Atualizada^^^^^^^^^^^^^^^^^\n");
    printf("Bitcoin: %.2f\n", cotacao1);
    printf("Etherum: %.2f\n", coatcao2);
    printf("Ripple: %.2f\n", cotacao3);

    return cotacao1; coatcao2; cotacao3;  

}
float Saldo(float valor_dep, float valor_saq, float saldo_reais, float saldo_ripple, float saldo_ethereum, float saldo_bitcoin){
    float valor_teste, valor_Total, dinheiro_depositado, dinheiro_sacado,dinheiro_cripto;
    dinheiro_depositado = Deposito(valor_dep);
    dinheiro_sacado = Saque(valor_saq);
    dinheiro_cripto = ComprarC(saldo_reais);


    valor_Total = dinheiro_depositado - (dinheiro_sacado) - (dinheiro_cripto);
    
    printf("^^^^^^^^^^^^^^^^^^Carteira de investimentos^^^^^^^^^^^^^^^^^^^^^^\n");

    printf("Saldo R$: \n");
    printf("Saldo Bitcoins:\n");
    printf("Saldo Etherum: \n");
    printf("Saldo Ripple: \n");

    return valor_Total;
}


int main(){
    srand(time(NULL));//pega o horario do computador para gerar cada vez que rodar um numero diferente do outro
    Novo_usuario();

    
    
    return 0;
}
