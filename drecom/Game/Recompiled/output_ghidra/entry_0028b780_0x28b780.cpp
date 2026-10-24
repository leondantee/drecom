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

// Function: entry_0028b780
// Address: 0x28b780 - 0x28b7b4
void entry_0028b780_0x28b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b780_0x28b780");
#endif

    switch (ctx->pc) {
        case 0x28b79cu: goto label_28b79c;
        case 0x28b7acu: goto label_28b7ac;
        default: break;
    }

    ctx->pc = 0x28b780u;

    // 0x28b780: 0x24066b02  addiu       $a2, $zero, 0x6B02
    ctx->pc = 0x28b780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27394));
    // 0x28b784: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b788: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b788u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b78c: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x28b78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b790: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b790u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b794: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B794u;
    SET_GPR_U32(ctx, 31, 0x28B79Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B794u, 0x28B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B79Cu;
label_28b79c:
    // 0x28b79c: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x28b79cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b7a0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x28b7a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x28b7a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B7A4u;
    SET_GPR_U32(ctx, 31, 0x28B7ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B7A4u, 0x28B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7ACu;
label_28b7ac:
    // 0x28b7ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b7b0: 0xac22204c  sw          $v0, 0x204C($at)
    ctx->pc = 0x28b7b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    ctx->pc = 0x28b7b4u;
}
