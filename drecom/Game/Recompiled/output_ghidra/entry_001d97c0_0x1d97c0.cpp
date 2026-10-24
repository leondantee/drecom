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

// Function: entry_001d97c0
// Address: 0x1d97c0 - 0x1d97f4
void entry_001d97c0_0x1d97c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d97c0_0x1d97c0");
#endif

    switch (ctx->pc) {
        case 0x1d97c8u: goto label_1d97c8;
        case 0x1d97d8u: goto label_1d97d8;
        case 0x1d97ecu: goto label_1d97ec;
        default: break;
    }

    ctx->pc = 0x1d97c0u;

    // 0x1d97c0: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x1D97C0u;
    SET_GPR_U32(ctx, 31, 0x1D97C8u);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x1D97C0u, 0x1D97C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97C8u;
label_1d97c8:
    // 0x1d97c8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D97C8u;
    {
        const bool branch_taken_0x1d97c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d97c8) {
            ctx->pc = 0x1D97B4u;
            return;
        }
    }
    ctx->pc = 0x1D97D0u;
    // 0x1d97d0: 0xc076530  jal         func_1D94C0
    ctx->pc = 0x1D97D0u;
    SET_GPR_U32(ctx, 31, 0x1D97D8u);
    ctx->pc = 0x1D94C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D94C0u, 0x1D97D0u, 0x1D97D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97D8u;
label_1d97d8:
    // 0x1d97d8: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x1d97d8u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1d97dc: 0x1ec00005  bgtz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D97DCu;
    {
        const bool branch_taken_0x1d97dc = (GPR_S32(ctx, 22) > 0);
        if (branch_taken_0x1d97dc) {
            ctx->pc = 0x1D97F4u;
            return;
        }
    }
    ctx->pc = 0x1D97E4u;
    // 0x1d97e4: 0xc0766a4  jal         func_1D9A90
    ctx->pc = 0x1D97E4u;
    SET_GPR_U32(ctx, 31, 0x1D97ECu);
    ctx->pc = 0x1D9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9A90u, 0x1D97E4u, 0x1D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97ECu;
label_1d97ec:
    // 0x1d97ec: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1D97ECu;
    {
        const bool branch_taken_0x1d97ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97ec) {
            ctx->pc = 0x1D9A58u;
            return;
        }
    }
    ctx->pc = 0x1D97F4u;
}
