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

// Function: entry_00165104
// Address: 0x165104 - 0x165120
void entry_00165104_0x165104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165104_0x165104");
#endif

    switch (ctx->pc) {
        case 0x165114u: goto label_165114;
        default: break;
    }

    ctx->pc = 0x165104u;

    // 0x165104: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x165104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x165108: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x165108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x16510c: 0xc059474  jal         func_1651D0
    ctx->pc = 0x16510Cu;
    SET_GPR_U32(ctx, 31, 0x165114u);
    ctx->pc = 0x1651D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1651D0u, 0x16510Cu, 0x165114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165114u;
label_165114:
    // 0x165114: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x165114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x165118: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x165118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x16511c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x16511cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->pc = 0x165120u;
}
