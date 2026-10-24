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

// Function: entry_001cb9a8
// Address: 0x1cb9a8 - 0x1cb9d4
void entry_001cb9a8_0x1cb9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb9a8_0x1cb9a8");
#endif

    ctx->pc = 0x1cb9a8u;

label_1cb9a8:
    // 0x1cb9a8: 0x8e041b60  lw          $a0, 0x1B60($s0)
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 7008)));
label_1cb9ac:
    // 0x1cb9ac: 0x2c81000b  sltiu       $at, $a0, 0xB
    ctx->pc = 0x1cb9acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_1cb9b0:
    // 0x1cb9b0: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
label_1cb9b4:
    if (ctx->pc == 0x1CB9B4u) {
        ctx->pc = 0x1CB9B8u;
        goto label_1cb9b8;
    }
    ctx->pc = 0x1CB9B0u;
    {
        const bool branch_taken_0x1cb9b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9b0) {
            ctx->pc = 0x1CB9F8u;
            return;
        }
    }
    ctx->pc = 0x1CB9B8u;
label_1cb9b8:
    // 0x1cb9b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1cb9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_1cb9bc:
    // 0x1cb9bc: 0x2443f480  addiu       $v1, $v0, -0xB80
    ctx->pc = 0x1cb9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964352));
label_1cb9c0:
    // 0x1cb9c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1cb9c4:
    // 0x1cb9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cb9c8:
    // 0x1cb9c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1cb9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb9cc:
    // 0x1cb9cc: 0x400008  jr          $v0
label_1cb9d0:
    if (ctx->pc == 0x1CB9D0u) {
        ctx->pc = 0x1CB9D4u;
        goto label_fallthrough_0x1cb9cc;
    }
    ctx->pc = 0x1CB9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB9CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x1cb9cc:
    ctx->pc = 0x1CB9D4u;
}
