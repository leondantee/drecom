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

// Function: Check_walk_run
// Address: 0x15eb30 - 0x15ec04
void Check_walk_run_0x15eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_walk_run_0x15eb30");
#endif

    ctx->pc = 0x15eb30u;

    // 0x15eb30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15eb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15eb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15eb38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15eb38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15eb3c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15eb40: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x15eb44: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x15eb48: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x15eb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x15eb4c: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x15eb4cu;
    { uint32_t bits = FAST_READ32(0x3EEF48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eb50: 0x3c024240  lui         $v0, 0x4240
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16960 << 16));
    // 0x15eb54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eb54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb58: 0x0  nop
    ctx->pc = 0x15eb58u;
    // NOP
    // 0x15eb5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15eb5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15eb60: 0x0  nop
    ctx->pc = 0x15eb60u;
    // NOP
    // 0x15eb64: 0x45010021  bc1t        . + 4 + (0x21 << 2)
    ctx->pc = 0x15EB64u;
    {
        const bool branch_taken_0x15eb64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15eb64) {
            ctx->pc = 0x15EBECu;
            goto label_15ebec;
        }
    }
    ctx->pc = 0x15EB6Cu;
    // 0x15eb6c: 0xc6011388  lwc1        $f1, 0x1388($s0)
    ctx->pc = 0x15eb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15eb70: 0x3c0242d0  lui         $v0, 0x42D0
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17104 << 16));
    // 0x15eb74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15eb74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15eb78: 0x0  nop
    ctx->pc = 0x15eb78u;
    // NOP
    // 0x15eb7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x15eb7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15eb80: 0x0  nop
    ctx->pc = 0x15eb80u;
    // NOP
    // 0x15eb84: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x15EB84u;
    {
        const bool branch_taken_0x15eb84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15eb84) {
            ctx->pc = 0x15EBC4u;
            goto label_15ebc4;
        }
    }
    ctx->pc = 0x15EB8Cu;
    // 0x15eb8c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x15eb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x15eb90: 0x8c2295b4  lw          $v0, -0x6A4C($at)
    ctx->pc = 0x15eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6195B4u));
    // 0x15eb94: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x15eb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x15eb98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15EB98u;
    {
        const bool branch_taken_0x15eb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15eb98) {
            ctx->pc = 0x15EBC4u;
            goto label_15ebc4;
        }
    }
    ctx->pc = 0x15EBA0u;
    // 0x15eba0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eba4: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15eba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15eba8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ebac: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ebacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ebb0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ebb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ebb4: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ebb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ebb8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x15ebbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15EBBCu;
    {
        const bool branch_taken_0x15ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebbc) {
            ctx->pc = 0x15EBE0u;
            goto label_15ebe0;
        }
    }
    ctx->pc = 0x15EBC4u;
label_15ebc4:
    // 0x15ebc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ebc8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x15ebc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ebcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ebccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ebd0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x15ebd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x15ebd4: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x15ebd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ebd8: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x15ebd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ebdc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x15ebdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_15ebe0:
    // 0x15ebe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ebe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15EBE4u;
    {
        const bool branch_taken_0x15ebe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ebe4) {
            ctx->pc = 0x15EBF0u;
            goto label_15ebf0;
        }
    }
    ctx->pc = 0x15EBECu;
label_15ebec:
    // 0x15ebec: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x15ebecu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_15ebf0:
    // 0x15ebf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ebf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ebf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ebf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ebf8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x15ebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15ebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x15EBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC04u;
}
