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

    printf("Bem_Vindes ao Login!\n");
    printf("1. Novo Usuario ou 2. Login\n");
    scanf("%d",&resposta);
    if (resposta == 2){
        printf("CPF:");
        scanf("%d",&cpf);
        printf("SENHA: ");
        scanf("%d",&senha);
        //if de vereficar se o cadastro esta correto para o login, caso sim mostrar o console novamente!
        // if para novo login e colocar-lo no arquivo e chamar novamente o login
    }

}
int Saldo(){
    printf("^^^^^^^^^^^^^^^^^^Carteira de investimentos^^^^^^^^^^^^^^^^^^^^^^\n");
    printf("Saldo R$: \n");
    printf("Saldo Bitcoins: \n");
    printf("Saldo Etherum: \n");
    printf("Saldo Ripple: \n");


}

int Deposito(){

}
int Saque(){

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
int ComprarC(){

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
    float cotacao1 =  (bitcoin * (numero_aleatorio % variacao))/ 100; // arrumar casas decimais e o valor em dele
    float coatcao2 = (etherum * (numero_aleatorio % variacao))/ 100;
    float cotacao3 = (ripple * (numero_aleatorio % variacao))/ 100;

    printf("^^^^^^^^^^^^^^^Cotação Atualizada^^^^^^^^^^^^^^^^^\n");
    printf("Bitcoin: %f\n", cotacao1);
    printf("Etherum: %f\n", coatcao2);
    printf("Ripple: %f\n", cotacao3);

    return cotacao1; coatcao2; cotacao3;  

}

int main(){
    int escolha;
    srand(time(NULL));//pega o horario do computador para gerar cada vez que rodar um numero diferente do outro

    Console();
    printf("Opção:");
    scanf("%d", &escolha);
    switch(escolha) {
        case 1:
            Login();
        case 2:
            Saldo();
        case 3:
            Extrato();
        case 4:
            Deposito();
        case 5:
            Saque();
        case 6:
            ComprarC();
        case 7:
            VenderC();
        case 8:
            Atualizar();
        case 9:
            break;
    }

    return 0;
}

