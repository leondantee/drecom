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

// Function: entry_002cc854
// Address: 0x2cc854 - 0x2cc870
void entry_002cc854_0x2cc854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc854_0x2cc854");
#endif

    ctx->pc = 0x2cc854u;

    // 0x2cc854: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2cc854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc858: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2cc858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cc85c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x2cc85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2cc860: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2cc860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2cc864: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc868: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC868u;
    SET_GPR_U32(ctx, 31, 0x2CC870u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC868u, 0x2CC870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC870u;
}
