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

// Function: CdMovieTrans
// Address: 0x1d9320 - 0x1d9380
void CdMovieTrans_0x1d9320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CdMovieTrans_0x1d9320");
#endif

    switch (ctx->pc) {
        case 0x1d9364u: goto label_1d9364;
        default: break;
    }

    ctx->pc = 0x1d9320u;

    // 0x1d9320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9324: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d9324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d9328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d9328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d932c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d9330: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d9330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d9334: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1d9334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d9338: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d933c: 0xac22c560  sw          $v0, -0x3AA0($at)
    ctx->pc = 0x1d933cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC560u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC560u, _value); } while (0);
    // 0x1d9340: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9344: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9348: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d9348u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d934c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1d934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1d9350: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9354: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d9354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9358: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d935c: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D935Cu;
    SET_GPR_U32(ctx, 31, 0x1D9364u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D935Cu, 0x1D9364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9364u;
label_1d9364:
    // 0x1d9364: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d9364u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9368: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d936c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d936cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9370: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9370u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9374: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d9374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d9378: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9380u;
}
