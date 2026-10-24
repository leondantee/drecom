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

// Function: entry_0028b68c
// Address: 0x28b68c - 0x28b6cc
void entry_0028b68c_0x28b68c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b68c_0x28b68c");
#endif

    switch (ctx->pc) {
        case 0x28b6acu: goto label_28b6ac;
        case 0x28b6b8u: goto label_28b6b8;
        default: break;
    }

    ctx->pc = 0x28b68cu;

    // 0x28b68c: 0x24066b01  addiu       $a2, $zero, 0x6B01
    ctx->pc = 0x28b68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27393));
    // 0x28b690: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b694: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b694u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b698: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x28b698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x28b69c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x28b69cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b6a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b6a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b6a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B6A4u;
    SET_GPR_U32(ctx, 31, 0x28B6ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B6A4u, 0x28B6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6ACu;
label_28b6ac:
    // 0x28b6ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x28b6acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b6b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B6B0u;
    SET_GPR_U32(ctx, 31, 0x28B6B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B6B0u, 0x28B6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B6B8u;
label_28b6b8:
    // 0x28b6b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b6b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b6bc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b6c0: 0xac23204c  sw          $v1, 0x204C($at)
    ctx->pc = 0x28b6c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x62204Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x62204Cu, _value); } while (0);
    // 0x28b6c4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28B6C4u;
    {
        const bool branch_taken_0x28b6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b6c4) {
            ctx->pc = 0x28B7B4u;
            return;
        }
    }
    ctx->pc = 0x28B6CCu;
}
