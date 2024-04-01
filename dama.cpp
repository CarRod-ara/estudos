#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
void vidas (int &vi, int &DVi);
void R1 (int &r1, int &vi1);
void R2 (int &r2, int &vi2);
void R3 (int &r3, int &vi3);
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    int u;
	u=0;
	int DV;//Pontos de vida
	
    {
		cout<<"oi anjo, antes de mais nada digite esse link no seu navegador 'u':"<<endl<<endl;
		cout<<"https://goo.gl/JO2GHQ"<<endl<<endl;
		cout<<"já colocou? se sim pressione '1', depois pressione apenas uma vez 'enter'"<<endl<<endl;
		cin>>u;
		cout<<endl;
		for (int i=1;i==1;i)
		{		
			if (u==1)
			{
				DV=3;
				cout<<"sei que é bobo, mas gostaria que soubesse que você é a garota mais linda do "<<endl;
				cout<<"universo e que eu sou o cara mais feliz do universo por ter a honra de te "<<endl;
				cout<<"namorar, mas esse pequeno presente será composto de um joguinho de perguntas"<<endl;
				cout<<"você vai ter 3 vidas e terá sempre 3 opções. vamos começar? sim=1 ou não=2"<<endl;
				int v;// Sendo utilizado como "verdadeiro ou falso"
				cin>>v;
				if (v==1)
				{
					cout<<"I - Qual dia te pedi em namoro?"<<endl;
					cout<<"1) 11/01/2015"<<endl;
					cout<<"2) 15/02/2015"<<endl;
					cout<<"3) 14/02/2016"<<endl;
					cout<<"número: ";
					int r;
					cin>>r;
					R2(r,v);
					vidas(v, DV);
					cout<<endl<<endl;
					if(v==1 || DV>0)
					{
						cout<<"II - Qual foi a primeira música que tocou no primeiro vídeo que eu te fiz?"<<endl;
						cout<<"1) find a way - safety suit"<<endl;
						cout<<"2) so far gone - thousand foot krutch"<<endl;
						cout<<"3) kiss me slowly - secondhand serenade"<<endl;
						cout<<"número: ";
						cin>>r;
						R3(r,v);
						vidas(v, DV);
						cout<<endl<<endl;
						if(v==1 || DV>0)
						{
							cout<<"III - Quais foram seus dois presentes do nosso segundo mês de namoro?"<<endl;
							cout<<"1) um cordão e uma carta"<<endl;
							cout<<"2) um cordão e um travesseiro"<<endl;
							cout<<"3) um travesseiro e uma carta"<<endl;
							cout<<"número: ";
							cin>>r;
							R1(r,v);
							vidas(v, DV);
							cout<<endl<<endl;
							if(v==1 || DV>0)
							{
								cout<<"IV - Qual foi o dia que nos conhecemos pessoalmente?"<<endl;
								cout<<"1) 28/12/2015"<<endl;
								cout<<"2) 29/12/2016"<<endl;
								cout<<"3) XXIX/XII/MXVI"<<endl;
								cout<<"número: ";
								cin>>r;
								R3(r,v);
								vidas(v, DV);
								cout<<endl<<endl;
								if(v==1 || DV>0)
								{
									cout<<"V - Qual o dia que eu te adicionei e puxei assunto a primeira vez contigo?"<<endl;
									cout<<"1) 14/02/2015"<<endl;
									cout<<"2) 11/02/2015"<<endl;
									cout<<"3) 15/02/2015"<<endl;
									cout<<"número: ";
									cin>>r;
									R2(r,v);
									vidas(v, DV);
									cout<<endl<<endl;
									if(v==1 || DV>0)
									{
										cout<<"VI - Qual seu primeiro e seu último nick na pagina Soul Eater?"<<endl;
										cout<<"1) ~shaula e ~elizabeth"<<endl;
										cout<<"2) ~elizabeth e ~marie"<<endl;
										cout<<"3) ~shaula e ~marie"<<endl;
										cout<<"número: ";
										cin>>r;
										R3(r,v);
										vidas(v, DV);
										cout<<endl<<endl;
										if(v==1 || DV>0)
										{
											cout<<"VII - Qual o significado do kanji da tornozeleira que eu te dei?"<<endl;
											cout<<"1) sabedoria"<<endl;
											cout<<"2) amor"<<endl;
											cout<<"3) força"<<endl;
											cout<<"número: ";
											cin>>r;
											R2(r,v);
											vidas(v, DV);
											cout<<endl<<endl;
											if(v==1 || DV>0)
											{
												cout<<"VIII - Quais palavras eu quero te dizer pelo resto da minha vida?"<<endl;
												cout<<"1) batata é vida"<<endl;
												cout<<"2) eu te amo minha anjinha"<<endl;
												cout<<"3) batata é amor"<<endl;
												cout<<"número: ";
												cin>>r;
												R2(r,v);
												vidas(v, DV);
												cout<<endl<<endl;
												if(v==1 || DV>0)
												{
													cout<<"IX - Qual meu signo e meu signo chinês?"<<endl;
													cout<<"1) aries e carneiro"<<endl;
													cout<<"2) aquario e rato"<<endl;
													cout<<"3) aries e tigre"<<endl;
													cout<<"número: ";
													cin>>r;
													R3(r,v);
													vidas(v, DV);
													cout<<endl<<endl;
													if(v==1 || DV>0)
													{
														cout<<"X - Complete: 'Duvide da verdade, mas não duvide de ___'"<<endl;
														cout<<"1) você"<<endl;
														cout<<"2) mim"<<endl;
														cout<<"3) eu"<<endl;
														cout<<"número: ";
														cin>>r;
														R2(r,v);
														vidas(v, DV);
														cout<<endl<<endl;	
														if(v==1 || DV>0)
														{
															cout<<"R - Qual meu anime favorito?"<<endl;
															cout<<"1) Steins;gate"<<endl;
															cout<<"2) Hyouka"<<endl;
															cout<<"3) chuunibyou demo ga shitai"<<endl;
															cout<<"número: ";
															cin>>r;
															cout<<" Brincadeira qualquer uma está certa 'u' te amo <3"<<endl<<endl<<endl;
															cout<<"_____________***Congratulations***________________"<<endl;
															cout<<"Eu nunca poderei agradecer o suficiente pelo o que"<<endl;
															cout<<"Você se tornou para mim minha vida, a garota com o"<<endl;
															cout<<"Sorriso mais lindo do universo, que eu daria tudo "<<endl;
															cout<<"Para o admirar mesmo que por mais um segundo, por "<<endl;
															cout<<"Mais que ele custasse muito ainda assim para mim  "<<endl;
															cout<<"Seria nada comparado ao ecstasy de poder te fazer "<<endl;
															cout<<"Feliz. E eu sempre irei buscar por isso sem me    "<<endl;
															cout<<"Importar com mais nada neste mundo, pois a melhor "<<endl;
															cout<<"Coisa do mundo é saber que faço a melhor namorada "<<endl;
															cout<<"E futura esposa do mundo, feliz mesmo que seja com"<<endl;
															cout<<"Algo bobo que eu faço ou algo de outro mundo. pois"<<endl;
															cout<<"Sejam injustiças, momentos românticos ou safados da"<<endl;
															cout<<"minha parte, você merece... é a única que merece  "<<endl;
															cout<<"sempre. minha anjinha eu te amo e muito obrigado  "<<endl;
															cout<<"Tudo sempre, por ser um tudo de um garoto que já  "<<endl;
															cout<<"Foi um nada, para esta sombra que recebeu tua luz "<<endl;
															cout<<"E este céu imenso que foi preenchido por tuas estrelas."<<endl;
															cout<<"........abrir algo bobo? (sim=1 ou não=2)........."<<endl;
															int bobo;
															cin>>bobo;
															if(bobo==1)
															{
																cout<<".......CDCDCDCDC..................DCDCDCDCD......."<<endl;
																cout<<".....CDCDCDCDCDCDC..............DCDCDCDCDCDCD....."<<endl;
																cout<<"..CDCDCDCDCDCDCDCDCDCD......CDCDCDCDCDCDCDCDCDCD.."<<endl;
																cout<<".CDCDCDCDCDCDCDCDCDCDCDC..DCDCDCDCDCDCDCDCDCDCDCD."<<endl;
																cout<<"CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD"<<endl;
																cout<<".CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD."<<endl;
																cout<<"..CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD.."<<endl;
																cout<<"....CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD...."<<endl;
																cout<<"......CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD......"<<endl;
																cout<<".......DCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDC......."<<endl;
																cout<<"........CDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCDCD........"<<endl;
																cout<<"..........CDCDCDCDCDCDCDCDCDCDCDCDCDCDCD.........."<<endl;
																cout<<"............CDCDCDCDCDCDCDCDCDCDCDCDCD............"<<endl;
																cout<<"..............CDCDCDCDCDCDCDCDCDCDCD.............."<<endl;
																cout<<"...............DCDCDCDCDCDCDCDCDCDC..............."<<endl;
																cout<<".................DCDCDCDCDCDCDCDC................."<<endl;
																cout<<"....................CDCDCDCDCD...................."<<endl;
																cout<<"......................CDCDCD......................"<<endl;
																cout<<"........................CD........................"<<endl;
															}
															
															cout<<endl<<endl;		
														}	
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				cout<<"amor poxa ;-;"<<endl<<endl;		
			}
			cout<<"jogar novamente? (sim=1 ou não=2) ";
			cin>>i;
			
		}
	}
}

void vidas (int &vi, int &DVi)
{
	if(vi==1)
	{
		cout<<"Restam "<<DVi<<" vida(s)"<<endl;
	}
	else
	{
		DVi--;
		cout<<"Restam "<<DVi<<" vida(s)"<<endl;							
	}	
}

void R1 (int &r1, int &vi1)
{
	if (r1==1)
		vi1=1;
	else
	{
		vi1=0;
		cout<<"Errado era a 1ª - ";
	}
}

void R2 (int &r2, int &vi2)
{
	if (r2==2)
		vi2=1;
	else
	{
		vi2=0;
		cout<<"Errado era a 2ª - ";
	}
}

void R3 (int &r3, int &vi3)
{
	if (r3==3)
		vi3=1;
	else
	{
		vi3=0;
		cout<<"Errado era a 3ª - ";
	}
}