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

// Function: HdDirectWrite
// Address: 0x1d95c0 - 0x1d9640
void HdDirectWrite_0x1d95c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("HdDirectWrite_0x1d95c0");
#endif

    switch (ctx->pc) {
        case 0x1d95f4u: goto label_1d95f4;
        case 0x1d9624u: goto label_1d9624;
        default: break;
    }

    ctx->pc = 0x1d95c0u;

    // 0x1d95c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d95c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x1d95c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1d95c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d95c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d95cc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1d95ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1d95d0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1d95d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1d95d4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1d95d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1d95d8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d95dc: 0x2444c520  addiu       $a0, $v0, -0x3AE0
    ctx->pc = 0x1d95dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d95e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1d95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1d95e4: 0x24450c58  addiu       $a1, $v0, 0xC58
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3160));
    // 0x1d95e8: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1d95e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d95ec: 0xc046a48  jal         func_11A920
    ctx->pc = 0x1D95ECu;
    SET_GPR_U32(ctx, 31, 0x1D95F4u);
    ctx->pc = 0x11A920u;
    {
        ctx->pc = 0x1D95F4u;
        ps2_stubs::sprintf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1D95F4u) { return; }
    ctx->pc = 0x1D95F4u;
label_1d95f4:
    // 0x1d95f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1d95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d95f8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d95f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d95fc: 0xac22c564  sw          $v0, -0x3A9C($at)
    ctx->pc = 0x1d95fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC564u, _value); } while (0);
    // 0x1d9600: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d9604: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x1d9604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x1d9608: 0xac22c568  sw          $v0, -0x3A98($at)
    ctx->pc = 0x1d9608u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5FC568u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5FC568u, _value); } while (0);
    // 0x1d960c: 0x24040084  addiu       $a0, $zero, 0x84
    ctx->pc = 0x1d960cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x1d9610: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d9610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1d9614: 0x2445c520  addiu       $a1, $v0, -0x3AE0
    ctx->pc = 0x1d9614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952224));
    // 0x1d9618: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1d9618u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1d961c: 0xc0762e8  jal         func_1D8BA0
    ctx->pc = 0x1D961Cu;
    SET_GPR_U32(ctx, 31, 0x1D9624u);
    ctx->pc = 0x1D8BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA0u, 0x1D961Cu, 0x1D9624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9624u;
label_1d9624:
    // 0x1d9624: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1d9624u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d9628: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d9628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d962c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x1d962cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9630: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d9630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9634: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1d9634u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d9638: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9640u;
}
