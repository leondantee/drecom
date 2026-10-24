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

// Function: entry_0018c364
// Address: 0x18c364 - 0x18c390
void entry_0018c364_0x18c364(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c364_0x18c364");
#endif

    switch (ctx->pc) {
        case 0x18c36cu: goto label_18c36c;
        default: break;
    }

    ctx->pc = 0x18c364u;

    // 0x18c364: 0xc062ef0  jal         func_18BBC0
    ctx->pc = 0x18C364u;
    SET_GPR_U32(ctx, 31, 0x18C36Cu);
    ctx->pc = 0x18BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BBC0u, 0x18C364u, 0x18C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C36Cu;
label_18c36c:
    // 0x18c36c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x18c36cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x18c370: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c374: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c378: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18C378u;
    {
        const bool branch_taken_0x18c378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x18c378) {
            ctx->pc = 0x18C390u;
            return;
        }
    }
    ctx->pc = 0x18C380u;
    // 0x18c380: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x18c380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x18c384: 0x34420011  ori         $v0, $v0, 0x11
    ctx->pc = 0x18c384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17);
    // 0x18c388: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x18C388u;
    {
        const bool branch_taken_0x18c388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c388) {
            ctx->pc = 0x18C78Cu;
            return;
        }
    }
    ctx->pc = 0x18C390u;
}
