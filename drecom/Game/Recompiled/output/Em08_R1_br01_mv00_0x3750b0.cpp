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

// Function: Em08_R1_br01_mv00
// Address: 0x3750b0 - 0x37511c
void Em08_R1_br01_mv00_0x3750b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em08_R1_br01_mv00_0x3750b0");
#endif

    ctx->pc = 0x3750b0u;

    // 0x3750b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3750b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3750b4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x3750b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x3750b8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3750b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3750bc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x3750bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3750c0: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x3750c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
    // 0x3750c4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x3750c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x3750c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3750c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3750cc: 0x0  nop
    ctx->pc = 0x3750ccu;
    // NOP
    // 0x3750d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3750d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3750d4: 0x0  nop
    ctx->pc = 0x3750d4u;
    // NOP
    // 0x3750d8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x3750D8u;
    {
        const bool branch_taken_0x3750d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3750d8) {
            ctx->pc = 0x375110u;
            goto label_375110;
        }
    }
    ctx->pc = 0x3750E0u;
    // 0x3750e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3750e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3750e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3750e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3750e8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3750e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3750ec: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3750ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3750f0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3750f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3750f4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x3750f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x3750f8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3750f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3750fc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3750fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x375100: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x375104: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x375104u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x375108: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x375108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37510c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x37510cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_375110:
    // 0x375110: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x375110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x375114: 0x3e00008  jr          $ra
    ctx->pc = 0x375114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37511Cu;
}
