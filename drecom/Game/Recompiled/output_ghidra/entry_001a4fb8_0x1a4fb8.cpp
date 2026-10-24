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

// Function: entry_001a4fb8
// Address: 0x1a4fb8 - 0x1a4fd0
void entry_001a4fb8_0x1a4fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a4fb8_0x1a4fb8");
#endif

    ctx->pc = 0x1a4fb8u;

    // 0x1a4fb8: 0x92030318  lbu         $v1, 0x318($s0)
    ctx->pc = 0x1a4fb8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 792)));
    // 0x1a4fbc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4FBCu;
    {
        const bool branch_taken_0x1a4fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4fbc) {
            ctx->pc = 0x1A4FD0u;
            return;
        }
    }
    ctx->pc = 0x1A4FC4u;
    // 0x1a4fc4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1a4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a4fc8: 0xc06a4f8  jal         func_1A93E0
    ctx->pc = 0x1A4FC8u;
    SET_GPR_U32(ctx, 31, 0x1A4FD0u);
    ctx->pc = 0x1A93E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A93E0u, 0x1A4FC8u, 0x1A4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4FD0u;
}
