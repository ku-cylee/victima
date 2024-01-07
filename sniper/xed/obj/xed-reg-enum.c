/// @file xed-reg-enum.c

// This file was automatically generated.
// Do not edit this file.

#include <string.h>
#include <assert.h>
#include "xed-reg-enum.h"

typedef struct {
    const char* name;
    xed_reg_enum_t value;
} name_table_xed_reg_enum_t;
static const name_table_xed_reg_enum_t name_array_xed_reg_enum_t[] = {
{"INVALID", XED_REG_INVALID},
{"BNDCFGU", XED_REG_BNDCFGU},
{"BNDSTATUS", XED_REG_BNDSTATUS},
{"BND0", XED_REG_BND0},
{"BND1", XED_REG_BND1},
{"BND2", XED_REG_BND2},
{"BND3", XED_REG_BND3},
{"CR0", XED_REG_CR0},
{"CR1", XED_REG_CR1},
{"CR2", XED_REG_CR2},
{"CR3", XED_REG_CR3},
{"CR4", XED_REG_CR4},
{"CR5", XED_REG_CR5},
{"CR6", XED_REG_CR6},
{"CR7", XED_REG_CR7},
{"CR8", XED_REG_CR8},
{"CR9", XED_REG_CR9},
{"CR10", XED_REG_CR10},
{"CR11", XED_REG_CR11},
{"CR12", XED_REG_CR12},
{"CR13", XED_REG_CR13},
{"CR14", XED_REG_CR14},
{"CR15", XED_REG_CR15},
{"DR0", XED_REG_DR0},
{"DR1", XED_REG_DR1},
{"DR2", XED_REG_DR2},
{"DR3", XED_REG_DR3},
{"DR4", XED_REG_DR4},
{"DR5", XED_REG_DR5},
{"DR6", XED_REG_DR6},
{"DR7", XED_REG_DR7},
{"FLAGS", XED_REG_FLAGS},
{"EFLAGS", XED_REG_EFLAGS},
{"RFLAGS", XED_REG_RFLAGS},
{"AX", XED_REG_AX},
{"CX", XED_REG_CX},
{"DX", XED_REG_DX},
{"BX", XED_REG_BX},
{"SP", XED_REG_SP},
{"BP", XED_REG_BP},
{"SI", XED_REG_SI},
{"DI", XED_REG_DI},
{"R8W", XED_REG_R8W},
{"R9W", XED_REG_R9W},
{"R10W", XED_REG_R10W},
{"R11W", XED_REG_R11W},
{"R12W", XED_REG_R12W},
{"R13W", XED_REG_R13W},
{"R14W", XED_REG_R14W},
{"R15W", XED_REG_R15W},
{"EAX", XED_REG_EAX},
{"ECX", XED_REG_ECX},
{"EDX", XED_REG_EDX},
{"EBX", XED_REG_EBX},
{"ESP", XED_REG_ESP},
{"EBP", XED_REG_EBP},
{"ESI", XED_REG_ESI},
{"EDI", XED_REG_EDI},
{"R8D", XED_REG_R8D},
{"R9D", XED_REG_R9D},
{"R10D", XED_REG_R10D},
{"R11D", XED_REG_R11D},
{"R12D", XED_REG_R12D},
{"R13D", XED_REG_R13D},
{"R14D", XED_REG_R14D},
{"R15D", XED_REG_R15D},
{"RAX", XED_REG_RAX},
{"RCX", XED_REG_RCX},
{"RDX", XED_REG_RDX},
{"RBX", XED_REG_RBX},
{"RSP", XED_REG_RSP},
{"RBP", XED_REG_RBP},
{"RSI", XED_REG_RSI},
{"RDI", XED_REG_RDI},
{"R8", XED_REG_R8},
{"R9", XED_REG_R9},
{"R10", XED_REG_R10},
{"R11", XED_REG_R11},
{"R12", XED_REG_R12},
{"R13", XED_REG_R13},
{"R14", XED_REG_R14},
{"R15", XED_REG_R15},
{"AL", XED_REG_AL},
{"CL", XED_REG_CL},
{"DL", XED_REG_DL},
{"BL", XED_REG_BL},
{"SPL", XED_REG_SPL},
{"BPL", XED_REG_BPL},
{"SIL", XED_REG_SIL},
{"DIL", XED_REG_DIL},
{"R8B", XED_REG_R8B},
{"R9B", XED_REG_R9B},
{"R10B", XED_REG_R10B},
{"R11B", XED_REG_R11B},
{"R12B", XED_REG_R12B},
{"R13B", XED_REG_R13B},
{"R14B", XED_REG_R14B},
{"R15B", XED_REG_R15B},
{"AH", XED_REG_AH},
{"CH", XED_REG_CH},
{"DH", XED_REG_DH},
{"BH", XED_REG_BH},
{"ERROR", XED_REG_ERROR},
{"RIP", XED_REG_RIP},
{"EIP", XED_REG_EIP},
{"IP", XED_REG_IP},
{"K0", XED_REG_K0},
{"K1", XED_REG_K1},
{"K2", XED_REG_K2},
{"K3", XED_REG_K3},
{"K4", XED_REG_K4},
{"K5", XED_REG_K5},
{"K6", XED_REG_K6},
{"K7", XED_REG_K7},
{"MMX0", XED_REG_MMX0},
{"MMX1", XED_REG_MMX1},
{"MMX2", XED_REG_MMX2},
{"MMX3", XED_REG_MMX3},
{"MMX4", XED_REG_MMX4},
{"MMX5", XED_REG_MMX5},
{"MMX6", XED_REG_MMX6},
{"MMX7", XED_REG_MMX7},
{"SSP", XED_REG_SSP},
{"IA32_U_CET", XED_REG_IA32_U_CET},
{"MXCSR", XED_REG_MXCSR},
{"STACKPUSH", XED_REG_STACKPUSH},
{"STACKPOP", XED_REG_STACKPOP},
{"GDTR", XED_REG_GDTR},
{"LDTR", XED_REG_LDTR},
{"IDTR", XED_REG_IDTR},
{"TR", XED_REG_TR},
{"TSC", XED_REG_TSC},
{"TSCAUX", XED_REG_TSCAUX},
{"MSRS", XED_REG_MSRS},
{"FSBASE", XED_REG_FSBASE},
{"GSBASE", XED_REG_GSBASE},
{"X87CONTROL", XED_REG_X87CONTROL},
{"X87STATUS", XED_REG_X87STATUS},
{"X87TAG", XED_REG_X87TAG},
{"X87PUSH", XED_REG_X87PUSH},
{"X87POP", XED_REG_X87POP},
{"X87POP2", XED_REG_X87POP2},
{"X87OPCODE", XED_REG_X87OPCODE},
{"X87LASTCS", XED_REG_X87LASTCS},
{"X87LASTIP", XED_REG_X87LASTIP},
{"X87LASTDS", XED_REG_X87LASTDS},
{"X87LASTDP", XED_REG_X87LASTDP},
{"CS", XED_REG_CS},
{"DS", XED_REG_DS},
{"ES", XED_REG_ES},
{"SS", XED_REG_SS},
{"FS", XED_REG_FS},
{"GS", XED_REG_GS},
{"TMP0", XED_REG_TMP0},
{"TMP1", XED_REG_TMP1},
{"TMP2", XED_REG_TMP2},
{"TMP3", XED_REG_TMP3},
{"TMP4", XED_REG_TMP4},
{"TMP5", XED_REG_TMP5},
{"TMP6", XED_REG_TMP6},
{"TMP7", XED_REG_TMP7},
{"TMP8", XED_REG_TMP8},
{"TMP9", XED_REG_TMP9},
{"TMP10", XED_REG_TMP10},
{"TMP11", XED_REG_TMP11},
{"TMP12", XED_REG_TMP12},
{"TMP13", XED_REG_TMP13},
{"TMP14", XED_REG_TMP14},
{"TMP15", XED_REG_TMP15},
{"st(0)", XED_REG_ST0},
{"st(1)", XED_REG_ST1},
{"st(2)", XED_REG_ST2},
{"st(3)", XED_REG_ST3},
{"st(4)", XED_REG_ST4},
{"st(5)", XED_REG_ST5},
{"st(6)", XED_REG_ST6},
{"st(7)", XED_REG_ST7},
{"XCR0", XED_REG_XCR0},
{"XMM0", XED_REG_XMM0},
{"XMM1", XED_REG_XMM1},
{"XMM2", XED_REG_XMM2},
{"XMM3", XED_REG_XMM3},
{"XMM4", XED_REG_XMM4},
{"XMM5", XED_REG_XMM5},
{"XMM6", XED_REG_XMM6},
{"XMM7", XED_REG_XMM7},
{"XMM8", XED_REG_XMM8},
{"XMM9", XED_REG_XMM9},
{"XMM10", XED_REG_XMM10},
{"XMM11", XED_REG_XMM11},
{"XMM12", XED_REG_XMM12},
{"XMM13", XED_REG_XMM13},
{"XMM14", XED_REG_XMM14},
{"XMM15", XED_REG_XMM15},
{"XMM16", XED_REG_XMM16},
{"XMM17", XED_REG_XMM17},
{"XMM18", XED_REG_XMM18},
{"XMM19", XED_REG_XMM19},
{"XMM20", XED_REG_XMM20},
{"XMM21", XED_REG_XMM21},
{"XMM22", XED_REG_XMM22},
{"XMM23", XED_REG_XMM23},
{"XMM24", XED_REG_XMM24},
{"XMM25", XED_REG_XMM25},
{"XMM26", XED_REG_XMM26},
{"XMM27", XED_REG_XMM27},
{"XMM28", XED_REG_XMM28},
{"XMM29", XED_REG_XMM29},
{"XMM30", XED_REG_XMM30},
{"XMM31", XED_REG_XMM31},
{"YMM0", XED_REG_YMM0},
{"YMM1", XED_REG_YMM1},
{"YMM2", XED_REG_YMM2},
{"YMM3", XED_REG_YMM3},
{"YMM4", XED_REG_YMM4},
{"YMM5", XED_REG_YMM5},
{"YMM6", XED_REG_YMM6},
{"YMM7", XED_REG_YMM7},
{"YMM8", XED_REG_YMM8},
{"YMM9", XED_REG_YMM9},
{"YMM10", XED_REG_YMM10},
{"YMM11", XED_REG_YMM11},
{"YMM12", XED_REG_YMM12},
{"YMM13", XED_REG_YMM13},
{"YMM14", XED_REG_YMM14},
{"YMM15", XED_REG_YMM15},
{"YMM16", XED_REG_YMM16},
{"YMM17", XED_REG_YMM17},
{"YMM18", XED_REG_YMM18},
{"YMM19", XED_REG_YMM19},
{"YMM20", XED_REG_YMM20},
{"YMM21", XED_REG_YMM21},
{"YMM22", XED_REG_YMM22},
{"YMM23", XED_REG_YMM23},
{"YMM24", XED_REG_YMM24},
{"YMM25", XED_REG_YMM25},
{"YMM26", XED_REG_YMM26},
{"YMM27", XED_REG_YMM27},
{"YMM28", XED_REG_YMM28},
{"YMM29", XED_REG_YMM29},
{"YMM30", XED_REG_YMM30},
{"YMM31", XED_REG_YMM31},
{"ZMM0", XED_REG_ZMM0},
{"ZMM1", XED_REG_ZMM1},
{"ZMM2", XED_REG_ZMM2},
{"ZMM3", XED_REG_ZMM3},
{"ZMM4", XED_REG_ZMM4},
{"ZMM5", XED_REG_ZMM5},
{"ZMM6", XED_REG_ZMM6},
{"ZMM7", XED_REG_ZMM7},
{"ZMM8", XED_REG_ZMM8},
{"ZMM9", XED_REG_ZMM9},
{"ZMM10", XED_REG_ZMM10},
{"ZMM11", XED_REG_ZMM11},
{"ZMM12", XED_REG_ZMM12},
{"ZMM13", XED_REG_ZMM13},
{"ZMM14", XED_REG_ZMM14},
{"ZMM15", XED_REG_ZMM15},
{"ZMM16", XED_REG_ZMM16},
{"ZMM17", XED_REG_ZMM17},
{"ZMM18", XED_REG_ZMM18},
{"ZMM19", XED_REG_ZMM19},
{"ZMM20", XED_REG_ZMM20},
{"ZMM21", XED_REG_ZMM21},
{"ZMM22", XED_REG_ZMM22},
{"ZMM23", XED_REG_ZMM23},
{"ZMM24", XED_REG_ZMM24},
{"ZMM25", XED_REG_ZMM25},
{"ZMM26", XED_REG_ZMM26},
{"ZMM27", XED_REG_ZMM27},
{"ZMM28", XED_REG_ZMM28},
{"ZMM29", XED_REG_ZMM29},
{"ZMM30", XED_REG_ZMM30},
{"ZMM31", XED_REG_ZMM31},
{"LAST", XED_REG_LAST},
{0, XED_REG_LAST},
};
static const name_table_xed_reg_enum_t dup_name_array_xed_reg_enum_t[] = {
{"BNDCFG_FIRST", XED_REG_BNDCFG_FIRST},
{"BNDCFG_LAST", XED_REG_BNDCFG_LAST},
{"BNDSTAT_FIRST", XED_REG_BNDSTAT_FIRST},
{"BNDSTAT_LAST", XED_REG_BNDSTAT_LAST},
{"BOUND_FIRST", XED_REG_BOUND_FIRST},
{"BOUND_LAST", XED_REG_BOUND_LAST},
{"CR_FIRST", XED_REG_CR_FIRST},
{"CR_LAST", XED_REG_CR_LAST},
{"DR_FIRST", XED_REG_DR_FIRST},
{"DR_LAST", XED_REG_DR_LAST},
{"FLAGS_FIRST", XED_REG_FLAGS_FIRST},
{"FLAGS_LAST", XED_REG_FLAGS_LAST},
{"GPR16_FIRST", XED_REG_GPR16_FIRST},
{"GPR16_LAST", XED_REG_GPR16_LAST},
{"GPR32_FIRST", XED_REG_GPR32_FIRST},
{"GPR32_LAST", XED_REG_GPR32_LAST},
{"GPR64_FIRST", XED_REG_GPR64_FIRST},
{"GPR64_LAST", XED_REG_GPR64_LAST},
{"GPR8_FIRST", XED_REG_GPR8_FIRST},
{"GPR8_LAST", XED_REG_GPR8_LAST},
{"GPR8h_FIRST", XED_REG_GPR8h_FIRST},
{"GPR8h_LAST", XED_REG_GPR8h_LAST},
{"INVALID_FIRST", XED_REG_INVALID_FIRST},
{"INVALID_LAST", XED_REG_INVALID_LAST},
{"IP_FIRST", XED_REG_IP_FIRST},
{"IP_LAST", XED_REG_IP_LAST},
{"MASK_FIRST", XED_REG_MASK_FIRST},
{"MASK_LAST", XED_REG_MASK_LAST},
{"MMX_FIRST", XED_REG_MMX_FIRST},
{"MMX_LAST", XED_REG_MMX_LAST},
{"MSR_FIRST", XED_REG_MSR_FIRST},
{"MSR_LAST", XED_REG_MSR_LAST},
{"MXCSR_FIRST", XED_REG_MXCSR_FIRST},
{"MXCSR_LAST", XED_REG_MXCSR_LAST},
{"PSEUDO_FIRST", XED_REG_PSEUDO_FIRST},
{"PSEUDO_LAST", XED_REG_PSEUDO_LAST},
{"PSEUDOX87_FIRST", XED_REG_PSEUDOX87_FIRST},
{"PSEUDOX87_LAST", XED_REG_PSEUDOX87_LAST},
{"SR_FIRST", XED_REG_SR_FIRST},
{"SR_LAST", XED_REG_SR_LAST},
{"TMP_FIRST", XED_REG_TMP_FIRST},
{"TMP_LAST", XED_REG_TMP_LAST},
{"X87_FIRST", XED_REG_X87_FIRST},
{"X87_LAST", XED_REG_X87_LAST},
{"XCR_FIRST", XED_REG_XCR_FIRST},
{"XCR_LAST", XED_REG_XCR_LAST},
{"XMM_FIRST", XED_REG_XMM_FIRST},
{"XMM_LAST", XED_REG_XMM_LAST},
{"YMM_FIRST", XED_REG_YMM_FIRST},
{"YMM_LAST", XED_REG_YMM_LAST},
{"ZMM_FIRST", XED_REG_ZMM_FIRST},
{"ZMM_LAST", XED_REG_ZMM_LAST},
{0, XED_REG_LAST},
};

        
xed_reg_enum_t str2xed_reg_enum_t(const char* s)
{
   const name_table_xed_reg_enum_t* p = name_array_xed_reg_enum_t;
   while( p->name ) {
     if (strcmp(p->name,s) == 0) {
      return p->value;
     }
     p++;
   }
        

   {
     const name_table_xed_reg_enum_t* q = dup_name_array_xed_reg_enum_t;
     while( q->name ) {
       if (strcmp(q->name,s) == 0) {
        return q->value;
       }
       q++;
     }
   } 
        

   return XED_REG_INVALID;
}


