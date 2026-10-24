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

// Function: entry_0012a664
// Address: 0x12a664 - 0x12a680
void entry_0012a664_0x12a664(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a664_0x12a664");
#endif

    ctx->pc = 0x12a664u;

    // 0x12a664: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12a664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a668: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x12a668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x12a66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A66Cu;
    {
        const bool branch_taken_0x12a66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a66c) {
            ctx->pc = 0x12A680u;
            return;
        }
    }
    ctx->pc = 0x12A674u;
    // 0x12a674: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12a674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12a678: 0xc04d934  jal         func_1364D0
    ctx->pc = 0x12A678u;
    SET_GPR_U32(ctx, 31, 0x12A680u);
    ctx->pc = 0x1364D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364D0u, 0x12A678u, 0x12A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A680u;
}
