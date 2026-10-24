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

// Function: entry_0028b17c
// Address: 0x28b17c - 0x28b1bc
void entry_0028b17c_0x28b17c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b17c_0x28b17c");
#endif

    switch (ctx->pc) {
        case 0x28b198u: goto label_28b198;
        case 0x28b1a8u: goto label_28b1a8;
        default: break;
    }

    ctx->pc = 0x28b17cu;

    // 0x28b17c: 0x24066b01  addiu       $a2, $zero, 0x6B01
    ctx->pc = 0x28b17cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27393));
    // 0x28b180: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x28b180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x28b184: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b184u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b188: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b18c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b18cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b190: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B190u;
    SET_GPR_U32(ctx, 31, 0x28B198u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B190u, 0x28B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B198u;
label_28b198:
    // 0x28b198: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x28b198u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b19c: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x28b19cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x28b1a0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B1A0u;
    SET_GPR_U32(ctx, 31, 0x28B1A8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B1A0u, 0x28B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B1A8u;
label_28b1a8:
    // 0x28b1a8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x28b1a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b1ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b1b0: 0xac292044  sw          $t1, 0x2044($at)
    ctx->pc = 0x28b1b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b1b4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28B1B4u;
    {
        const bool branch_taken_0x28b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b1b4) {
            ctx->pc = 0x28B290u;
            return;
        }
    }
    ctx->pc = 0x28B1BCu;
}
