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

// Function: Em03_R1_br_mv06
// Address: 0x2c7bc0 - 0x2c7cb4
void Em03_R1_br_mv06_0x2c7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_br_mv06_0x2c7bc0");
#endif

    ctx->pc = 0x2c7bc0u;

    // 0x2c7bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c7bc4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c7bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c7bc8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7bcc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7bd0: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c7bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7bd4: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C7BD4u;
    {
        const bool branch_taken_0x2c7bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7bd4) {
            ctx->pc = 0x2C7C18u;
            goto label_2c7c18;
        }
    }
    ctx->pc = 0x2C7BDCu;
    // 0x2c7bdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7be0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7be4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2c7be4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7be8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7bec: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x2c7becu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7bf0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7bf4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2c7bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7bf8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7bfc: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2c7bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7c00: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c04: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2c7c04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2c7c08: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x2c7c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x2c7c0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c10: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c14: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x2c7c14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
label_2c7c18:
    // 0x2c7c18: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c1c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c20: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c24: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x2c7c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x2c7c28: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x2c7c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2c7c2c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c7c2cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c7c30: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C7C30u;
    {
        const bool branch_taken_0x2c7c30 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2c7c30) {
            ctx->pc = 0x2C7C50u;
            goto label_2c7c50;
        }
    }
    ctx->pc = 0x2C7C38u;
    // 0x2c7c38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c3c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c40: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x2c7c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c44: 0x906310a8  lbu         $v1, 0x10A8($v1)
    ctx->pc = 0x2c7c44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x2c7c48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C7C48u;
    {
        const bool branch_taken_0x2c7c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7c48) {
            ctx->pc = 0x2C7C78u;
            goto label_2c7c78;
        }
    }
    ctx->pc = 0x2C7C50u;
label_2c7c50:
    // 0x2c7c50: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c54: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x2c7c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x2c7c58: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2c7c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2c7c5c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c7c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c7c60: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x2c7c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x2c7c64: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c7c64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x2c7c68: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2c7c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c6c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x2c7c6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x2c7c70: 0x3063bfff  andi        $v1, $v1, 0xBFFF
    ctx->pc = 0x2c7c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)49151);
    // 0x2c7c74: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x2c7c74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_2c7c78:
    // 0x2c7c78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7c7c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2c7c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7c80: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2c7c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2c7c84: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c7c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c7c88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7c88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c7c8c: 0x0  nop
    ctx->pc = 0x2c7c8cu;
    // NOP
    // 0x2c7c90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c7c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7c94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7c98: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7C98u;
    {
        const bool branch_taken_0x2c7c98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7c98) {
            ctx->pc = 0x2C7CA4u;
            goto label_2c7ca4;
        }
    }
    ctx->pc = 0x2C7CA0u;
    // 0x2c7ca0: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2c7ca0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2c7ca4:
    // 0x2c7ca4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c7ca8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c7ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7cac: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7CB4u;
}
