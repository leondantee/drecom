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

// Function: entry_00279d1c
// Address: 0x279d1c - 0x279dc0
void entry_00279d1c_0x279d1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00279d1c_0x279d1c");
#endif

    ctx->pc = 0x279d1cu;

    // 0x279d1c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x279d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x279d20: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x279d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x279d24: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x279d24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279d28: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279d2c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x279d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x279d30: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x279D30u;
    {
        const bool branch_taken_0x279d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x279d30) {
            ctx->pc = 0x279DE0u;
            return;
        }
    }
    ctx->pc = 0x279D38u;
    // 0x279d38: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x279d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279d3c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279d44: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279d48: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x279d4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279d50: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x279d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279d54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x279d54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279d58: 0x0  nop
    ctx->pc = 0x279d58u;
    // NOP
    // 0x279d5c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x279D5Cu;
    {
        const bool branch_taken_0x279d5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x279d5c) {
            ctx->pc = 0x279DE0u;
            return;
        }
    }
    ctx->pc = 0x279D64u;
    // 0x279d64: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x279d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x279d68: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x279d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x279d6c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x279d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279d70: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x279d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x279d74: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x279d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x279d78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x279d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x279d7c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x279d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x279d80: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x279d80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x279d84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x279d84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x279d88: 0x0  nop
    ctx->pc = 0x279d88u;
    // NOP
    // 0x279d8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x279d8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x279d90: 0xc6000124  lwc1        $f0, 0x124($s0)
    ctx->pc = 0x279d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x279d94: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x279d94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x279d98: 0x0  nop
    ctx->pc = 0x279d98u;
    // NOP
    // 0x279d9c: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x279D9Cu;
    {
        const bool branch_taken_0x279d9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x279d9c) {
            ctx->pc = 0x279DE0u;
            return;
        }
    }
    ctx->pc = 0x279DA4u;
    // 0x279da4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x279da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x279da8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x279da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279dac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x279DACu;
    {
        const bool branch_taken_0x279dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x279dac) {
            ctx->pc = 0x279DC0u;
            return;
        }
    }
    ctx->pc = 0x279DB4u;
    // 0x279db4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x279db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x279db8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x279db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x279dbc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x279dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->pc = 0x279dc0u;
}
