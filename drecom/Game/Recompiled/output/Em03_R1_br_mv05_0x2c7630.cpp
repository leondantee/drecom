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

// Function: Em03_R1_br_mv05
// Address: 0x2c7630 - 0x2c7670
void Em03_R1_br_mv05_0x2c7630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em03_R1_br_mv05_0x2c7630");
#endif

    ctx->pc = 0x2c7630u;

    // 0x2c7630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c7634: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c7634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x2c7638: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2c7638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c763c: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x2c763cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c7640: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x2c7640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
    // 0x2c7644: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x2c7644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x2c7648: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c7648u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c764c: 0x0  nop
    ctx->pc = 0x2c764cu;
    // NOP
    // 0x2c7650: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c7650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c7654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7658: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C7658u;
    {
        const bool branch_taken_0x2c7658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c7658) {
            ctx->pc = 0x2C7664u;
            goto label_2c7664;
        }
    }
    ctx->pc = 0x2C7660u;
    // 0x2c7660: 0x70001e28  paddub      $v1, $zero, $zero
    ctx->pc = 0x2c7660u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_2c7664:
    // 0x2c7664: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c7664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c7668: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7670u;
}
