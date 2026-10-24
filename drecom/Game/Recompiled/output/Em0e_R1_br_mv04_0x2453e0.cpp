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

// Function: Em0e_R1_br_mv04
// Address: 0x2453e0 - 0x24541c
void Em0e_R1_br_mv04_0x2453e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0e_R1_br_mv04_0x2453e0");
#endif

    ctx->pc = 0x2453e0u;

    // 0x2453e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2453e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2453e4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2453e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2453e8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2453e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2453ec: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2453ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2453f0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x2453f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x2453f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2453f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453f8: 0x0  nop
    ctx->pc = 0x2453f8u;
    // NOP
    // 0x2453fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2453fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245400: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x245400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x245404: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x245404u;
    {
        const bool branch_taken_0x245404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245404) {
            ctx->pc = 0x245410u;
            goto label_245410;
        }
    }
    ctx->pc = 0x24540Cu;
    // 0x24540c: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x24540cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_245410:
    // 0x245410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x245410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x245414: 0x3e00008  jr          $ra
    ctx->pc = 0x245414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24541Cu;
}
