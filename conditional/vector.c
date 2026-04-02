#include <stdio.h>
#include <string.h>
int crc(char *ip, char *op, char *poly, int mode)
{
  strcpy(op, ip);
  if (mode)
  {
    for (int i = 1; i < strlen(poly); i++)
      strcat(op, "0");
  }
  /* Perform XOR on the msg with the selected polynomial */
  for (int i = 0; i < strlen(ip); i++)
  {
    if (op[i] == '1')
    {
      for (int j = 0; j < strlen(poly); j++)
      {
        if (op[i + j] == poly[j])
          op[i + j] = '0';
        else
          op[i + j] = '1';
      }
    }
  }
  /* check for errors. return 0 if error detected */
  for (int i = 0; i < strlen(op); i++)
    if (op[i] == '1')
      return 0;
  return 1;
}
int main()
{
  char ip[50], op[50], recv[50];

  char poly[] = "10001000000100001";
  printf(" Enter the input message in binary: ");
  scanf("%s", &ip);
  crc(ip, op, poly, 1);
  printf(" The transmitted message is: %s%s \n", ip, (op + strlen(ip)));
  printf("\n Enter the recevied message in binary: ");
  scanf("%s", &recv);
  if (crc(recv, op, poly, 0))
    printf(" No error in data\n");
  else
    printf(" Error in data transmission has occurred\n");
  return 0;
}



























#include <stdio.h>
#include <string.h>

// Function to perform CRC check
int crc(char *ip, char *op, char *poly, int mode) {
  strcpy(op, ip);
  if (mode) {
    for (int i = 1; i < strlen(poly); i++) {
      strcat(op, "0");
    }
  }

  // Perform XOR on the message with the selected polynomial
  for (int i = 0; i < strlen(ip); i++) {
    if (op[i] == '1') {
      for (int j = 0; j < strlen(poly); j++) {
        if (op[i + j] == poly[j]) {
          op[i + j] = '0';
        } else {
          op[i + j] = '1';
        }
      }
    }
  }

  // Check for errors. Return 0 if error detected
  for (int i = 0; i < strlen(op); i++) {
    if (op[i] == '1') {
      return 0;
    }
  }
  return 1;
}

int main() {
  char ip[50], op[50], recv[50];

  char poly[] = "10001000000100001";
  printf(" Enter the input message in binary: ");
  scanf("%s", ip); // Correction: Removed & before ip
  crc(ip, op, poly, 1);
  printf(" The transmitted message is: %s%s \n", ip, (op + strlen(ip)));
  printf("\n Enter the received message in binary: ");
  scanf("%s", recv); // Correction: Removed & before recv

  if (crc(recv, op, poly, 0)) {
    printf(" No error in data\n");
  } else {
    printf(" Error in data transmission has occurred\n");
  }
  return 0;
}

















































#include<sys/types.h>
 #include<sys/socket.h>
 #include<stdio.h>
 #include<unistd.h>
 #include<netdb.h>
 #include<netinet/in.h>
 #include<string.h>
 #include<arpa/inet.h>
 #define MAX 1000
 int main()
{
 int serverDescriptor=socket(AF_INET,SOCK_DGRAM,0);
    char buffer[MAX],message[MAX];
struct sockaddr_in cliaddr, serverAddress;
 socklen_t serverLength = sizeof(serverAddress);
  bzero(&serverAddress,sizeof(serverAddress));
    serverAddress.sin_family=AF_INET;
    serverAddress.sin_addr.s_addr=inet_addr("127.0.0.1");
    serverAddress.sin_port=htons(9976);
bind(serverDescriptor, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
 while(1)
{
  printf("\nCOMMAND FOR EXECUTION...");
        fgets(buffer,sizeof(buffer),stdin);
sendto(serverDescriptor, buffer, sizeof(buffer), 0, (struct sockaddr*)&serverAddress, serverLength);

   printf("\nDataSent!");

recvfrom(serverDescriptor, message, sizeof(message), 0, (struct sockaddr*)&serverAddress, &serverLength);
        printf("UDPSERVER:%s",message);
}
return 0;
}

