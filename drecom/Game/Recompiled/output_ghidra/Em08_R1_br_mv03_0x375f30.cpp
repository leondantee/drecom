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

// Function: Em08_R1_br_mv03
// Address: 0x375f30 - 0x375f98
void Em08_R1_br_mv03_0x375f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_br_mv03_0x375f30");
#endif

    ctx->pc = 0x375f30u;

    // 0x375f30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375f34: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x375f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x375f38: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f3c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x375f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x375f40: 0x3c034496  lui         $v1, 0x4496
    ctx->pc = 0x375f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17558 << 16));
    // 0x375f44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x375f44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x375f48: 0x0  nop
    ctx->pc = 0x375f48u;
    // NOP
    // 0x375f4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x375f4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x375f50: 0x0  nop
    ctx->pc = 0x375f50u;
    // NOP
    // 0x375f54: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x375F54u;
    {
        const bool branch_taken_0x375f54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x375f54) {
            ctx->pc = 0x375F8Cu;
            goto label_375f8c;
        }
    }
    ctx->pc = 0x375F5Cu;
    // 0x375f5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375f60: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f64: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x375f64u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x375f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x375f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x375f6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f70: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x375f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x375f74: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f78: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x375f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x375f7c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f80: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x375f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x375f84: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375f88: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x375f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_375f8c:
    // 0x375f8c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x375f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x375f90: 0x3e00008  jr          $ra
    ctx->pc = 0x375F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375F98u;
}
