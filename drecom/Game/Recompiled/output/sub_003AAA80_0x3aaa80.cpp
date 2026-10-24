#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003AAA80
// Address: 0x3aaa80 - 0x3aab50
void sub_003AAA80_0x3aaa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAA80_0x3aaa80");
#endif

    ctx->pc = 0x3aaa80u;

    // 0x3aaa80: 0x1000  sll         $v0, $zero, 0
    ctx->pc = 0x3aaa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x3aaa84: 0x43960000  .word       0x43960000                   # INVALID     $gp, $s6, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa84u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1C at 0x3AAA84 raw=0x43960000");
    // 0x3aaa88: 0xc3480000  ll          $t0, 0x0($k0)
    ctx->pc = 0x3aaa88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 0); SET_GPR_S32(ctx, 8, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaa8c: 0x42f00000  .word       0x42F00000                   # INVALID     $s7, $s0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aaa8cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x17 at 0x3AAA8C raw=0x42F00000");
    // 0x3aaa90: 0x0  nop
    ctx->pc = 0x3aaa90u;
    // NOP
    // 0x3aaa94: 0x0  nop
    ctx->pc = 0x3aaa94u;
    // NOP
    // 0x3aaa98: 0x0  nop
    ctx->pc = 0x3aaa98u;
    // NOP
    // 0x3aaa9c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaa9cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aaaa0: 0x35e790  .word       0x0035E790                   # mfhi        $gp # 00350780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaa0u;
    SET_GPR_U64(ctx, 28, ctx->hi);
    // 0x3aaaa4: 0x35e8a0  .word       0x0035E8A0                   # add         $sp, $at, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaa4u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x3aaaa8: 0x35e940  .word       0x0035E940                   # sll         $sp, $s5, 5 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x3aaaac: 0x35eb40  .word       0x0035EB40                   # sll         $sp, $s5, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaacu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 21), 13));
    // 0x3aaab0: 0x35e8f0  tge         $at, $s5, 931
    ctx->pc = 0x3aaab0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaab4: 0x0  nop
    ctx->pc = 0x3aaab4u;
    // NOP
    // 0x3aaab8: 0x35e9a0  .word       0x0035E9A0                   # add         $sp, $at, $s5 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaab8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x3aaabc: 0x35eb30  tge         $at, $s5, 940
    ctx->pc = 0x3aaabcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaac0: 0xc1a00000  ll          $zero, 0x0($t5)
    ctx->pc = 0x3aaac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x3aaac4: 0x0  nop
    ctx->pc = 0x3aaac4u;
    // NOP
    // 0x3aaac8: 0x0  nop
    ctx->pc = 0x3aaac8u;
    // NOP
    // 0x3aaacc: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aaaccu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aaad0: 0x35ecf0  tge         $at, $s5, 947
    ctx->pc = 0x3aaad0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaad4: 0x35edf0  tge         $at, $s5, 951
    ctx->pc = 0x3aaad4u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaad8: 0x35ee00  .word       0x0035EE00                   # sll         $sp, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaad8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
    // 0x3aaadc: 0x0  nop
    ctx->pc = 0x3aaadcu;
    // NOP
    // 0x3aaae0: 0x35ee50  .word       0x0035EE50                   # mfhi        $sp # 00350640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaae0u;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x3aaae4: 0x0  nop
    ctx->pc = 0x3aaae4u;
    // NOP
    // 0x3aaae8: 0x0  nop
    ctx->pc = 0x3aaae8u;
    // NOP
    // 0x3aaaec: 0x0  nop
    ctx->pc = 0x3aaaecu;
    // NOP
    // 0x3aaaf0: 0x35f310  .word       0x0035F310                   # mfhi        $fp # 00350300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaf0u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x3aaaf4: 0x35f380  .word       0x0035F380                   # sll         $fp, $s5, 14 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaaf4u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 14));
    // 0x3aaaf8: 0x35faf0  tge         $at, $s5, 1003
    ctx->pc = 0x3aaaf8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aaafc: 0x35fb50  .word       0x0035FB50                   # mfhi        $ra # 00350340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aaafcu;
    SET_GPR_U64(ctx, 31, ctx->hi);
    // 0x3aab00: 0x35f3d0  .word       0x0035F3D0                   # mfhi        $fp # 003503C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab00u;
    SET_GPR_U64(ctx, 30, ctx->hi);
    // 0x3aab04: 0x35f400  .word       0x0035F400                   # sll         $fp, $s5, 16 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab04u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 21), 16));
    // 0x3aab08: 0x35f7a0  .word       0x0035F7A0                   # add         $fp, $at, $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab08u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x3aab0c: 0x35f870  tge         $at, $s5, 993
    ctx->pc = 0x3aab0cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
    // 0x3aab10: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab10u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB10 raw=0x42C80000");
    // 0x3aab14: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab14u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB14 raw=0x42C80000");
    // 0x3aab18: 0x0  nop
    ctx->pc = 0x3aab18u;
    // NOP
    // 0x3aab1c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aab1cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aab20: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab20u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB20 raw=0x42C80000");
    // 0x3aab24: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab24u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB24 raw=0x42C80000");
    // 0x3aab28: 0x0  nop
    ctx->pc = 0x3aab28u;
    // NOP
    // 0x3aab2c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aab2cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aab30: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab30u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB30 raw=0x42C80000");
    // 0x3aab34: 0x42c80000  .word       0x42C80000                   # INVALID     $s6, $t0, 0x0 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3aab34u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x16 at 0x3AAB34 raw=0x42C80000");
    // 0x3aab38: 0x0  nop
    ctx->pc = 0x3aab38u;
    // NOP
    // 0x3aab3c: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x3aab3cu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x3aab40: 0x35fb40  .word       0x0035FB40                   # sll         $ra, $s5, 13 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3aab40u;
    SET_GPR_S32(ctx, 31, (int32_t)SLL32(GPR_U32(ctx, 21), 13));
    // 0x3aab44: 0x0  nop
    ctx->pc = 0x3aab44u;
    // NOP
    // 0x3aab48: 0x0  nop
    ctx->pc = 0x3aab48u;
    // NOP
    // 0x3aab4c: 0x0  nop
    ctx->pc = 0x3aab4cu;
    // NOP
    ctx->pc = 0x3aab50u;
}
