#include <stdio.h>

int main() {
  char plan;
  int num_enf_leves, num_enf_medias, num_enf_graves;
  int total_enfermedades;
  float descuento_plan, descuento_cliente_regular;
  float costo_enf_leves = 10000.0, costo_enf_medias = 50000.0, costo_enf_graves = 100000.0;
  float costo_total, descuento_total, pago_final;

  printf("Ingrese el plan de salud del paciente (F para Fonasa, I para Isapre):\n ");
  scanf("%c", &plan);

  printf("Ingrese el numero de enfermedades leves, medias y graves del paciente, separados por espacios: ");
  scanf("%d%d%d", &num_enf_leves, &num_enf_medias, &num_enf_graves);

  total_enfermedades = num_enf_leves + num_enf_medias + num_enf_graves;

  if (plan == 'F') {
    if (num_enf_graves > 0) {
      descuento_plan = 0.8;
    } else if (num_enf_medias > 0) {
      descuento_plan = 0.7;
    } else {
      descuento_plan = 0.6;
    }
  }else{
    if (num_enf_leves > 0) {
      descuento_plan = 0.9;
    } else if (num_enf_medias > 0) {
      descuento_plan = 0.7;
    } else {
      descuento_plan = 0.6;
    }
  }

  if ((num_enf_leves >= 10 && num_enf_medias >= 2) || (num_enf_medias >= 5 && num_enf_graves >= 1)) {
    descuento_cliente_regular = 0.05;
  } else {
    descuento_cliente_regular = 0.0;
  }

  costo_total = num_enf_leves * costo_enf_leves + num_enf_medias * costo_enf_medias + num_enf_graves * costo_enf_graves;
  descuento_total = descuento_plan * costo_total + descuento_cliente_regular * costo_total;
  pago_final = costo_total - descuento_total;

  printf("El costo total de las enfermedades es: %.0f\n", costo_total);
  printf("El descuento total es: %.0f\n", descuento_total);
  printf("El pago final del paciente es: %.0f\n", pago_final);

  return 0;
}
