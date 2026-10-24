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

// Function: entry_002cc840
// Address: 0x2cc840 - 0x2cc854
void entry_002cc840_0x2cc840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cc840_0x2cc840");
#endif

    switch (ctx->pc) {
        case 0x2cc84cu: goto label_2cc84c;
        default: break;
    }

    ctx->pc = 0x2cc840u;

    // 0x2cc840: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2cc840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cc844: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x2CC844u;
    SET_GPR_U32(ctx, 31, 0x2CC84Cu);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x2CC844u, 0x2CC84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC84Cu;
label_2cc84c:
    // 0x2cc84c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CC84Cu;
    {
        const bool branch_taken_0x2cc84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc84c) {
            ctx->pc = 0x2CC870u;
            return;
        }
    }
    ctx->pc = 0x2CC854u;
}
