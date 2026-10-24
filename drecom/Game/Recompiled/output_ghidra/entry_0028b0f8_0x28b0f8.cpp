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

// Function: entry_0028b0f8
// Address: 0x28b0f8 - 0x28b138
void entry_0028b0f8_0x28b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b0f8_0x28b0f8");
#endif

    switch (ctx->pc) {
        case 0x28b114u: goto label_28b114;
        case 0x28b124u: goto label_28b124;
        default: break;
    }

    ctx->pc = 0x28b0f8u;

    // 0x28b0f8: 0x24036901  addiu       $v1, $zero, 0x6901
    ctx->pc = 0x28b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26881));
    // 0x28b0fc: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b0fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b100: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b100u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b104: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b108: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b108u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b10c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B10Cu;
    SET_GPR_U32(ctx, 31, 0x28B114u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B10Cu, 0x28B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B114u;
label_28b114:
    // 0x28b114: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b114u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b118: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x28b118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x28b11c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B11Cu;
    SET_GPR_U32(ctx, 31, 0x28B124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B11Cu, 0x28B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B124u;
label_28b124:
    // 0x28b124: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b124u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b128: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b12c: 0xac232044  sw          $v1, 0x2044($at)
    ctx->pc = 0x28b12cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b130: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x28B130u;
    {
        const bool branch_taken_0x28b130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b130) {
            ctx->pc = 0x28B290u;
            return;
        }
    }
    ctx->pc = 0x28B138u;
}
