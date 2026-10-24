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

// Function: entry_0028b228
// Address: 0x28b228 - 0x28b260
void entry_0028b228_0x28b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b228_0x28b228");
#endif

    switch (ctx->pc) {
        case 0x28b240u: goto label_28b240;
        case 0x28b250u: goto label_28b250;
        default: break;
    }

    ctx->pc = 0x28b228u;

    // 0x28b228: 0x24046a02  addiu       $a0, $zero, 0x6A02
    ctx->pc = 0x28b228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27138));
    // 0x28b22c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28b22cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b230: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x28b230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x28b234: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28b234u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28b238: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x28B238u;
    SET_GPR_U32(ctx, 31, 0x28B240u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x28B238u, 0x28B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B240u;
label_28b240:
    // 0x28b240: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x28b240u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x28b244: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x28b244u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x28b248: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x28B248u;
    SET_GPR_U32(ctx, 31, 0x28B250u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x28B248u, 0x28B250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B250u;
label_28b250:
    // 0x28b250: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b254: 0xac222044  sw          $v0, 0x2044($at)
    ctx->pc = 0x28b254u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x622044u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622044u, _value); } while (0);
    // 0x28b258: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28B258u;
    {
        const bool branch_taken_0x28b258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b258) {
            ctx->pc = 0x28B290u;
            return;
        }
    }
    ctx->pc = 0x28B260u;
}