const char* xed_reg_enum_t2str(const xed_reg_enum_t p)
{
   xed_reg_enum_t type_idx = p;
   if ( p > XED_REG_LAST) type_idx = XED_REG_LAST;
   return name_array_xed_reg_enum_t[type_idx].name;
}

xed_reg_enum_t xed_reg_enum_t_last(void) {
    return XED_REG_LAST;
}
       
/*

Here is a skeleton switch statement embedded in a comment


  switch(p) {
  case XED_REG_INVALID:
  case XED_REG_BNDCFGU:
  case XED_REG_BNDSTATUS:
  case XED_REG_BND0:
  case XED_REG_BND1:
  case XED_REG_BND2:
  case XED_REG_BND3:
  case XED_REG_CR0:
  case XED_REG_CR1:
  case XED_REG_CR2:
  case XED_REG_CR3:
  case XED_REG_CR4:
  case XED_REG_CR5:
  case XED_REG_CR6:
  case XED_REG_CR7:
  case XED_REG_CR8:
  case XED_REG_CR9:
  case XED_REG_CR10:
  case XED_REG_CR11:
  case XED_REG_CR12:
  case XED_REG_CR13:
  case XED_REG_CR14:
  case XED_REG_CR15:
  case XED_REG_DR0:
  case XED_REG_DR1:
  case XED_REG_DR2:
  case XED_REG_DR3:
  case XED_REG_DR4:
  case XED_REG_DR5:
  case XED_REG_DR6:
  case XED_REG_DR7:
  case XED_REG_FLAGS:
  case XED_REG_EFLAGS:
  case XED_REG_RFLAGS:
  case XED_REG_AX:
  case XED_REG_CX:
  case XED_REG_DX:
  case XED_REG_BX:
  case XED_REG_SP:
  case XED_REG_BP:
  case XED_REG_SI:
  case XED_REG_DI:
  case XED_REG_R8W:
  case XED_REG_R9W:
  case XED_REG_R10W:
  case XED_REG_R11W:
  case XED_REG_R12W:
  case XED_REG_R13W:
  case XED_REG_R14W:
  case XED_REG_R15W:
  case XED_REG_EAX:
  case XED_REG_ECX:
  case XED_REG_EDX:
  case XED_REG_EBX:
  case XED_REG_ESP:
  case XED_REG_EBP:
  case XED_REG_ESI:
  case XED_REG_EDI:
  case XED_REG_R8D:
  case XED_REG_R9D:
  case XED_REG_R10D:
  case XED_REG_R11D:
  case XED_REG_R12D:
  case XED_REG_R13D:
  case XED_REG_R14D:
  case XED_REG_R15D:
  case XED_REG_RAX:
  case XED_REG_RCX:
  case XED_REG_RDX:
  case XED_REG_RBX:
  case XED_REG_RSP:
  case XED_REG_RBP:
  case XED_REG_RSI:
  case XED_REG_RDI:
  case XED_REG_R8:
  case XED_REG_R9:
  case XED_REG_R10:
  case XED_REG_R11:
  case XED_REG_R12:
  case XED_REG_R13:
  case XED_REG_R14:
  case XED_REG_R15:
  case XED_REG_AL:
  case XED_REG_CL:
  case XED_REG_DL:
  case XED_REG_BL:
  case XED_REG_SPL:
  case XED_REG_BPL:
  case XED_REG_SIL:
  case XED_REG_DIL:
  case XED_REG_R8B:
  case XED_REG_R9B:
  case XED_REG_R10B:
  case XED_REG_R11B:
  case XED_REG_R12B:
  case XED_REG_R13B:
  case XED_REG_R14B:
  case XED_REG_R15B:
  case XED_REG_AH:
  case XED_REG_CH:
  case XED_REG_DH:
  case XED_REG_BH:
  case XED_REG_ERROR:
  case XED_REG_RIP:
  case XED_REG_EIP:
  case XED_REG_IP:
  case XED_REG_K0:
  case XED_REG_K1:
  case XED_REG_K2:
  case XED_REG_K3:
  case XED_REG_K4:
  case XED_REG_K5:
  case XED_REG_K6:
  case XED_REG_K7:
  case XED_REG_MMX0:
  case XED_REG_MMX1:
  case XED_REG_MMX2:
  case XED_REG_MMX3:
  case XED_REG_MMX4:
  case XED_REG_MMX5:
  case XED_REG_MMX6:
  case XED_REG_MMX7:
  case XED_REG_SSP:
  case XED_REG_IA32_U_CET:
  case XED_REG_MXCSR:
  case XED_REG_STACKPUSH:
  case XED_REG_STACKPOP:
  case XED_REG_GDTR:
  case XED_REG_LDTR:
  case XED_REG_IDTR:
  case XED_REG_TR:
  case XED_REG_TSC:
  case XED_REG_TSCAUX:
  case XED_REG_MSRS:
  case XED_REG_FSBASE:
  case XED_REG_GSBASE:
  case XED_REG_X87CONTROL:
  case XED_REG_X87STATUS:
  case XED_REG_X87TAG:
  case XED_REG_X87PUSH:
  case XED_REG_X87POP:
  case XED_REG_X87POP2:
  case XED_REG_X87OPCODE:
  case XED_REG_X87LASTCS:
  case XED_REG_X87LASTIP:
  case XED_REG_X87LASTDS:
  case XED_REG_X87LASTDP:
  case XED_REG_CS:
  case XED_REG_DS:
  case XED_REG_ES:
  case XED_REG_SS:
  case XED_REG_FS:
  case XED_REG_GS:
  case XED_REG_TMP0:
  case XED_REG_TMP1:
  case XED_REG_TMP2:
  case XED_REG_TMP3:
  case XED_REG_TMP4:
  case XED_REG_TMP5:
  case XED_REG_TMP6:
  case XED_REG_TMP7:
  case XED_REG_TMP8:
  case XED_REG_TMP9:
  case XED_REG_TMP10:
  case XED_REG_TMP11:
  case XED_REG_TMP12:
  case XED_REG_TMP13:
  case XED_REG_TMP14:
  case XED_REG_TMP15:
  case XED_REG_ST0:
  case XED_REG_ST1:
  case XED_REG_ST2:
  case XED_REG_ST3:
  case XED_REG_ST4:
  case XED_REG_ST5:
  case XED_REG_ST6:
  case XED_REG_ST7:
  case XED_REG_XCR0:
  case XED_REG_XMM0:
  case XED_REG_XMM1:
  case XED_REG_XMM2:
  case XED_REG_XMM3:
  case XED_REG_XMM4:
  case XED_REG_XMM5:
  case XED_REG_XMM6:
  case XED_REG_XMM7:
  case XED_REG_XMM8:
  case XED_REG_XMM9:
  case XED_REG_XMM10:
  case XED_REG_XMM11:
  case XED_REG_XMM12:
  case XED_REG_XMM13:
  case XED_REG_XMM14:
  case XED_REG_XMM15:
  case XED_REG_XMM16:
  case XED_REG_XMM17:
  case XED_REG_XMM18:
  case XED_REG_XMM19:
  case XED_REG_XMM20:
  case XED_REG_XMM21:
  case XED_REG_XMM22:
  case XED_REG_XMM23:
  case XED_REG_XMM24:
  case XED_REG_XMM25:
  case XED_REG_XMM26:
  case XED_REG_XMM27:
  case XED_REG_XMM28:
  case XED_REG_XMM29:
  case XED_REG_XMM30:
  case XED_REG_XMM31:
  case XED_REG_YMM0:
  case XED_REG_YMM1:
  case XED_REG_YMM2:
  case XED_REG_YMM3:
  case XED_REG_YMM4:
  case XED_REG_YMM5:
  case XED_REG_YMM6:
  case XED_REG_YMM7:
  case XED_REG_YMM8:
  case XED_REG_YMM9:
  case XED_REG_YMM10:
  case XED_REG_YMM11:
  case XED_REG_YMM12:
  case XED_REG_YMM13:
  case XED_REG_YMM14:
  case XED_REG_YMM15:
  case XED_REG_YMM16:
  case XED_REG_YMM17:
  case XED_REG_YMM18:
  case XED_REG_YMM19:
  case XED_REG_YMM20:
  case XED_REG_YMM21:
  case XED_REG_YMM22:
  case XED_REG_YMM23:
  case XED_REG_YMM24:
  case XED_REG_YMM25:
  case XED_REG_YMM26:
  case XED_REG_YMM27:
  case XED_REG_YMM28:
  case XED_REG_YMM29:
  case XED_REG_YMM30:
  case XED_REG_YMM31:
  case XED_REG_ZMM0:
  case XED_REG_ZMM1:
  case XED_REG_ZMM2:
  case XED_REG_ZMM3:
  case XED_REG_ZMM4:
  case XED_REG_ZMM5:
  case XED_REG_ZMM6:
  case XED_REG_ZMM7:
  case XED_REG_ZMM8:
  case XED_REG_ZMM9:
  case XED_REG_ZMM10:
  case XED_REG_ZMM11:
  case XED_REG_ZMM12:
  case XED_REG_ZMM13:
  case XED_REG_ZMM14:
  case XED_REG_ZMM15:
  case XED_REG_ZMM16:
  case XED_REG_ZMM17:
  case XED_REG_ZMM18:
  case XED_REG_ZMM19:
  case XED_REG_ZMM20:
  case XED_REG_ZMM21:
  case XED_REG_ZMM22:
  case XED_REG_ZMM23:
  case XED_REG_ZMM24:
  case XED_REG_ZMM25:
  case XED_REG_ZMM26:
  case XED_REG_ZMM27:
  case XED_REG_ZMM28:
  case XED_REG_ZMM29:
  case XED_REG_ZMM30:
  case XED_REG_ZMM31:
  case XED_REG_LAST:
  default:
     xed_assert(0);
  }
*/
