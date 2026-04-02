// defines in_addr structure
#include <arpa/inet.h>
// contains constants and structures
// needed for internet domain addresses
#include <netinet/in.h>
// standard input and output library
#include <stdio.h>
// contains string functions
#include <string.h>
// for socket creation
#include <sys/socket.h>
// contains conb1ucts that facilitate getting
// information about files attributes.
#include <sys/stat.h>
// contains a number of basic derived types
// that should be used whenever appropriate
#include <sys/types.h>
int main()
{
  struct sockaddr_in client, server;
  int s, n, sock;
  char id[20];
  float basic, hra, da, pt, epf, net_salary;
  // creating socket
  s = socket(AF_INET, SOCK_STREAM, 0);
  // assign IP, PORT
  server.sin_family = AF_INET;
  // this is the port number of running server
  server.sin_port = 2000;
  server.sin_addr.s_addr = inet_addr("127.0.0.1");
  // Binding newly created socket
  // to given IP and verification
  bind(s, (struct sockaddr *)&server, sizeof server);
  listen(s, 1);
  n = sizeof client;
  sock = accept(s, (struct sockaddr *)&client, &n);
  for (;;)
  {
    recv(sock, id, sizeof(id), 0);
    recv(sock, &basic, sizeof(basic), 0);
    // whenever a request from a client came.
    // It will be processed here.
    printf("---------------------------------------------------------------------");
    printf("\n The ID of employee received is: %s \n", id);
    printf("\n The Basic salary of employee received is: %.2f \n", basic);
    hra = basic * (17 / 100.0);
    da = basic * (30 / 100.0);
    pt = 5000; // fixed by the company
    epf = basic * (10 / 100.0);
    printf(" hra: %.2f \n", hra);
    printf(" da: %.2f \n", da);
    printf(" pt: %.2f \n", pt);
    printf(" epf: %.2f \n", epf);
    net_salary = basic + hra + da - pt - epf;
    send(sock, &id, sizeof(id), 0);
    send(sock, &net_salary, sizeof(net_salary), 0);
    // break;
  }
  close(sock);
  // close the socket
  close(s);
  return 0;
}
