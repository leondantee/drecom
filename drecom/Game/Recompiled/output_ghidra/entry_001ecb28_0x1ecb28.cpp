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

// Function: entry_001ecb28
// Address: 0x1ecb28 - 0x1ecc5c
void entry_001ecb28_0x1ecb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecb28_0x1ecb28");
#endif

    switch (ctx->pc) {
        case 0x1ecba0u: goto label_1ecba0;
        case 0x1ecc0cu: goto label_1ecc0c;
        default: break;
    }

    ctx->pc = 0x1ecb28u;

    // 0x1ecb28: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecb2c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecb30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1ecb34: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1ecb34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1ecb38: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1ECB38u;
    {
        const bool branch_taken_0x1ecb38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb38) {
            ctx->pc = 0x1ECC5Cu;
            return;
        }
    }
    ctx->pc = 0x1ECB40u;
    // 0x1ecb40: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb44: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ecb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ecb48: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x1ecb48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x1ecb4c: 0x146001da  bnez        $v1, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1ECB4Cu;
    {
        const bool branch_taken_0x1ecb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb4c) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECB54u;
    // 0x1ecb54: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb58: 0xc4811288  lwc1        $f1, 0x1288($a0)
    ctx->pc = 0x1ecb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecb5c: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1ecb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1ecb60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ecb60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecb64: 0x0  nop
    ctx->pc = 0x1ecb64u;
    // NOP
    // 0x1ecb68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ecb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ecb6c: 0x0  nop
    ctx->pc = 0x1ecb6cu;
    // NOP
    // 0x1ecb70: 0x450001d1  bc1f        . + 4 + (0x1D1 << 2)
    ctx->pc = 0x1ECB70u;
    {
        const bool branch_taken_0x1ecb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ecb70) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECB78u;
    // 0x1ecb78: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb7c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecb80: 0x3c033f86  lui         $v1, 0x3F86
    ctx->pc = 0x1ecb80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16262 << 16));
    // 0x1ecb84: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x1ecb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
    // 0x1ecb88: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1ecb88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ecb8c: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x1ecb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x1ecb90: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x1ecb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ecb94: 0x26250120  addiu       $a1, $s1, 0x120
    ctx->pc = 0x1ecb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x1ecb98: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x1ECB98u;
    SET_GPR_U32(ctx, 31, 0x1ECBA0u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x1ECB98u, 0x1ECBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBA0u;
label_1ecba0:
    // 0x1ecba0: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1ecba0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecba4: 0x120001c4  beqz        $s0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1ECBA4u;
    {
        const bool branch_taken_0x1ecba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecba4) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECBACu;
    // 0x1ecbac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbb0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x1ecbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ecbb4: 0x84630094  lh          $v1, 0x94($v1)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x1ecbb8: 0x146001bf  bnez        $v1, . + 4 + (0x1BF << 2)
    ctx->pc = 0x1ECBB8u;
    {
        const bool branch_taken_0x1ecbb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbb8) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECBC0u;
    // 0x1ecbc0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ecbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ecbc4: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1ecbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ecbc8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x1ecbc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x1ecbcc: 0x146001ba  bnez        $v1, . + 4 + (0x1BA << 2)
    ctx->pc = 0x1ECBCCu;
    {
        const bool branch_taken_0x1ecbcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ecbcc) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECBD4u;
    // 0x1ecbd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecbd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecbe0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ecbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ecbe4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbe8: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ecbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecbec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbf0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecbf4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecbf8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecbfc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc00: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ecc00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ecc04: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ECC04u;
    SET_GPR_U32(ctx, 31, 0x1ECC0Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ECC04u, 0x1ECC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECC0Cu;
label_1ecc0c:
    // 0x1ecc0c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1ecc0cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1ecc10: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1ecc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ecc14: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x1ecc14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ecc18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ecc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecc1c: 0x148301a6  bne         $a0, $v1, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x1ECC1Cu;
    {
        const bool branch_taken_0x1ecc1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ecc1c) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECC24u;
    // 0x1ecc24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecc24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecc28: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc2c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ecc2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ecc30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1ecc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1ecc34: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecc34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc38: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1ecc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ecc3c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc40: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ecc40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecc44: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ecc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc48: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ecc48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ecc4c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ecc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ecc50: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1ecc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1ecc54: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x1ECC54u;
    {
        const bool branch_taken_0x1ecc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecc54) {
            ctx->pc = 0x1ED2B8u;
            return;
        }
    }
    ctx->pc = 0x1ECC5Cu;
}
