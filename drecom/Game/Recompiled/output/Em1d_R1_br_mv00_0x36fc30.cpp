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

// Function: Em1d_R1_br_mv00
// Address: 0x36fc30 - 0x36fc98
void Em1d_R1_br_mv00_0x36fc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1d_R1_br_mv00_0x36fc30");
#endif

    ctx->pc = 0x36fc30u;

    // 0x36fc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fc34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x36fc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x36fc38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc3c: 0xc461128c  lwc1        $f1, 0x128C($v1)
    ctx->pc = 0x36fc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36fc40: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x36fc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x36fc44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x36fc44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36fc48: 0x0  nop
    ctx->pc = 0x36fc48u;
    // NOP
    // 0x36fc4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x36fc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36fc50: 0x0  nop
    ctx->pc = 0x36fc50u;
    // NOP
    // 0x36fc54: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x36FC54u;
    {
        const bool branch_taken_0x36fc54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x36fc54) {
            ctx->pc = 0x36FC8Cu;
            goto label_36fc8c;
        }
    }
    ctx->pc = 0x36FC5Cu;
    // 0x36fc5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36fc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fc60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36fc64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x36fc68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36fc6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x36fc70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x36fc74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36fc78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36fc7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36fc80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x36fc84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x36fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fc88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36fc8c:
    // 0x36fc8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x36fc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36fc90: 0x3e00008  jr          $ra
    ctx->pc = 0x36FC90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FC90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FC98u;
}
