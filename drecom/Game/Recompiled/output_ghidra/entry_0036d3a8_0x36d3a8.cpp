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

// Function: entry_0036d3a8
// Address: 0x36d3a8 - 0x36d3c4
void entry_0036d3a8_0x36d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d3a8_0x36d3a8");
#endif

    switch (ctx->pc) {
        case 0x36d3c0u: goto label_36d3c0;
        default: break;
    }

    ctx->pc = 0x36d3a8u;

    // 0x36d3a8: 0x2e010011  sltiu       $at, $s0, 0x11
    ctx->pc = 0x36d3a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x36d3ac: 0x1420fff1  bnez        $at, . + 4 + (-0xF << 2)
    ctx->pc = 0x36D3ACu;
    {
        const bool branch_taken_0x36d3ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x36d3ac) {
            ctx->pc = 0x36D374u;
            return;
        }
    }
    ctx->pc = 0x36D3B4u;
    // 0x36d3b4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d3b8: 0xc099010  jal         func_264040
    ctx->pc = 0x36D3B8u;
    SET_GPR_U32(ctx, 31, 0x36D3C0u);
    ctx->pc = 0x264040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264040u, 0x36D3B8u, 0x36D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3C0u;
label_36d3c0:
    // 0x36d3c0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x36d3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    ctx->pc = 0x36d3c4u;
}
